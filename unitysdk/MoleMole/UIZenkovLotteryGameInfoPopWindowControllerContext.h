#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UIZenkovLotteryGameInfoPopWindowControllerContext_RowDataContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIZENKOVLOTTERYGAMEINFOPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12B20A60)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovLotteryGameInfoPopWindowControllerContext_TypeDefinitionIndex = 82606;

	class UIZenkovLotteryGameInfoPopWindowControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UIZenkovLotteryGameInfoPopWindowControllerContext_RowDataContext*>* RowDatas; // 0x28
		::System::String* Row3Title; // 0x30
		::System::String* Row1Title; // 0x38
		::System::String* TopLeftTitle; // 0x40
		::System::String* Row2Title; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEINFOPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
