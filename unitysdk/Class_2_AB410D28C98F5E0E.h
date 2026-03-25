#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_82F5C77DD4957B13.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_752172F3794CD86F;

#define CLASS_2_AB410D28C98F5E0E_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x110BB360)
#define CLASS_2_AB410D28C98F5E0E__CTOR_OFFSET UNITYSDK_OFFSET(0x110BB370)

inline static constexpr unsigned int Class_2_AB410D28C98F5E0E_TypeDefinitionIndex = 46439;

class Class_2_AB410D28C98F5E0E : public ::Class_1_82F5C77DD4957B13
{
public:
	::Class_1_752172F3794CD86F* Field_2_0; // 0x20
	::System::UInt32 Field_2_2; // 0x28
	::System::UInt32 Field_2_3; // 0x2C
	::RPG::GameCore::FixPoint Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB410D28C98F5E0E__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB410D28C98F5E0E_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
