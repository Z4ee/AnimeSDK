#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERENERGYBAREFFECT_METHOD_3_1A85060C061433F0_OFFSET UNITYSDK_OFFSET(0x1B055580)
#define RPG_GAMECORE_TRIGGERENERGYBAREFFECT_METHOD_3_DAE9B80E8E12C6FF_OFFSET UNITYSDK_OFFSET(0x1B0554E0)
#define RPG_GAMECORE_TRIGGERENERGYBAREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B055540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEnergyBarEffect_TypeDefinitionIndex = 21921;

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

		static ::System::Void Method_3_DAE9B80E8E12C6FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEnergyBarEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEnergyBarEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENERGYBAREFFECT_METHOD_3_DAE9B80E8E12C6FF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1A85060C061433F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEnergyBarEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEnergyBarEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENERGYBAREFFECT_METHOD_3_1A85060C061433F0_OFFSET))(a1, a2);
		}
	};
}
