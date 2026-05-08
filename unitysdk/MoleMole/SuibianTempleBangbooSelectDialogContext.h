#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D3384FC764485EA3.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_SUIBIANTEMPLEBANGBOOSELECTDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15E5BC70)

namespace MoleMole
{
	inline static constexpr unsigned int SuibianTempleBangbooSelectDialogContext_TypeDefinitionIndex = 68546;

	class SuibianTempleBangbooSelectDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::UInt32>* OnSelectBuddy; // 0x28
		::System::UInt32 ProductWorkerBuddy; // 0x30
		::System::Int32 ProductID; // 0x34
		::Enum_3_D3384FC764485EA3 Type; // 0x38
		::System::UInt32 CurShelveID; // 0x3C
		::System::UInt32 WorkBenchID; // 0x40
		::System::Boolean ConfirmDontCloseUI; // 0x44
		::System::UInt32 InitSelectBuddy; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUIBIANTEMPLEBANGBOOSELECTDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
