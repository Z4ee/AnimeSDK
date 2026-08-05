#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D_Enum_3_E7F2C0F6C689EC3E.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_5_A6F8D19602712D95;
class Class_5_DCFF91E03A93C03C;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS283_0__CHANGECHESSBOARDUPORDOWNNEW_B__0_OFFSET UNITYSDK_OFFSET(0x18998400)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS283_0__CTOR_OFFSET UNITYSDK_OFFSET(0x189983F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass283_0_TypeDefinitionIndex = 73672;

	class UIHollowMainPageController___c__DisplayClass283_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* neighbors; // 0x10
		::MoleMole::HollowChessboard::HollowEntity* tempLightEntity; // 0x18
		::Class_5_DCFF91E03A93C03C* newChessboard; // 0x20
		::Class_5_A6F8D19602712D95* curProxy; // 0x28
		::System::Action* onAnimFinish; // 0x30
		::Class_5_A6F8D19602712D95* prvProxy; // 0x38
		::MoleMole::UIHollowMainPageController* __4__this; // 0x40
		::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D_Enum_3_E7F2C0F6C689EC3E directionType; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS283_0__CTOR_OFFSET))(this);
		}

		::System::Void _ChangeChessboardUpOrDownNew_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS283_0__CHANGECHESSBOARDUPORDOWNNEW_B__0_OFFSET))(this);
		}
	};
}
