#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIINTERKNOTCOURSECHAPTERWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x189AC4A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotCourseChapterWidgetController_Data_TypeDefinitionIndex = 53274;

	class UIInterKnotCourseChapterWidgetController_Data : public ::System::Object
	{
	public:
		::System::Int32 SeasonID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCOURSECHAPTERWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
