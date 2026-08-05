#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFAE8EEE8A37DDF2.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/InLevelPauseLevelTab.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_1E0CF91A5D8A4275;
class Class_1_59778CA46DD656B4;
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELPAUSEDIALOGCONTEXT_GET_ISBANPAUSE_OFFSET UNITYSDK_OFFSET(0x199F1B10)
#define MOLEMOLE_UIINLEVELPAUSEDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x199F1B60)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseDialogContext_TypeDefinitionIndex = 91160;

	class UIInLevelPauseDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_59778CA46DD656B4* Btn2Ctx; // 0x28
		::Class_1_59778CA46DD656B4* CompleteBtnCtx; // 0x30
		::System::Collections::Generic::List_1<::Class_1_1E0CF91A5D8A4275*>* TabBtnCtx; // 0x38
		::Class_1_59778CA46DD656B4* BtnUnstuckLongCtx; // 0x40
		::System::Action_1<::Enum_3_DFAE8EEE8A37DDF2>* PostUIDestroy; // 0x48
		::Class_1_59778CA46DD656B4* BtnUnstuckCtx; // 0x50
		::System::Func_1<::System::Boolean>* GetIsToggle; // 0x58
		::System::Action_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*>* SettingDictModifier; // 0x60
		::System::Action_1<::System::Boolean>* OnSetToggle; // 0x68
		::Class_1_59778CA46DD656B4* Btn1Ctx; // 0x70
		::MoleMole::ESystemSettingType SystemSettingType; // 0x78
		::System::Boolean ShowToggle; // 0x7C
		::System::Boolean RealPause; // 0x7D
		::System::Boolean SuspendScreenEffect; // 0x7E
		::System::Boolean HideTopTabsAndBottomButtons; // 0x7F
		::System::Boolean showBangkovCountdown; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsBanPause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGCONTEXT_GET_ISBANPAUSE_OFFSET))(this);
		}
	};
}
