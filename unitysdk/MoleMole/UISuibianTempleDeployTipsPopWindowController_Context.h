#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UISuibianTempleDeployTipsPopWindowController_AttrItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISUIBIANTEMPLEDEPLOYTIPSPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12741D40)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleDeployTipsPopWindowController_Context_TypeDefinitionIndex = 67045;

	class UISuibianTempleDeployTipsPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UISuibianTempleDeployTipsPopWindowController_AttrItem*>* Items; // 0x28
		::System::Int32 CurLevel; // 0x30
		::System::Int32 PrvLevel; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEDEPLOYTIPSPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
