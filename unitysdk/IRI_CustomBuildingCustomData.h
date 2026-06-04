#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRI_BaseBuildingCustomData.h"

#define IRI_CUSTOMBUILDINGCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1423C520)

inline static constexpr unsigned int IRI_CustomBuildingCustomData_TypeDefinitionIndex = 44510;

class IRI_CustomBuildingCustomData : public ::IRI_BaseBuildingCustomData
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_CUSTOMBUILDINGCUSTOMDATA__CTOR_OFFSET))(this);
	}
};
