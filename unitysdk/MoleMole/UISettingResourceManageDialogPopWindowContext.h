#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C6855DE1E2953473.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_UISETTINGRESOURCEMANAGEDIALOGPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x156B1360)

namespace MoleMole
{
	inline static constexpr unsigned int UISettingResourceManageDialogPopWindowContext_TypeDefinitionIndex = 85214;

	class UISettingResourceManageDialogPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_2<::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Boolean>* OnInnerTitlesCheckStateChange; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* TitleCheckedStateDict; // 0x30
		::System::Int32 ContentType; // 0x38
		::System::Int32 BranchId; // 0x3C
		::System::Int32 TypeId; // 0x40
		::Enum_3_C6855DE1E2953473 PageType; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGRESOURCEMANAGEDIALOGPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
