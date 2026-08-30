#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1750960FB5F747AB.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_A2F67B5601D04DC5;

#define CLASS_2_AB410D28C98F5E0E_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19AD9C90)
#define CLASS_2_AB410D28C98F5E0E__CTOR_OFFSET UNITYSDK_OFFSET(0x19AD9CA0)

inline static constexpr unsigned int Class_2_AB410D28C98F5E0E_TypeDefinitionIndex = 57782;

class Class_2_AB410D28C98F5E0E : public ::Class_1_1750960FB5F747AB
{
public:
	::Class_1_A2F67B5601D04DC5* BHGGPCPIFCG; // 0x30
	::System::UInt32 BFMCKHOMLDC; // 0x38
	::System::UInt32 PJIEOECDIFN; // 0x3C
	::RPG::GameCore::FixPoint IMKHIDEBGEB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB410D28C98F5E0E__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB410D28C98F5E0E_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
