#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/DefaultConstruct.h"
#include "unitysdk/Struct_2_4355D25F091C65D0.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_F213AC3D3FBF57B5_2_METHOD_2_3B92C9EE2859AFA1_OFFSET UNITYSDK_OFFSET(0x69D140)
#define STRUCT_2_F213AC3D3FBF57B5_2_METHOD_2_64F0C85A431FBD69_OFFSET UNITYSDK_OFFSET(0x69C5E0)
#define STRUCT_2_F213AC3D3FBF57B5_2_METHOD_2_AF1F44082225D865_OFFSET UNITYSDK_OFFSET(0x6F89B0)
#define STRUCT_2_F213AC3D3FBF57B5_2_METHOD_2_D8D09BDD3410ABE4_OFFSET UNITYSDK_OFFSET(0x6F8950)
#define STRUCT_2_F213AC3D3FBF57B5_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x10DE1460)
#define STRUCT_2_F213AC3D3FBF57B5_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x6D1E20)
#define STRUCT_2_F213AC3D3FBF57B5_2__CTOR_OFFSET UNITYSDK_OFFSET(0x6F88B0)

inline static constexpr unsigned int Struct_2_F213AC3D3FBF57B5_2_TypeDefinitionIndex = 50173;

struct alignas(8) Struct_2_F213AC3D3FBF57B5_2
{
	static ::Struct_2_F213AC3D3FBF57B5_2* StaticGet_Field_2_1()
	{
		return (::Struct_2_F213AC3D3FBF57B5_2*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_F213AC3D3FBF57B5_2_TypeDefinitionIndex)->GetStaticField(0xBE70);
	}
	::Struct_2_4355D25F091C65D0 Field_2_0; // 0x10

	::System::Void _ctor(::Foundation::DefaultConstruct a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::DefaultConstruct))((::PBYTE)hIl2Cpp + STRUCT_2_F213AC3D3FBF57B5_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Struct_2_4355D25F091C65D0 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_4355D25F091C65D0))((::PBYTE)hIl2Cpp + STRUCT_2_F213AC3D3FBF57B5_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_F213AC3D3FBF57B5_2__CCTOR_OFFSET))();
	}

	/*
	::Foundation::Unreal::Interval_1<::System::Single> Method_2_3B92C9EE2859AFA1()
	{
		return ((::Foundation::Unreal::Interval_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F213AC3D3FBF57B5_2_METHOD_2_3B92C9EE2859AFA1_OFFSET))(this);
	}
	*/

	/*
	::System::Single Method_2_D8D09BDD3410ABE4(::Foundation::Unreal::Interval_1<::System::Single> a1)
	{
		return ((::System::Single(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>))((::PBYTE)hIl2Cpp + STRUCT_2_F213AC3D3FBF57B5_2_METHOD_2_D8D09BDD3410ABE4_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Single Method_2_AF1F44082225D865(::Foundation::Unreal::Interval_1<::System::Single> a1)
	{
		return ((::System::Single(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>))((::PBYTE)hIl2Cpp + STRUCT_2_F213AC3D3FBF57B5_2_METHOD_2_AF1F44082225D865_OFFSET))(this, a1);
	}
	*/

	::System::Boolean Method_2_64F0C85A431FBD69()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F213AC3D3FBF57B5_2_METHOD_2_64F0C85A431FBD69_OFFSET))(this);
	}
};
