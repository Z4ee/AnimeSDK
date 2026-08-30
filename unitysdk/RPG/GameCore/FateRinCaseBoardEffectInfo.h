#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardEffectTargetSlot.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardEffectType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATERINCASEBOARDEFFECTINFO_METHOD_2_23E4FE2A65689E08_OFFSET UNITYSDK_OFFSET(0x1E0D0870)
#define RPG_GAMECORE_FATERINCASEBOARDEFFECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D0A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinCaseBoardEffectInfo_TypeDefinitionIndex = 19697;

	class FateRinCaseBoardEffectInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FateRinCaseBoardEffectType EffectType; // 0x10
		::RPG::GameCore::FateRinCaseBoardEffectTargetSlot TargetSlot; // 0x14
		::System::Boolean WaitFinish; // 0x18
		::System::Boolean UseRandomDelayBeforePlay; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDEFFECTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_23E4FE2A65689E08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateRinCaseBoardEffectInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateRinCaseBoardEffectInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDEFFECTINFO_METHOD_2_23E4FE2A65689E08_OFFSET))(a1, a2);
		}
	};
}
