#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_2AE1D80996AD66EA_2_METHOD_1_47B047590A4850CC_OFFSET UNITYSDK_OFFSET(0x144F9CF0)
#define CLASS_1_2AE1D80996AD66EA_2_METHOD_1_E2C273CA106EBD0B_OFFSET UNITYSDK_OFFSET(0x144F9D50)
#define CLASS_1_2AE1D80996AD66EA_2__CTOR_OFFSET UNITYSDK_OFFSET(0x144F9CE0)

inline static constexpr unsigned int Class_1_2AE1D80996AD66EA_2_TypeDefinitionIndex = 62895;

class Class_1_2AE1D80996AD66EA_2 : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint Field_1_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_2AE1D80996AD66EA_2__CTOR_OFFSET))(this, a1);
	}

	::System::Object* Method_1_47B047590A4850CC()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AE1D80996AD66EA_2_METHOD_1_47B047590A4850CC_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_E2C273CA106EBD0B()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AE1D80996AD66EA_2_METHOD_1_E2C273CA106EBD0B_OFFSET))(this);
	}
};
