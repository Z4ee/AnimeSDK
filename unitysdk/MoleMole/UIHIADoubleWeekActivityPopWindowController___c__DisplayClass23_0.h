#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_1699D6295DC3F818_1;
namespace MoleMole { class UIHIADoubleWeekActivityPopWindowController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_8CC15846339E7FB0;

#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA97F0)
#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__TRYTAKEALLBINGOREWARDS_B__0_OFFSET UNITYSDK_OFFSET(0x16AA9800)
#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__TRYTAKEALLBINGOREWARDS_B__2_OFFSET UNITYSDK_OFFSET(0x16AA9AB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHIADoubleWeekActivityPopWindowController___c__DisplayClass23_0_TypeDefinitionIndex = 50902;

	class UIHIADoubleWeekActivityPopWindowController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHIADoubleWeekActivityPopWindowController* __4__this; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* claimBingoIdxList; // 0x18
		::System::Action* __9__2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryTakeAllBingoRewards_b__0(::Class_1_8CC15846339E7FB0<::Class_3_1699D6295DC3F818_1*>* items)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8CC15846339E7FB0<::Class_3_1699D6295DC3F818_1*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__TRYTAKEALLBINGOREWARDS_B__0_OFFSET))(this, items);
		}

		::System::Void _TryTakeAllBingoRewards_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__TRYTAKEALLBINGOREWARDS_B__2_OFFSET))(this);
		}
	};
}
