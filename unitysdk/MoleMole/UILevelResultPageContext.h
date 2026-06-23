#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3FDE76C86672FDDC.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_1A345EAE5F749316_33;
class Class_3_452E05BC28CF3B11;
class Class_3_5011144206928F3A;
class Class_3_D0B68EB9E337E202_1;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
template <typename T1, typename T2> class Class_1_516A565475879095;

#define MOLEMOLE_UILEVELRESULTPAGECONTEXT_ISADDITIONAUPITEM_OFFSET UNITYSDK_OFFSET(0x16D89960)
#define MOLEMOLE_UILEVELRESULTPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16D899C0)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultPageContext_TypeDefinitionIndex = 52032;

	class UILevelResultPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnExitBattleAction; // 0x28
		::Class_3_5011144206928F3A* dungeonDoneRet; // 0x30
		::System::Collections::Generic::HashSet_1<::System::Int32>* additionalUpItemSet; // 0x38
		::System::Action* OnRestartBattleAction; // 0x40
		::System::Action* OnFairyBtnAction; // 0x48
		::System::Action* OnContinueAction; // 0x50
		::Class_1_516A565475879095<::System::UInt32, ::Class_3_D0B68EB9E337E202_1*>* RawRewardItemReasonMap; // 0x58
		::System::Collections::Generic::IDictionary_2<::System::UInt32, ::Class_3_452E05BC28CF3B11*>* FightRewards; // 0x60
		::Class_1_516A565475879095<::System::UInt32, ::Class_3_1A345EAE5F749316_33*>* RawRewardReasonItemMap; // 0x68
		::System::Action* OnStartFadeInFinsh; // 0x70
		::Enum_3_3FDE76C86672FDDC ShowType; // 0x78
		::System::Single delayExitTime; // 0x7C
		::System::Boolean IsOvernight; // 0x80
		::System::Boolean isWin; // 0x81
		::System::Boolean canRevive; // 0x82
		::System::Boolean Procedure; // 0x83
		::System::Boolean enableDelayExit; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean IsAdditionaUpItem(::System::Int32 itemId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTEXT_ISADDITIONAUPITEM_OFFSET))(this, itemId);
		}
	};
}
