#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_12;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MOLEMOLE_UISUMMERTIDETREASUREAVATARDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1629F1F0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureAvatarDialogPopWindowController_Context_TypeDefinitionIndex = 67191;

	class UISummerTideTreasureAvatarDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Func_2<::System::Int32, ::System::Boolean>* CheckRoleUnlock; // 0x28
		::System::Action_2<::MoleMole::UISummerTideTreasureAvatarDialogPopWindowController_Context*, ::System::Int32>* OnRoleConfirmed; // 0x30
		::System::Func_1<::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_12*>*>* GetAllTemplates; // 0x38
		::System::Func_2<::System::Int32, ::System::Boolean>* CheckRoleRecommend; // 0x40
		::System::Int32 CurrentRoleId; // 0x48
		::System::Int32 StageId; // 0x4C
		::System::Int32 UnlockTips; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREAVATARDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
