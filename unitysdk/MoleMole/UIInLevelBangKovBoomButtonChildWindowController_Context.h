#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_UIINLEVELBANGKOVBOOMBUTTONCHILDWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1638C440)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelBangKovBoomButtonChildWindowController_Context_TypeDefinitionIndex = 62907;

	class UIInLevelBangKovBoomButtonChildWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::Battle::Entity* Listener; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBANGKOVBOOMBUTTONCHILDWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
