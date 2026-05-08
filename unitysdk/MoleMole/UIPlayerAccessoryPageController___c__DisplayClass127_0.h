#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AE39A46B421CC812_1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPlayerAccessoryPageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS127_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13DF9730)
#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS127_0__ONCLICKSAVE_B__0_OFFSET UNITYSDK_OFFSET(0x13DF9740)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryPageController___c__DisplayClass127_0_TypeDefinitionIndex = 65520;

	class UIPlayerAccessoryPageController___c__DisplayClass127_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* unlockedAndEquippedList; // 0x10
		::MoleMole::UIPlayerAccessoryPageController* __4__this; // 0x18
		::Struct_2_AE39A46B421CC812_1 id; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS127_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickSave_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS127_0__ONCLICKSAVE_B__0_OFFSET))(this);
		}
	};
}
