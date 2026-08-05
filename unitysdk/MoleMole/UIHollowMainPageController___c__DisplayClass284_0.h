#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D_Enum_3_E7F2C0F6C689EC3E.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"

class Class_5_DCFF91E03A93C03C;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS284_0__CHANGECHESSBOARDUPORDOWNMOVEENTITY_B__0_OFFSET UNITYSDK_OFFSET(0x18998E10)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS284_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18998E00)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass284_0_TypeDefinitionIndex = 73692;

	class UIHollowMainPageController___c__DisplayClass284_0 : public ::System::Object
	{
	public:
		::MoleMole::HollowChessboard::HollowEntity* tempLightEntity; // 0x10
		::MoleMole::UIHollowMainPageController* __4__this; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* neighbors; // 0x20
		::System::Action* onAnimFinish; // 0x28
		::Class_5_DCFF91E03A93C03C* newChessboard; // 0x30
		::MoleMole::HollowChessboard::HollowChessboardUID fromChessboardUid; // 0x38
		::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D_Enum_3_E7F2C0F6C689EC3E directionType; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS284_0__CTOR_OFFSET))(this);
		}

		::System::Void _ChangeChessboardUpOrDownMoveEntity_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS284_0__CHANGECHESSBOARDUPORDOWNMOVEENTITY_B__0_OFFSET))(this);
		}
	};
}
