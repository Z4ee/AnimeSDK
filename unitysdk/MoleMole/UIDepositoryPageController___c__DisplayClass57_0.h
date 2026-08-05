#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
namespace MoleMole { class UIDepositoryPageController; }

#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___C__DISPLAYCLASS57_0__CTOR_OFFSET UNITYSDK_OFFSET(0x170B8100)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___C__DISPLAYCLASS57_0__REFRESHPREVIEWBYITEMDATA_B__0_OFFSET UNITYSDK_OFFSET(0x170B8110)

namespace MoleMole
{
	inline static constexpr unsigned int UIDepositoryPageController___c__DisplayClass57_0_TypeDefinitionIndex = 41664;

	class UIDepositoryPageController___c__DisplayClass57_0 : public ::System::Object
	{
	public:
		::Class_1_0D6706375CDAAE8C* itemData; // 0x10
		::MoleMole::UIDepositoryPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___C__DISPLAYCLASS57_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshPreviewByItemData_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___C__DISPLAYCLASS57_0__REFRESHPREVIEWBYITEMDATA_B__0_OFFSET))(this);
		}
	};
}
