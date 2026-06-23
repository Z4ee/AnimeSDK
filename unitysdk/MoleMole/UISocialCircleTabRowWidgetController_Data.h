#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_DF2C726EEEEC912D;

#define MOLEMOLE_UISOCIALCIRCLETABROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16171C00)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleTabRowWidgetController_Data_TypeDefinitionIndex = 45984;

	class UISocialCircleTabRowWidgetController_Data : public ::System::Object
	{
	public:
		::Class_2_DF2C726EEEEC912D* SocialCircleDataExt; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLETABROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
