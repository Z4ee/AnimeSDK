#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_984AA94FB23486F9.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class ConeCollider; }
namespace UnityEngine { class MeshCollider; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_RANGELIMITCOLLIDER_INIT_OFFSET UNITYSDK_OFFSET(0xA286E00)
#define RPG_CLIENT_RANGELIMITCOLLIDER_SETUPRANGELIMITCOLLIDER_OFFSET UNITYSDK_OFFSET(0xA286F60)
#define RPG_CLIENT_RANGELIMITCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0xA287220)

namespace RPG::Client
{
	inline static constexpr unsigned int RangeLimitCollider_TypeDefinitionIndex = 56295;

	class RangeLimitCollider : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* Field_5_0; // 0x18
		::UnityEngine::MeshCollider* Field_5_1; // 0x20
		::RPG::Client::ConeCollider* Field_5_2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANGELIMITCOLLIDER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANGELIMITCOLLIDER_INIT_OFFSET))(this, a1);
		}

		::System::Void SetupRangeLimitCollider(::System::Boolean a1, ::Struct_2_984AA94FB23486F9 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Struct_2_984AA94FB23486F9, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANGELIMITCOLLIDER_SETUPRANGELIMITCOLLIDER_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
