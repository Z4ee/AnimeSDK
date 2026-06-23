#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_434;
namespace MoleMole { class HorizontalBattleContext_HorizontalBattleTab; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HORIZONTALBATTLECONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x10D4F380)
#define MOLEMOLE_HORIZONTALBATTLECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10D4F310)

namespace MoleMole
{
	inline static constexpr unsigned int HorizontalBattleContext_TypeDefinitionIndex = 82120;

	class HorizontalBattleContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::HorizontalBattleContext_HorizontalBattleTab* RightTab; // 0x28
		::System::String* Title; // 0x30
		::MoleMole::HorizontalBattleContext_HorizontalBattleTab* LeftTab; // 0x38
		::System::String* Descript; // 0x40
		::System::String* SubTitle; // 0x48
		::System::Int32 CurrentTabIndex; // 0x50
		::System::Int32 CurrentLevelID; // 0x54

		::System::Void _ctor(::MoleMole::HorizontalBattleContext_HorizontalBattleTab* leftTab, ::MoleMole::HorizontalBattleContext_HorizontalBattleTab* rightTab)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HorizontalBattleContext_HorizontalBattleTab*, ::MoleMole::HorizontalBattleContext_HorizontalBattleTab*))((::PBYTE)hIl2Cpp + MOLEMOLE_HORIZONTALBATTLECONTEXT__CTOR_OFFSET))(this, leftTab, rightTab);
		}

		::System::Void _ctor_1(::System::String* tab1Name, ::System::String* tab2Name, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_434*>* tab1List, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_434*>* tab2List)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_434*>*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_434*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_HORIZONTALBATTLECONTEXT__CTOR_1_OFFSET))(this, tab1Name, tab2Name, tab1List, tab2List);
		}
	};
}
