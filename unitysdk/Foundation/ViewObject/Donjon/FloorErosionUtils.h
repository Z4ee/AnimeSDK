#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_20DBED515380B93C;
class Class_2_94D89365FB513EE1_Class_1_1E471D30B2D0DECD;

#define FOUNDATION_VIEWOBJECT_DONJON_FLOOREROSIONUTILS_GETEROSIONTEMPLATEBYDONJONDATA_OFFSET UNITYSDK_OFFSET(0x14798EB0)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int FloorErosionUtils_TypeDefinitionIndex = 58103;

	class FloorErosionUtils : public ::System::Object
	{
	public:
		static ::Class_2_20DBED515380B93C* GetErosionTemplateByDonjonData(::Class_2_94D89365FB513EE1_Class_1_1E471D30B2D0DECD* donjonData)
		{
			return ((::Class_2_20DBED515380B93C*(*)(::Class_2_94D89365FB513EE1_Class_1_1E471D30B2D0DECD*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOOREROSIONUTILS_GETEROSIONTEMPLATEBYDONJONDATA_OFFSET))(donjonData);
		}
	};
}
