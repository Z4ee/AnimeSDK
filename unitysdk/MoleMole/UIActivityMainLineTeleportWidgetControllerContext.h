#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIActivityMainLineTeleportWidgetControllerContext_ItemInfo.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYMAINLINETELEPORTWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1975B3C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityMainLineTeleportWidgetControllerContext_TypeDefinitionIndex = 85576;

	class UIActivityMainLineTeleportWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* TextBtnText; // 0x28
		::System::String* TextTitle; // 0x30
		::System::Action* OnClickBtn; // 0x38
		::System::Collections::Generic::List_1<::MoleMole::UIActivityMainLineTeleportWidgetControllerContext_ItemInfo>* ItemInfos; // 0x40
		::System::Int32 AccessID; // 0x48
		::System::Boolean BtnInteractable; // 0x4C
		::System::Int32 BindActivityId; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMAINLINETELEPORTWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
