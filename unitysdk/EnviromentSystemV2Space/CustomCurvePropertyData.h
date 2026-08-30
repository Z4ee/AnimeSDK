#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/EnvCustomCurveType.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyDataBase.h"

#define ENVIROMENTSYSTEMV2SPACE_CUSTOMCURVEPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x106C93D0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int CustomCurvePropertyData_TypeDefinitionIndex = 49823;

	class CustomCurvePropertyData : public ::EnviromentSystemV2Space::PropertyDataBase
	{
	public:
		::EnviromentSystemV2Space::EnvCustomCurveType customCurveType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_CUSTOMCURVEPROPERTYDATA__CTOR_OFFSET))(this);
		}
	};
}
