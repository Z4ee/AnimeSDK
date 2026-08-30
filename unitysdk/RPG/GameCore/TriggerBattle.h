#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_TRIGGERBATTLE_METHOD_3_903F3741668E1671_OFFSET UNITYSDK_OFFSET(0x1D548530)
#define RPG_GAMECORE_TRIGGERBATTLE_METHOD_3_E8255C45BC552F84_OFFSET UNITYSDK_OFFSET(0x1D5484F0)
#define RPG_GAMECORE_TRIGGERBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D548520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerBattle_TypeDefinitionIndex = 21450;

	class TriggerBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* EventID; // 0x18
		::RPG::GameCore::DynamicFloat* GroupID; // 0x20
		::RPG::GameCore::DynamicFloat* BattleAreaID; // 0x28
		::RPG::GameCore::DynamicFloat* BattleAreaConfigID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E8255C45BC552F84(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBATTLE_METHOD_3_E8255C45BC552F84_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_903F3741668E1671(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBATTLE_METHOD_3_903F3741668E1671_OFFSET))(a1, a2);
		}
	};
}
