#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5CD8071E94907A55.h"
#include "unitysdk/Enum_3_B8476D59AF56A31C.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_VIEWOBJECT_DONJON_FLOORMISCUTILS_GETMISCCTRLENABLED_OFFSET UNITYSDK_OFFSET(0x1199FA20)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORMISCUTILS_GETMISCTIMECTRLENABLED_OFFSET UNITYSDK_OFFSET(0x1199F7A0)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int FloorMiscUtils_TypeDefinitionIndex = 81722;

	class FloorMiscUtils : public ::System::Object
	{
	public:
		static ::System::Boolean GetMiscTimeCtrlEnabled(::Enum_3_B8476D59AF56A31C ctrlType)
		{
			return ((::System::Boolean(*)(::Enum_3_B8476D59AF56A31C))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORMISCUTILS_GETMISCTIMECTRLENABLED_OFFSET))(ctrlType);
		}

		static ::System::Boolean GetMiscCtrlEnabled(::Enum_3_5CD8071E94907A55 ctrlType)
		{
			return ((::System::Boolean(*)(::Enum_3_5CD8071E94907A55))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORMISCUTILS_GETMISCCTRLENABLED_OFFSET))(ctrlType);
		}
	};
}
