#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole { class UIHIADoubleWeekActivityPageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1881FD30)

namespace MoleMole
{
	inline static constexpr unsigned int UIHIADoubleWeekActivityPageController___c__DisplayClass18_0_TypeDefinitionIndex = 90107;

	class UIHIADoubleWeekActivityPageController___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHIADoubleWeekActivityPageController* __4__this; // 0x10
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* convertToBingoList; // 0x18
		::System::Boolean isPlayedFinalBingoShow; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}
	};
}
