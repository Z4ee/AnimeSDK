#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRI_BaseWallCustomData.h"

#define IRI_CURVEWALLCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17506570)

inline static constexpr unsigned int IRI_CurveWallCustomData_TypeDefinitionIndex = 45381;

class IRI_CurveWallCustomData : public ::IRI_BaseWallCustomData
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_CURVEWALLCUSTOMDATA__CTOR_OFFSET))(this);
	}
};
