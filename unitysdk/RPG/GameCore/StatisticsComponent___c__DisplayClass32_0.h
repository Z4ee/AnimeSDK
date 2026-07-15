#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_STATISTICSCOMPONENT___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12801A30)
#define RPG_GAMECORE_STATISTICSCOMPONENT___C__DISPLAYCLASS32_0___ONCHARACTERLIMBO_B__0_OFFSET UNITYSDK_OFFSET(0x128078F0)
#define RPG_GAMECORE_STATISTICSCOMPONENT___C__DISPLAYCLASS32_0___ONCHARACTERLIMBO_B__1_OFFSET UNITYSDK_OFFSET(0x12807A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StatisticsComponent___c__DisplayClass32_0_TypeDefinitionIndex = 55065;

	class StatisticsComponent___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* SourceStatusIdList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* DefenderStatusIdList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Void __OnCharacterLimbo_b__0(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT___C__DISPLAYCLASS32_0___ONCHARACTERLIMBO_B__0_OFFSET))(this, a1);
		}

		::System::Void __OnCharacterLimbo_b__1(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT___C__DISPLAYCLASS32_0___ONCHARACTERLIMBO_B__1_OFFSET))(this, a1);
		}
	};
}
