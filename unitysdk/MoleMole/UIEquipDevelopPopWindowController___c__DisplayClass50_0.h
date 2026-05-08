#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3B1E761D184CCDAF;
namespace MoleMole { class UIEquipDevelopPopWindowController; }

#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x149B8570)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_0__ONCLICKEQUIPLEVELBTN_B__0_OFFSET UNITYSDK_OFFSET(0x149B8580)

namespace MoleMole
{
	inline static constexpr unsigned int UIEquipDevelopPopWindowController___c__DisplayClass50_0_TypeDefinitionIndex = 44462;

	class UIEquipDevelopPopWindowController___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::Class_2_3B1E761D184CCDAF* realItemData; // 0x10
		::MoleMole::UIEquipDevelopPopWindowController* __4__this; // 0x18
		::System::UInt32 curlevel; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickEquipLevelBtn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_0__ONCLICKEQUIPLEVELBTN_B__0_OFFSET))(this);
		}
	};
}
