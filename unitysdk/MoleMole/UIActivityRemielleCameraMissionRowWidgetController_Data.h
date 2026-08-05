#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_181;
class Class_2_208CC9941471731A_708;

#define MOLEMOLE_UIACTIVITYREMIELLECAMERAMISSIONROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A61DE00)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityRemielleCameraMissionRowWidgetController_Data_TypeDefinitionIndex = 57618;

	class UIActivityRemielleCameraMissionRowWidgetController_Data : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_181* GeneralLevel; // 0x10
		::Class_2_208CC9941471731A_708* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYREMIELLECAMERAMISSIONROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
