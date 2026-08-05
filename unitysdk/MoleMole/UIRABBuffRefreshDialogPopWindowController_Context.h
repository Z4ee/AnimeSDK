#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_8BAFC913A3AC9999;
class Class_2_B9416AD3CF7CE7E5;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRABBUFFREFRESHDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17E1A790)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABBuffRefreshDialogPopWindowController_Context_TypeDefinitionIndex = 71749;

	class UIRABBuffRefreshDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnConfirm; // 0x28
		::Class_2_B9416AD3CF7CE7E5* BuddyData; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* ValidFactorType; // 0x38
		::Class_2_8BAFC913A3AC9999* FactorData; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUFFREFRESHDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
