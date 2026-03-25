#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61_1.h"

class Class_2_E1DC3D0DDD796244;

#define CLASS_2_0138844B5857F8DD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16784C70)
#define CLASS_2_0138844B5857F8DD_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x16786220)
#define CLASS_2_0138844B5857F8DD_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x16786290)
#define CLASS_2_0138844B5857F8DD_METHOD_2_BBF4A547D7671F86_OFFSET UNITYSDK_OFFSET(0x16785BB0)
#define CLASS_2_0138844B5857F8DD_METHOD_2_D545E2F706415F81_OFFSET UNITYSDK_OFFSET(0x16784D40)
#define CLASS_2_0138844B5857F8DD__CCTOR_OFFSET UNITYSDK_OFFSET(0x16786160)
#define CLASS_2_0138844B5857F8DD__CTOR_OFFSET UNITYSDK_OFFSET(0x16784C60)
#define CLASS_2_0138844B5857F8DD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x167861C0)

inline static constexpr unsigned int Class_2_0138844B5857F8DD_TypeDefinitionIndex = 32935;

class Class_2_0138844B5857F8DD : public ::Class_1_5BE136E515AF9A61_1
{
public:
	static ::System::Int32* StaticGet_Field_2_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_0138844B5857F8DD_TypeDefinitionIndex)->GetStaticField(0x46C0);
	}
	static ::System::Int32* StaticGet_Field_2_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_0138844B5857F8DD_TypeDefinitionIndex)->GetStaticField(0x46C4);
	}
	static ::System::Int32* StaticGet_Field_2_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_0138844B5857F8DD_TypeDefinitionIndex)->GetStaticField(0x46C8);
	}
	::Class_2_E1DC3D0DDD796244* Field_2_0; // 0x18
	::System::Single Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x24

	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0138844B5857F8DD__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0138844B5857F8DD__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0138844B5857F8DD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_D545E2F706415F81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0138844B5857F8DD_METHOD_2_D545E2F706415F81_OFFSET))(this);
	}

	::System::Void Method_2_BBF4A547D7671F86(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0138844B5857F8DD_METHOD_2_BBF4A547D7671F86_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0138844B5857F8DD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0138844B5857F8DD_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0138844B5857F8DD_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
