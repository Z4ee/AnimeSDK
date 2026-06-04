#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CustomDataPos.h"
#include "unitysdk/FDRIStateOperation.h"

#define FDRIMATSTATEOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x13660100)

inline static constexpr unsigned int FDRIMatStateOperation_TypeDefinitionIndex = 44462;

class FDRIMatStateOperation : public ::FDRIStateOperation
{
public:
	::CustomDataPos customDataPos; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDRIMATSTATEOPERATION__CTOR_OFFSET))(this);
	}
};
