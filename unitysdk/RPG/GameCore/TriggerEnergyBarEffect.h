#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERENERGYBAREFFECT_METHOD_3_1A85060C061433F0_OFFSET UNITYSDK_OFFSET(0x178C68A0)
#define RPG_GAMECORE_TRIGGERENERGYBAREFFECT_METHOD_3_7CAE0755DB6F1B3C_OFFSET UNITYSDK_OFFSET(0x178C67D0)
#define RPG_GAMECORE_TRIGGERENERGYBAREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x178C6850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEnergyBarEffect_TypeDefinitionIndex = 20932;

	class TriggerEnergyBarEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* EffectPath; // 0x20
		::System::Boolean IsLoop; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENERGYBAREFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7CAE0755DB6F1B3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEnergyBarEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEnergyBarEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENERGYBAREFFECT_METHOD_3_7CAE0755DB6F1B3C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1A85060C061433F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEnergyBarEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEnergyBarEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENERGYBAREFFECT_METHOD_3_1A85060C061433F0_OFFSET))(a1, a2);
		}
	};
}
