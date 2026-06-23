#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_9C7B017C7858A67C_Class_1_9E89B2D44593C915;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICOOPLEVELINFOPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17617400)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopLevelInfoPopWindowController_Context_TypeDefinitionIndex = 72469;

	class UICoopLevelInfoPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_9C7B017C7858A67C_Class_1_9E89B2D44593C915*>* popUpGroupDatas; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELINFOPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
