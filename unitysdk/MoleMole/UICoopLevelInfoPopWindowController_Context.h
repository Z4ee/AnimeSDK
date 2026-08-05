#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_135463D7458ED59A_Class_1_9E89B2D44593C915;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICOOPLEVELINFOPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18569170)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopLevelInfoPopWindowController_Context_TypeDefinitionIndex = 78445;

	class UICoopLevelInfoPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_135463D7458ED59A_Class_1_9E89B2D44593C915*>* popUpGroupDatas; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELINFOPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
