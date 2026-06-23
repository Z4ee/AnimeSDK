#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x152DEC00)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x152DEBA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointWidgetController_TypeDefinitionIndex = 48155;

	class UIUrbanMapPointWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Boolean* StaticGet_NeedCachePoint()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIUrbanMapPointWidgetController_TypeDefinitionIndex)->GetStaticField(0xE5D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTROLLER__CCTOR_OFFSET))();
		}
	};
}
