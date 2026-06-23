#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole { class UIHIADoubleWeekActivityPopWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1811A100)

namespace MoleMole
{
	inline static constexpr unsigned int UIHIADoubleWeekActivityPopWindowController___c__DisplayClass17_0_TypeDefinitionIndex = 50901;

	class UIHIADoubleWeekActivityPopWindowController___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* convertToBingoList; // 0x10
		::MoleMole::UIHIADoubleWeekActivityPopWindowController* __4__this; // 0x18
		::System::Boolean isPlayedFinalBingoShow; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}
	};
}
