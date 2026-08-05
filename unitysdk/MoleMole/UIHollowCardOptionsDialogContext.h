#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_15A8EF2824547B27.h"
#include "unitysdk/Enum_3_629D4F26795DE047.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_F092F61C50FB9E29.h"
#include "unitysdk/Struct_2_F25142AAEFFBD401.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_620;
class Class_1_0D6706375CDAAE8C;
class Class_1_14671E1C01F5FAC8;
class Class_1_3ACFABBD8F118E93;
class Class_1_4F9417780723166C;
class Class_1_661077F66F5DB866;
class Class_1_77D255857CC40452_1;
class Class_1_83665B095F1535B5_9;
class Class_1_ED8EA8A424D45C15;
class Class_2_DF73794ED874FFFB;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGCONTEXT_CONTAINSCHOICE_OFFSET UNITYSDK_OFFSET(0x18EDC190)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDC340)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardOptionsDialogContext_TypeDefinitionIndex = 62462;

	class UIHollowCardOptionsDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_620* RefreshInfo; // 0x28
		::System::Action_2<::Class_1_661077F66F5DB866*, ::Class_1_3ACFABBD8F118E93*>* onConfirm; // 0x30
		::System::Func_1<::System::String*>* SelectTipsInfoOverride; // 0x38
		::Class_1_83665B095F1535B5_9* Config; // 0x40
		::System::Action_3<::System::Int32, ::System::Int32, ::System::Action*>* chooseAction; // 0x48
		::Struct_2_F092F61C50FB9E29 GiveInfo; // 0x50
		::Class_1_0D6706375CDAAE8C* pureOldCard; // 0x60
		::System::Action_1<::System::Action*>* refreshAction; // 0x68
		::Class_1_ED8EA8A424D45C15* ChoiceNode; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* cardIndexMap; // 0x78
		::System::Collections::Generic::List_1<::Class_1_4F9417780723166C*>* RewardCards; // 0x80
		::Class_1_14671E1C01F5FAC8* pureData; // 0x88
		::System::Action* onGiveUp; // 0x90
		::System::Action_1<::System::Action*>* cancelAction; // 0x98
		::Class_2_DF73794ED874FFFB* graph; // 0xA0
		::System::Collections::Generic::List_1<::Class_1_77D255857CC40452_1*>* CombineCards; // 0xA8
		::Class_1_0D6706375CDAAE8C* pureNewCard; // 0xB0
		::Enum_3_15A8EF2824547B27 ShowType; // 0xB8
		::System::Nullable_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>> giveUpItem; // 0xBC
		::System::Boolean add; // 0xC8
		::System::Boolean ShowBG; // 0xC9
		::Struct_2_F25142AAEFFBD401 OptionInfo; // 0xCC
		::Enum_3_629D4F26795DE047 ChoiceUIType; // 0xD4
		::System::Boolean ShowBottomPanel; // 0xD8
		::System::Boolean PlaySpecialFade; // 0xD9
		::System::Boolean showCancel; // 0xDA
		::System::UInt32 initialRelicUID; // 0xDC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean ContainsChoice(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGCONTEXT_CONTAINSCHOICE_OFFSET))(this, index);
		}
	};
}
