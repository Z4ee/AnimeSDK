#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class ItemStyle; }

#define MOLEMOLE_UIINLEVELGUIDEITEMCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15D7AA90)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelGuideItemContext_TypeDefinitionIndex = 40201;

	class UIInLevelGuideItemContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::ItemStyle* customItemStyle; // 0x28
		::System::Boolean ShowFadeAnim; // 0x30

		::System::Void _ctor(::System::Boolean anim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDEITEMCONTEXT__CTOR_OFFSET))(this, anim);
		}
	};
}
