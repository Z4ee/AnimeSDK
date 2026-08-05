#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/DefaultConstruct.h"
#include "unitysdk/Struct_2_4355D25F091C65D0.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_114D54A31CF2C177_METHOD_2_3B92C9EE2859AFA1_OFFSET UNITYSDK_OFFSET(0x731540)
#define STRUCT_2_114D54A31CF2C177_METHOD_2_5532B5F81428FA00_OFFSET UNITYSDK_OFFSET(0x7312F0)
#define STRUCT_2_114D54A31CF2C177_METHOD_2_64F0C85A431FBD69_OFFSET UNITYSDK_OFFSET(0x731470)
#define STRUCT_2_114D54A31CF2C177_METHOD_2_D8D09BDD3410ABE4_OFFSET UNITYSDK_OFFSET(0x7314E0)
#define STRUCT_2_114D54A31CF2C177__CCTOR_OFFSET UNITYSDK_OFFSET(0x114CEDA0)
#define STRUCT_2_114D54A31CF2C177__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3EFC70)
#define STRUCT_2_114D54A31CF2C177__CTOR_OFFSET UNITYSDK_OFFSET(0x731250)

inline static constexpr unsigned int Struct_2_114D54A31CF2C177_TypeDefinitionIndex = 60940;

struct alignas(8) Struct_2_114D54A31CF2C177
{
	static ::Struct_2_114D54A31CF2C177* StaticGet_Field_2_0()
	{
		return (::Struct_2_114D54A31CF2C177*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_114D54A31CF2C177_TypeDefinitionIndex)->GetStaticField(0x10030);
	}
	::Struct_2_4355D25F091C65D0 Field_2_1; // 0x10

	::System::Void _ctor(::Foundation::DefaultConstruct a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::DefaultConstruct))((::PBYTE)hIl2Cpp + STRUCT_2_114D54A31CF2C177__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Struct_2_4355D25F091C65D0 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_4355D25F091C65D0))((::PBYTE)hIl2Cpp + STRUCT_2_114D54A31CF2C177__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_114D54A31CF2C177__CCTOR_OFFSET))();
	}

	/*
	::System::Single Method_2_5532B5F81428FA00(::Foundation::Unreal::Interval_1<::System::Single> a1)
	{
		return ((::System::Single(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>))((::PBYTE)hIl2Cpp + STRUCT_2_114D54A31CF2C177_METHOD_2_5532B5F81428FA00_OFFSET))(this, a1);
	}
	*/

	::System::Boolean Method_2_64F0C85A431FBD69()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_114D54A31CF2C177_METHOD_2_64F0C85A431FBD69_OFFSET))(this);
	}

	/*
	::System::Single Method_2_D8D09BDD3410ABE4(::Foundation::Unreal::Interval_1<::System::Single> a1)
	{
		return ((::System::Single(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>))((::PBYTE)hIl2Cpp + STRUCT_2_114D54A31CF2C177_METHOD_2_D8D09BDD3410ABE4_OFFSET))(this, a1);
	}
	*/

	/*
	::Foundation::Unreal::Interval_1<::System::Single> Method_2_3B92C9EE2859AFA1()
	{
		return ((::Foundation::Unreal::Interval_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_114D54A31CF2C177_METHOD_2_3B92C9EE2859AFA1_OFFSET))(this);
	}
	*/
};
