#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }

#define RPG_GAMECORE_TRIGGERMODIFIERENTERBATTLE_METHOD_3_40EC1D732529C5AC_OFFSET UNITYSDK_OFFSET(0x178CA8D0)
#define RPG_GAMECORE_TRIGGERMODIFIERENTERBATTLE_METHOD_3_EEE94AF87AEB983D_OFFSET UNITYSDK_OFFSET(0x178CA950)
#define RPG_GAMECORE_TRIGGERMODIFIERENTERBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x178CA920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerModifierEnterBattle_TypeDefinitionIndex = 21678;

	class TriggerModifierEnterBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* TargetFilter; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMODIFIERENTERBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_40EC1D732529C5AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerModifierEnterBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerModifierEnterBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMODIFIERENTERBATTLE_METHOD_3_40EC1D732529C5AC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EEE94AF87AEB983D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerModifierEnterBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerModifierEnterBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMODIFIERENTERBATTLE_METHOD_3_EEE94AF87AEB983D_OFFSET))(a1, a2);
		}
	};
}
