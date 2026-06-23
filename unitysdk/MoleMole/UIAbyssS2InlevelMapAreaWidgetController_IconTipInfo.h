#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_ICONTIPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x12BEE4F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2InlevelMapAreaWidgetController_IconTipInfo_TypeDefinitionIndex = 60809;

	class UIAbyssS2InlevelMapAreaWidgetController_IconTipInfo : public ::System::Object
	{
	public:
		::System::String* Desc; // 0x10
		::System::String* Title; // 0x18
		::System::String* IconPath; // 0x20
		::UnityEngine::Color IconColor; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER_ICONTIPINFO__CTOR_OFFSET))(this);
		}
	};
}
