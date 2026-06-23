#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CAE10C54ABAE6FAF.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRoleInfoBasicChildWindowController; }

#define MOLEMOLE_UIROLEINFOBASICCHILDWINDOWCONTROLLER___C__DISPLAYCLASS51_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1579C1E0)
#define MOLEMOLE_UIROLEINFOBASICCHILDWINDOWCONTROLLER___C__DISPLAYCLASS51_0__INITAVATARSCOREDIALOG_B__3_OFFSET UNITYSDK_OFFSET(0x1579C1F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoBasicChildWindowController___c__DisplayClass51_0_TypeDefinitionIndex = 43409;

	class UIRoleInfoBasicChildWindowController___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRoleInfoBasicChildWindowController* __4__this; // 0x10
		::Enum_3_CAE10C54ABAE6FAF skillScoreLevel; // 0x18
		::System::Int32 index; // 0x1C
		::Enum_3_CAE10C54ABAE6FAF levelScoreLevel; // 0x20
		::Enum_3_CAE10C54ABAE6FAF weaponScoreLevel; // 0x24
		::Enum_3_CAE10C54ABAE6FAF totalScore; // 0x28
		::Enum_3_CAE10C54ABAE6FAF equipScoreLevel; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOBASICCHILDWINDOWCONTROLLER___C__DISPLAYCLASS51_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitAvatarScoreDialog_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOBASICCHILDWINDOWCONTROLLER___C__DISPLAYCLASS51_0__INITAVATARSCOREDIALOG_B__3_OFFSET))(this);
		}
	};
}
