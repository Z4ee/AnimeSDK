#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5F152DBF108B0858.h"
#include "unitysdk/Enum_3_DFCB42601400F441_2.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_57F7F2BF8C55D6B6;
class Class_2_D02DABCF41CDA271;
class Class_2_E23E4CB2769CC93F;
namespace MoleMole { class UIBaseController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15173B50)

namespace MoleMole
{
	inline static constexpr unsigned int UIPersonalInfoEditPopWindowController_Context_TypeDefinitionIndex = 64312;

	class UIPersonalInfoEditPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_D02DABCF41CDA271* CircleMemberData; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* btnIDList; // 0x30
		::Class_1_57F7F2BF8C55D6B6* playerSysInfo; // 0x38
		::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441_2>* extraReportTypes; // 0x40
		::MoleMole::UIBaseController* openController; // 0x48
		::Class_2_E23E4CB2769CC93F* CircleData; // 0x50
		::UnityEngine::Events::UnityAction* overrideReportBtnAction; // 0x58
		::System::Boolean isMyEditWindow; // 0x60
		::System::Boolean isRealPlayer; // 0x61
		::System::Boolean isAccountCancelled; // 0x62
		::System::Boolean isShowingBirthday; // 0x63
		::Enum_3_5F152DBF108B0858 IdentityType; // 0x64
		::System::Int32 moduleID; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
