#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FDRIStateMaskEnum.h"
#include "unitysdk/System/Object.h"

class FiveDimRenderingItem;

#define FDRISTATEOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x104F5C70)

inline static constexpr unsigned int FDRIStateOperation_TypeDefinitionIndex = 38034;

class FDRIStateOperation : public ::System::Object
{
public:
	::RPG::GameCore::FDRIStateMaskEnum stateCode; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDRISTATEOPERATION__CTOR_OFFSET))(this);
	}
};
