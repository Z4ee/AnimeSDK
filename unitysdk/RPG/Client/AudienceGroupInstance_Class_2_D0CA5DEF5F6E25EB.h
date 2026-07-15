#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AudienceGroupInstance_Class_1_9A90CD018E72DF20_12.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AudienceLayoutConfig; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_CLASS_2_D0CA5DEF5F6E25EB_METHOD_2_B0351A8151A472A4_OFFSET UNITYSDK_OFFSET(0x19B458F0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_CLASS_2_D0CA5DEF5F6E25EB__CTOR_OFFSET UNITYSDK_OFFSET(0x19B458D0)

namespace RPG::Client
{
	inline static constexpr unsigned int AudienceGroupInstance_Class_2_D0CA5DEF5F6E25EB_TypeDefinitionIndex = 66069;

	class AudienceGroupInstance_Class_2_D0CA5DEF5F6E25EB : public ::RPG::Client::AudienceGroupInstance_Class_1_9A90CD018E72DF20_12
	{
	public:
		::RPG::Client::AudienceLayoutConfig* Field_2_0; // 0x10
		::UnityEngine::Vector3 Field_2_1; // 0x18
		::UnityEngine::Vector2 Field_2_2; // 0x24

		::System::Void _ctor(::RPG::Client::AudienceLayoutConfig* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudienceLayoutConfig*, ::UnityEngine::Vector3, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_CLASS_2_D0CA5DEF5F6E25EB__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_B0351A8151A472A4(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_CLASS_2_D0CA5DEF5F6E25EB_METHOD_2_B0351A8151A472A4_OFFSET))(this, a1);
		}
	};
}
