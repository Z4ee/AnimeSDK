#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AE39A46B421CC812.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPlayerAccessoryPageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS128_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17A0CB30)
#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS128_0__ONCLICKSAVE_B__0_OFFSET UNITYSDK_OFFSET(0x17A0CB40)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryPageController___c__DisplayClass128_0_TypeDefinitionIndex = 51567;

	class UIPlayerAccessoryPageController___c__DisplayClass128_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* unlockedAndEquippedList; // 0x10
		::MoleMole::UIPlayerAccessoryPageController* __4__this; // 0x18
		::Struct_2_AE39A46B421CC812 id; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS128_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickSave_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS128_0__ONCLICKSAVE_B__0_OFFSET))(this);
		}
	};
}
