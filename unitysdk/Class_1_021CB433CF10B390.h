#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSoldierState.h"
#include "unitysdk/System/Object.h"

class Class_2_2090B77B5C7838F2;
class Class_2_6B60059019300BAD;
class Class_3_543326C044264182;

#define CLASS_1_021CB433CF10B390_METHOD_1_043DA484BD3F7E9E_OFFSET UNITYSDK_OFFSET(0x15377D40)
#define CLASS_1_021CB433CF10B390_METHOD_1_83B1F93C5E0D01DA_OFFSET UNITYSDK_OFFSET(0x15377C30)
#define CLASS_1_021CB433CF10B390_METHOD_1_EF4CC656DF8CCD58_OFFSET UNITYSDK_OFFSET(0x15377B40)
#define CLASS_1_021CB433CF10B390__CTOR_OFFSET UNITYSDK_OFFSET(0x15377B30)

inline static constexpr unsigned int Class_1_021CB433CF10B390_TypeDefinitionIndex = 77349;

class Class_1_021CB433CF10B390 : public ::System::Object
{
public:
	::Class_3_543326C044264182* PDENFEFCAGN; // 0x10
	::Class_2_2090B77B5C7838F2* EEFMDEHLLFI; // 0x18

	::System::Void _ctor(::Class_3_543326C044264182* a1, ::Class_2_2090B77B5C7838F2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_543326C044264182*, ::Class_2_2090B77B5C7838F2*))((::PBYTE)hIl2Cpp + CLASS_1_021CB433CF10B390__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_EF4CC656DF8CCD58(::Class_2_6B60059019300BAD* a1, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierState a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierState))((::PBYTE)hIl2Cpp + CLASS_1_021CB433CF10B390_METHOD_1_EF4CC656DF8CCD58_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_043DA484BD3F7E9E(::Class_2_6B60059019300BAD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_021CB433CF10B390_METHOD_1_043DA484BD3F7E9E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_83B1F93C5E0D01DA(::Class_2_6B60059019300BAD* a1, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierState a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierState))((::PBYTE)hIl2Cpp + CLASS_1_021CB433CF10B390_METHOD_1_83B1F93C5E0D01DA_OFFSET))(this, a1, a2);
	}
};
