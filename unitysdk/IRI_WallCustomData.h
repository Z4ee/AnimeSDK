#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRI_BaseWallCustomData.h"

#define IRI_WALLCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1241C2C0)

inline static constexpr unsigned int IRI_WallCustomData_TypeDefinitionIndex = 43978;

class IRI_WallCustomData : public ::IRI_BaseWallCustomData
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_WALLCUSTOMDATA__CTOR_OFFSET))(this);
	}
};
