#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimSplineMovePoint.h"

#define CLASS_3_E5C4E9B7E0EC3CFD_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AF29220)
#define CLASS_3_E5C4E9B7E0EC3CFD__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF29240)

inline static constexpr unsigned int Class_3_E5C4E9B7E0EC3CFD_TypeDefinitionIndex = 23982;

class Class_3_E5C4E9B7E0EC3CFD : public ::RPG::GameCore::FiveDimSplineMovePoint
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E5C4E9B7E0EC3CFD__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E5C4E9B7E0EC3CFD_CLEAR_OFFSET))(this);
	}
};
