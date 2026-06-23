#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFAE8EEE8A37DDF2.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/InLevelPauseLevelTab.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_1E0CF91A5D8A4275;
class Class_1_59778CA46DD656B4;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELPAUSEDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x186EEDE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseDialogContext_TypeDefinitionIndex = 64032;

	class UIInLevelPauseDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_59778CA46DD656B4* Btn1Ctx; // 0x28
		::Class_1_59778CA46DD656B4* BtnUnstuckLongCtx; // 0x30
		::System::Action_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*>* SettingDictModifier; // 0x38
		::System::Action_1<::Enum_3_DFAE8EEE8A37DDF2>* PostUIDestroy; // 0x40
		::Class_1_59778CA46DD656B4* Btn2Ctx; // 0x48
		::System::Collections::Generic::List_1<::Class_1_1E0CF91A5D8A4275*>* TabBtnCtx; // 0x50
		::Class_1_59778CA46DD656B4* BtnUnstuckCtx; // 0x58
		::MoleMole::ESystemSettingType SystemSettingType; // 0x60
		::System::Boolean RealPause; // 0x64
		::System::Boolean showBangkovCountdown; // 0x65
		::System::Boolean SuspendScreenEffect; // 0x66
		::System::Boolean HideTopTabsAndBottomButtons; // 0x67

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
