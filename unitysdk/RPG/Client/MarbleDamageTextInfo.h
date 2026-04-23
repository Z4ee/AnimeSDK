#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_34.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MARBLEDAMAGETEXTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA813A60)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleDamageTextInfo_TypeDefinitionIndex = 60603;

	class MarbleDamageTextInfo : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* Target; // 0x10
		::System::Single Scale; // 0x18
		::Enum_3_0A3761FE34514D6C_34 DamageType; // 0x1C
		::System::UInt32 EntityID; // 0x20
		::System::Single Duration; // 0x24
		::System::Int32 Damage; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEDAMAGETEXTINFO__CTOR_OFFSET))(this);
		}
	};
}
