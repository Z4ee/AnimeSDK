#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UISOCIALCIRCLETABTITLEWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x13819DE0)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleTabTitleWidgetController_Data_TypeDefinitionIndex = 57600;

	class UISocialCircleTabTitleWidgetController_Data : public ::System::Object
	{
	public:
		::System::String* Title; // 0x10
		::System::Int32 MaxNum; // 0x18
		::System::Int32 CurrentNum; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLETABTITLEWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
