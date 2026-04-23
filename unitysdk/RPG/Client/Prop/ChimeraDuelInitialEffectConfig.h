#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelInitialEffectConfig_ConditionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPG_CLIENT_PROP_CHIMERADUELINITIALEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xADC7FE0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelInitialEffectConfig_TypeDefinitionIndex = 71818;

	class ChimeraDuelInitialEffectConfig : public ::System::Object
	{
	public:
		::System::UInt32 ChimeraID; // 0x10
		::System::String* EffectPath; // 0x18
		::UnityEngine::Vector3 Scale; // 0x20
		::System::String* AttachPointName; // 0x30
		::RPG::Client::Prop::ChimeraDuelInitialEffectConfig_ConditionType Condition; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELINITIALEFFECTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
