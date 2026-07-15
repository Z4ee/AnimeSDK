#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_1EEC7A202DD770F0;

#define CLASS_2_7B1C7CBB7B4FF79A_METHOD_2_75DF69148300D77E_OFFSET UNITYSDK_OFFSET(0x14A0CFD0)
#define CLASS_2_7B1C7CBB7B4FF79A_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x14A0CDB0)
#define CLASS_2_7B1C7CBB7B4FF79A_METHOD_2_B433DD4DC78D168A_OFFSET UNITYSDK_OFFSET(0x14A0D080)
#define CLASS_2_7B1C7CBB7B4FF79A_METHOD_2_BD3078E21D74E44F_OFFSET UNITYSDK_OFFSET(0x14A0CE10)
#define CLASS_2_7B1C7CBB7B4FF79A__CTOR_OFFSET UNITYSDK_OFFSET(0x14A0D220)

inline static constexpr unsigned int Class_2_7B1C7CBB7B4FF79A_TypeDefinitionIndex = 68187;

class Class_2_7B1C7CBB7B4FF79A : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::Il2CppArray<::Class_2_1EEC7A202DD770F0*>* Field_2_0; // 0x60
	::System::UInt32 Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B1C7CBB7B4FF79A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_7B1C7CBB7B4FF79A_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_BD3078E21D74E44F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B1C7CBB7B4FF79A_METHOD_2_BD3078E21D74E44F_OFFSET))(this);
	}

	::System::Void Method_2_75DF69148300D77E(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_2_7B1C7CBB7B4FF79A_METHOD_2_75DF69148300D77E_OFFSET))(this, a1);
	}

	::System::Void Method_2_B433DD4DC78D168A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7B1C7CBB7B4FF79A_METHOD_2_B433DD4DC78D168A_OFFSET))(this, a1);
	}
};
