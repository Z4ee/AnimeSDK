#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_BC557F026D80E1C4_METHOD_1_09A39B89545FE101_OFFSET UNITYSDK_OFFSET(0x18C005B0)
#define CLASS_1_BC557F026D80E1C4_METHOD_1_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x18C00710)
#define CLASS_1_BC557F026D80E1C4_METHOD_1_8779A3F5AD742936_OFFSET UNITYSDK_OFFSET(0x18C00640)
#define CLASS_1_BC557F026D80E1C4_METHOD_1_DB2B44FABAA6A6B5_OFFSET UNITYSDK_OFFSET(0x18C00670)
#define CLASS_1_BC557F026D80E1C4__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C00750)

inline static constexpr unsigned int Class_1_BC557F026D80E1C4_TypeDefinitionIndex = 39212;

class Class_1_BC557F026D80E1C4 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC557F026D80E1C4_TypeDefinitionIndex)->GetStaticField(0x76B0);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC557F026D80E1C4_TypeDefinitionIndex)->GetStaticField(0x76B4);
	}
	// static const ::System::Int32 Field_1_2 = 0x64; // 0x0
	// static const ::System::Single Field_1_3; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BC557F026D80E1C4__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_09A39B89545FE101()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_BC557F026D80E1C4_METHOD_1_09A39B89545FE101_OFFSET))();
	}

	static ::System::Void Method_1_8779A3F5AD742936(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BC557F026D80E1C4_METHOD_1_8779A3F5AD742936_OFFSET))(a1);
	}

	static ::System::Single Method_1_DB2B44FABAA6A6B5()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_BC557F026D80E1C4_METHOD_1_DB2B44FABAA6A6B5_OFFSET))();
	}

	static ::System::Void Method_1_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BC557F026D80E1C4_METHOD_1_3C927B51D2142A24_OFFSET))(a1);
	}
};
