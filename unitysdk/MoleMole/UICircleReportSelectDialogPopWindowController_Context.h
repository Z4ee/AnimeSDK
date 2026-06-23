#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_B96586FA1613D67F;
class Class_2_DF2C726EEEEC912D;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MOLEMOLE_UICIRCLEREPORTSELECTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15252280)

namespace MoleMole
{
	inline static constexpr unsigned int UICircleReportSelectDialogPopWindowController_Context_TypeDefinitionIndex = 62167;

	class UICircleReportSelectDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* OnCloseAction; // 0x28
		::Class_2_DF2C726EEEEC912D* CircleData; // 0x30
		::System::Collections::Generic::IReadOnlyList_1<::Class_1_B96586FA1613D67F*>* MemberTitleList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICIRCLEREPORTSELECTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
