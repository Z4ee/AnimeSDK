#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLETRIGGEREFFECT_METHOD_3_1F0075A987BF1DED_OFFSET UNITYSDK_OFFSET(0x198DDEE0)
#define RPG_GAMECORE_MARBLETRIGGEREFFECT_METHOD_3_1F196970AEF2997B_OFFSET UNITYSDK_OFFSET(0x198DE790)
#define RPG_GAMECORE_MARBLETRIGGEREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x198DDE90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleTriggerEffect_TypeDefinitionIndex = 15991;

	class MarbleTriggerEffect : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::System::UInt32 EffectId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLETRIGGEREFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1F196970AEF2997B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleTriggerEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleTriggerEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLETRIGGEREFFECT_METHOD_3_1F196970AEF2997B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1F0075A987BF1DED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleTriggerEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleTriggerEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLETRIGGEREFFECT_METHOD_3_1F0075A987BF1DED_OFFSET))(a1, a2);
		}
	};
}
