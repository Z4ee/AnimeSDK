#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_35.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MARBLEDAMAGETEXTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xD61AEB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleDamageTextInfo_TypeDefinitionIndex = 65884;

	class MarbleDamageTextInfo : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* Target; // 0x10
		::System::UInt32 EntityID; // 0x18
		::System::Single Duration; // 0x1C
		::System::Int32 Damage; // 0x20
		::Enum_3_0A3761FE34514D6C_35 DamageType; // 0x24
		::System::Single Scale; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEDAMAGETEXTINFO__CTOR_OFFSET))(this);
		}
	};
}
