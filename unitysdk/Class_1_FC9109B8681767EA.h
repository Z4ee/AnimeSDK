#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_14;
class Class_2_1D04DC59A3BCAC20;
namespace System { class String; }

#define CLASS_1_FC9109B8681767EA_METHOD_1_2751706888366009_OFFSET UNITYSDK_OFFSET(0x1C693FE0)
#define CLASS_1_FC9109B8681767EA_METHOD_1_BFBBE8A6FE167A6A_OFFSET UNITYSDK_OFFSET(0x1C694BD0)
#define CLASS_1_FC9109B8681767EA_METHOD_1_C9C776BDA0FCB960_OFFSET UNITYSDK_OFFSET(0x1C694950)
#define CLASS_1_FC9109B8681767EA_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x1C694C50)
#define CLASS_1_FC9109B8681767EA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C693FD0)

inline static constexpr unsigned int Class_1_FC9109B8681767EA_TypeDefinitionIndex = 87977;

class Class_1_FC9109B8681767EA : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FC9109B8681767EA_TypeDefinitionIndex)->GetStaticField(0x129D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FC9109B8681767EA__CCTOR_OFFSET))();
	}

	static ::Class_1_43BD383C98B4C0C5_14* Method_1_2751706888366009(::System::Int32 a1, ::Class_2_1D04DC59A3BCAC20* a2)
	{
		return ((::Class_1_43BD383C98B4C0C5_14*(*)(::System::Int32, ::Class_2_1D04DC59A3BCAC20*))((::PBYTE)hIl2Cpp + CLASS_1_FC9109B8681767EA_METHOD_1_2751706888366009_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_BFBBE8A6FE167A6A()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_FC9109B8681767EA_METHOD_1_BFBBE8A6FE167A6A_OFFSET))();
	}

	static ::System::Int32 Method_1_C9C776BDA0FCB960(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FC9109B8681767EA_METHOD_1_C9C776BDA0FCB960_OFFSET))(a1);
	}

	static ::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FC9109B8681767EA_METHOD_1_F730968E2645E14B_OFFSET))();
	}
};
