#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInterKnotV3PageController; }

#define MOLEMOLE_UIINTERKNOTV3PAGECONTROLLER___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0x169B1F20)
#define MOLEMOLE_UIINTERKNOTV3PAGECONTROLLER___C__DISPLAYCLASS44_0__ONSHOW_B__0_OFFSET UNITYSDK_OFFSET(0x169B1F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotV3PageController___c__DisplayClass44_0_TypeDefinitionIndex = 77340;

	class UIInterKnotV3PageController___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::MoleMole::UIInterKnotV3PageController* __4__this; // 0x10
		::System::Int32 _openQuestId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTV3PAGECONTROLLER___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnShow_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTV3PAGECONTROLLER___C__DISPLAYCLASS44_0__ONSHOW_B__0_OFFSET))(this);
		}
	};
}
