#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSoldierState.h"
#include "unitysdk/System/Object.h"

class Class_2_181A7F9409C60DBC;
class Class_2_E9C9AAD7C711B3E3;
class Class_3_543326C044264182;

#define CLASS_1_021CB433CF10B390_METHOD_1_043DA484BD3F7E9E_OFFSET UNITYSDK_OFFSET(0x8CA4490)
#define CLASS_1_021CB433CF10B390_METHOD_1_83B1F93C5E0D01DA_OFFSET UNITYSDK_OFFSET(0x8CA4380)
#define CLASS_1_021CB433CF10B390_METHOD_1_EF4CC656DF8CCD58_OFFSET UNITYSDK_OFFSET(0x8CA4280)
#define CLASS_1_021CB433CF10B390__CTOR_OFFSET UNITYSDK_OFFSET(0x8CA4270)

inline static constexpr unsigned int Class_1_021CB433CF10B390_TypeDefinitionIndex = 63277;

class Class_1_021CB433CF10B390 : public ::System::Object
{
public:
	::Class_2_E9C9AAD7C711B3E3* Field_1_1; // 0x10
	::Class_3_543326C044264182* Field_1_0; // 0x18

	::System::Void _ctor(::Class_3_543326C044264182* a1, ::Class_2_E9C9AAD7C711B3E3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_543326C044264182*, ::Class_2_E9C9AAD7C711B3E3*))((::PBYTE)hIl2Cpp + CLASS_1_021CB433CF10B390__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_EF4CC656DF8CCD58(::Class_2_181A7F9409C60DBC* a1, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierState a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierState))((::PBYTE)hIl2Cpp + CLASS_1_021CB433CF10B390_METHOD_1_EF4CC656DF8CCD58_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_043DA484BD3F7E9E(::Class_2_181A7F9409C60DBC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_021CB433CF10B390_METHOD_1_043DA484BD3F7E9E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_83B1F93C5E0D01DA(::Class_2_181A7F9409C60DBC* a1, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierState a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierState))((::PBYTE)hIl2Cpp + CLASS_1_021CB433CF10B390_METHOD_1_83B1F93C5E0D01DA_OFFSET))(this, a1, a2);
	}
};
