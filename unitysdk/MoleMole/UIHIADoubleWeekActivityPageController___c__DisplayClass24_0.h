#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_1699D6295DC3F818_1;
namespace MoleMole { class UIHIADoubleWeekActivityPageController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_8CC15846339E7FB0;

#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x175ED280)
#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__DISPLAYCLASS24_0__TRYTAKEALLBINGOREWARDS_B__0_OFFSET UNITYSDK_OFFSET(0x175ED290)
#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__DISPLAYCLASS24_0__TRYTAKEALLBINGOREWARDS_B__2_OFFSET UNITYSDK_OFFSET(0x175ED540)

namespace MoleMole
{
	inline static constexpr unsigned int UIHIADoubleWeekActivityPageController___c__DisplayClass24_0_TypeDefinitionIndex = 47137;

	class UIHIADoubleWeekActivityPageController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* claimBingoIdxList; // 0x18
		::MoleMole::UIHIADoubleWeekActivityPageController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryTakeAllBingoRewards_b__0(::Class_1_8CC15846339E7FB0<::Class_3_1699D6295DC3F818_1*>* items)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8CC15846339E7FB0<::Class_3_1699D6295DC3F818_1*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__DISPLAYCLASS24_0__TRYTAKEALLBINGOREWARDS_B__0_OFFSET))(this, items);
		}

		::System::Void _TryTakeAllBingoRewards_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__DISPLAYCLASS24_0__TRYTAKEALLBINGOREWARDS_B__2_OFFSET))(this);
		}
	};
}
