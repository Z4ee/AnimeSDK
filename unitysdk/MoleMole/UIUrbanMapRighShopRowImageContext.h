#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIURBANMAPRIGHSHOPROWIMAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11A05290)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRighShopRowImageContext_TypeDefinitionIndex = 91156;

	class UIUrbanMapRighShopRowImageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Foundation::AssetPath QuestIcon; // 0x28
		::Foundation::AssetPath Icon; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHSHOPROWIMAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
