#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_12;
class Class_2_06016E75247690B3;
namespace System { class String; }

#define CLASS_1_09EA63A764A0F3C4_METHOD_1_792413EF1A745E7E_OFFSET UNITYSDK_OFFSET(0x1D659BE0)
#define CLASS_1_09EA63A764A0F3C4_METHOD_1_BFBBE8A6FE167A6A_OFFSET UNITYSDK_OFFSET(0x1D659B60)
#define CLASS_1_09EA63A764A0F3C4_METHOD_1_C9C776BDA0FCB960_OFFSET UNITYSDK_OFFSET(0x1D647D80)
#define CLASS_1_09EA63A764A0F3C4_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x1D65A520)
#define CLASS_1_09EA63A764A0F3C4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D659B50)

inline static constexpr unsigned int Class_1_09EA63A764A0F3C4_TypeDefinitionIndex = 91733;

class Class_1_09EA63A764A0F3C4 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_09EA63A764A0F3C4_TypeDefinitionIndex)->GetStaticField(0x13030);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_09EA63A764A0F3C4__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_BFBBE8A6FE167A6A()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_09EA63A764A0F3C4_METHOD_1_BFBBE8A6FE167A6A_OFFSET))();
	}

	static ::Class_1_43BD383C98B4C0C5_12* Method_1_792413EF1A745E7E(::System::Int32 a1, ::Class_2_06016E75247690B3* a2)
	{
		return ((::Class_1_43BD383C98B4C0C5_12*(*)(::System::Int32, ::Class_2_06016E75247690B3*))((::PBYTE)hIl2Cpp + CLASS_1_09EA63A764A0F3C4_METHOD_1_792413EF1A745E7E_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_C9C776BDA0FCB960(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_09EA63A764A0F3C4_METHOD_1_C9C776BDA0FCB960_OFFSET))(a1);
	}

	static ::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_09EA63A764A0F3C4_METHOD_1_F730968E2645E14B_OFFSET))();
	}
};
