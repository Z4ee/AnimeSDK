#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_11F0E0D52D9FF574;

#define CLASS_1_F2B6342A88ED1C92_METHOD_1_8BD656461A0D58F3_OFFSET UNITYSDK_OFFSET(0x16D05870)
#define CLASS_1_F2B6342A88ED1C92_METHOD_1_E19A0F8DE8D621E3_OFFSET UNITYSDK_OFFSET(0x16D061C0)
#define CLASS_1_F2B6342A88ED1C92__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D05860)
#define CLASS_1_F2B6342A88ED1C92__CTOR_OFFSET UNITYSDK_OFFSET(0x16D05850)

inline static constexpr unsigned int Class_1_F2B6342A88ED1C92_TypeDefinitionIndex = 60135;

class Class_1_F2B6342A88ED1C92 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F2B6342A88ED1C92_TypeDefinitionIndex)->GetStaticField(0xF720);
	}
	static ::System::Single* StaticGet_Field_1_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F2B6342A88ED1C92_TypeDefinitionIndex)->GetStaticField(0xF724);
	}
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F2B6342A88ED1C92_TypeDefinitionIndex)->GetStaticField(0xF728);
	}
	static ::System::Single* StaticGet_Field_1_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F2B6342A88ED1C92_TypeDefinitionIndex)->GetStaticField(0xF72C);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2B6342A88ED1C92__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F2B6342A88ED1C92__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_8BD656461A0D58F3(::Class_1_11F0E0D52D9FF574* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_1_11F0E0D52D9FF574*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F2B6342A88ED1C92_METHOD_1_8BD656461A0D58F3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E19A0F8DE8D621E3(::Class_1_11F0E0D52D9FF574* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_1_11F0E0D52D9FF574*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F2B6342A88ED1C92_METHOD_1_E19A0F8DE8D621E3_OFFSET))(a1, a2);
	}
};
