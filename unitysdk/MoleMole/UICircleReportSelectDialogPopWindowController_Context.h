#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_B96586FA1613D67F;
class Class_2_E23E4CB2769CC93F;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MOLEMOLE_UICIRCLEREPORTSELECTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18544BB0)

namespace MoleMole
{
	inline static constexpr unsigned int UICircleReportSelectDialogPopWindowController_Context_TypeDefinitionIndex = 64285;

	class UICircleReportSelectDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_E23E4CB2769CC93F* CircleData; // 0x28
		::System::Collections::Generic::IReadOnlyList_1<::Class_1_B96586FA1613D67F*>* MemberTitleList; // 0x30
		::System::Action_1<::System::Int32>* OnCloseAction; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICIRCLEREPORTSELECTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
