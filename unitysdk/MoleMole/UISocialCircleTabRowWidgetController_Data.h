#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_E23E4CB2769CC93F;

#define MOLEMOLE_UISOCIALCIRCLETABROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15E908D0)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleTabRowWidgetController_Data_TypeDefinitionIndex = 70364;

	class UISocialCircleTabRowWidgetController_Data : public ::System::Object
	{
	public:
		::Class_2_E23E4CB2769CC93F* SocialCircleDataExt; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLETABROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
