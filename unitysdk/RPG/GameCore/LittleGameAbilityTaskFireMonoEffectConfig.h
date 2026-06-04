#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEABILITYTASKFIREMONOEFFECTCONFIG_METHOD_4_1B0BE13CD0C425D4_OFFSET UNITYSDK_OFFSET(0x19896990)
#define RPG_GAMECORE_LITTLEGAMEABILITYTASKFIREMONOEFFECTCONFIG_METHOD_4_8153A5890C4822B3_OFFSET UNITYSDK_OFFSET(0x19896A90)
#define RPG_GAMECORE_LITTLEGAMEABILITYTASKFIREMONOEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19896A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTaskFireMonoEffectConfig_TypeDefinitionIndex = 20223;

	class LittleGameAbilityTaskFireMonoEffectConfig : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::System::String* EffectResPath; // 0x18
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* TargetSelector; // 0x20
		::System::String* AttachPointName; // 0x28
		::System::Boolean IsAttach; // 0x30
		::RPG::MVector3 PositionOffset; // 0x34
		::RPG::MVector3 RotationOffset; // 0x40
		::RPG::MVector3 Scale; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTASKFIREMONOEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1B0BE13CD0C425D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTaskFireMonoEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTaskFireMonoEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTASKFIREMONOEFFECTCONFIG_METHOD_4_1B0BE13CD0C425D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8153A5890C4822B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTaskFireMonoEffectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTaskFireMonoEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTASKFIREMONOEFFECTCONFIG_METHOD_4_8153A5890C4822B3_OFFSET))(a1, a2);
		}
	};
}
