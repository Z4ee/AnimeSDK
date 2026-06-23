#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_0A55B5A82A61DAFA_1;
namespace MoleMole { class UIMainStoryPageController; }

#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS89_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1693FD60)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS89_0__GOTOBATTLE_G__JUMPTOLINEUPSELECT_0_OFFSET UNITYSDK_OFFSET(0x1693FD70)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPageController___c__DisplayClass89_0_TypeDefinitionIndex = 76821;

	class UIMainStoryPageController___c__DisplayClass89_0 : public ::System::Object
	{
	public:
		::Class_2_0A55B5A82A61DAFA_1* battleTemplate; // 0x10
		::MoleMole::UIMainStoryPageController* __4__this; // 0x18
		::System::Int32 archiveFileID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS89_0__CTOR_OFFSET))(this);
		}

		::System::Void _GotoBattle_g__JumpToLineupSelect_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS89_0__GOTOBATTLE_G__JUMPTOLINEUPSELECT_0_OFFSET))(this);
		}
	};
}
