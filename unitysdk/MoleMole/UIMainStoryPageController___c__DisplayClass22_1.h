#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainStoryPageController___c__DisplayClass22_0; }

#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS22_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17451640)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS22_1__INITLEVEL_B__1_OFFSET UNITYSDK_OFFSET(0x17451650)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPageController___c__DisplayClass22_1_TypeDefinitionIndex = 84548;

	class UIMainStoryPageController___c__DisplayClass22_1 : public ::System::Object
	{
	public:
		::MoleMole::UIMainStoryPageController___c__DisplayClass22_0* CS___8__locals1; // 0x10
		::System::Int32 questID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS22_1__CTOR_OFFSET))(this);
		}

		::System::Void _InitLevel_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS22_1__INITLEVEL_B__1_OFFSET))(this);
		}
	};
}
