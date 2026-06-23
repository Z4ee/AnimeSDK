#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_17E903BDA51D43F0_Struct_2_C3D22550BC75786F.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_448;

#define CLASS_2_17E903BDA51D43F0___C_METHOD_1_7DBC2107D128D126_OFFSET UNITYSDK_OFFSET(0x1718C930)
#define CLASS_2_17E903BDA51D43F0___C_METHOD_1_8AA9157FC69C9A3C_OFFSET UNITYSDK_OFFSET(0x1718C790)
#define CLASS_2_17E903BDA51D43F0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1718C740)
#define CLASS_2_17E903BDA51D43F0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1718C780)

inline static constexpr unsigned int Class_2_17E903BDA51D43F0___c_TypeDefinitionIndex = 58718;

class Class_2_17E903BDA51D43F0___c : public ::System::Object
{
public:
	static ::Class_2_17E903BDA51D43F0___c** StaticGet___9()
	{
		return (::Class_2_17E903BDA51D43F0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_17E903BDA51D43F0___c_TypeDefinitionIndex)->GetStaticField(0x33000);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_8AA9157FC69C9A3C(::Class_2_17E903BDA51D43F0_Struct_2_C3D22550BC75786F a1, ::Class_2_17E903BDA51D43F0_Struct_2_C3D22550BC75786F a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_17E903BDA51D43F0_Struct_2_C3D22550BC75786F, ::Class_2_17E903BDA51D43F0_Struct_2_C3D22550BC75786F))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0___C_METHOD_1_8AA9157FC69C9A3C_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_7DBC2107D128D126(::Class_0_16E4307DCC419505_448* a1, ::Class_0_16E4307DCC419505_448* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_448*, ::Class_0_16E4307DCC419505_448*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0___C_METHOD_1_7DBC2107D128D126_OFFSET))(this, a1, a2);
	}
};
