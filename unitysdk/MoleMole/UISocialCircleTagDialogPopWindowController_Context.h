#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_1A468755EFA0BDEC.h"
#include "unitysdk/Enum_3_67D50065736C0CA2.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_UISOCIALCIRCLETAGDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x122AFAF0)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleTagDialogPopWindowController_Context_TypeDefinitionIndex = 54521;

	class UISocialCircleTagDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_2<::Enum_3_1A468755EFA0BDEC, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>* OnCloseCallback; // 0x28
		::System::Collections::Generic::IEnumerable_1<::System::Int32>* CurrentTags; // 0x30
		::Enum_3_67D50065736C0CA2 TagDialogMode; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLETAGDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
