#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441_1.h"
#include "unitysdk/Enum_3_F3B35B60B7BAFCAF.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_57F7F2BF8C55D6B6;
class Class_2_D02DABCF41CDA271;
class Class_2_DF2C726EEEEC912D;
namespace MoleMole { class UIBaseController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14D59B40)

namespace MoleMole
{
	inline static constexpr unsigned int UIPersonalInfoEditPopWindowController_Context_TypeDefinitionIndex = 45419;

	class UIPersonalInfoEditPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIBaseController* openController; // 0x28
		::Class_1_57F7F2BF8C55D6B6* playerSysInfo; // 0x30
		::Class_2_DF2C726EEEEC912D* CircleData; // 0x38
		::Class_2_D02DABCF41CDA271* CircleMemberData; // 0x40
		::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441_1>* extraReportTypes; // 0x48
		::UnityEngine::Events::UnityAction* overrideReportBtnAction; // 0x50
		::System::Collections::Generic::List_1<::System::Int32>* btnIDList; // 0x58
		::Enum_3_F3B35B60B7BAFCAF IdentityType; // 0x60
		::System::Boolean isShowingBirthday; // 0x64
		::System::Boolean isMyEditWindow; // 0x65
		::System::Boolean isRealPlayer; // 0x66
		::System::Boolean isAccountCancelled; // 0x67
		::System::Int32 moduleID; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
