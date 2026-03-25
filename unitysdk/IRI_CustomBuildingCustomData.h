#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRI_BaseBuildingCustomData.h"

#define IRI_CUSTOMBUILDINGCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x111DAE10)

inline static constexpr unsigned int IRI_CustomBuildingCustomData_TypeDefinitionIndex = 38084;

class IRI_CustomBuildingCustomData : public ::IRI_BaseBuildingCustomData
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_CUSTOMBUILDINGCUSTOMDATA__CTOR_OFFSET))(this);
	}
};
