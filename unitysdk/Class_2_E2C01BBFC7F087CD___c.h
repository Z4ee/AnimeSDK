#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_E2C01BBFC7F087CD___C_METHOD_1_F36ECC94BB21B573_OFFSET UNITYSDK_OFFSET(0xFE305C0)
#define CLASS_2_E2C01BBFC7F087CD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFE30570)
#define CLASS_2_E2C01BBFC7F087CD___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFE305B0)

inline static constexpr unsigned int Class_2_E2C01BBFC7F087CD___c_TypeDefinitionIndex = 79021;

class Class_2_E2C01BBFC7F087CD___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__62_11()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E2C01BBFC7F087CD___c_TypeDefinitionIndex)->GetStaticField(0x3D2E0);
	}
	static ::Class_2_E2C01BBFC7F087CD___c** StaticGet___9()
	{
		return (::Class_2_E2C01BBFC7F087CD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E2C01BBFC7F087CD___c_TypeDefinitionIndex)->GetStaticField(0x3D2E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E2C01BBFC7F087CD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E2C01BBFC7F087CD___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_F36ECC94BB21B573(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E2C01BBFC7F087CD___C_METHOD_1_F36ECC94BB21B573_OFFSET))(this, a1);
	}
};
