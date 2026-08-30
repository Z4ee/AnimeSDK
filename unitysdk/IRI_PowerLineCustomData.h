#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRI_BaseBuildingCustomData.h"

#define IRI_POWERLINECUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18E70620)

inline static constexpr unsigned int IRI_PowerLineCustomData_TypeDefinitionIndex = 48023;

class IRI_PowerLineCustomData : public ::IRI_BaseBuildingCustomData
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_POWERLINECUSTOMDATA__CTOR_OFFSET))(this);
	}
};
