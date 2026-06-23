#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIYorozuyaDifficultyInfoWidgetControllerContext_NestType.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_576;

#define MOLEMOLE_UIYOROZUYADIFFICULTYINFOWIDGETCONTROLLER_ABYSSHEATCONFIGTEMPLATEEXTANDNESTTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0xFAEE140)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaDifficultyInfoWidgetController_AbyssHeatConfigTemplateExtAndNestType_TypeDefinitionIndex = 62950;

	class UIYorozuyaDifficultyInfoWidgetController_AbyssHeatConfigTemplateExtAndNestType : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_576* data; // 0x10
		::MoleMole::UIYorozuyaDifficultyInfoWidgetControllerContext_NestType nestType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTYINFOWIDGETCONTROLLER_ABYSSHEATCONFIGTEMPLATEEXTANDNESTTYPE__CTOR_OFFSET))(this);
		}
	};
}
