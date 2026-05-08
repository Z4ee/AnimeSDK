#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_11F0E0D52D9FF574;

#define CLASS_1_F2B6342A88ED1C92_METHOD_1_8BD656461A0D58F3_OFFSET UNITYSDK_OFFSET(0x12DB9310)
#define CLASS_1_F2B6342A88ED1C92_METHOD_1_E19A0F8DE8D621E3_OFFSET UNITYSDK_OFFSET(0x12DB9C40)
#define CLASS_1_F2B6342A88ED1C92__CCTOR_OFFSET UNITYSDK_OFFSET(0x12DB9300)
#define CLASS_1_F2B6342A88ED1C92__CTOR_OFFSET UNITYSDK_OFFSET(0x12DB92F0)

inline static constexpr unsigned int Class_1_F2B6342A88ED1C92_TypeDefinitionIndex = 59267;

class Class_1_F2B6342A88ED1C92 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F2B6342A88ED1C92_TypeDefinitionIndex)->GetStaticField(0xE3D0);
	}
	static ::System::Single* StaticGet_Field_1_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F2B6342A88ED1C92_TypeDefinitionIndex)->GetStaticField(0xE3D4);
	}
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F2B6342A88ED1C92_TypeDefinitionIndex)->GetStaticField(0xE3D8);
	}
	static ::System::Single* StaticGet_Field_1_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F2B6342A88ED1C92_TypeDefinitionIndex)->GetStaticField(0xE3DC);
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
