#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_79CE56AB7A394B29__CCTOR_OFFSET UNITYSDK_OFFSET(0x11EA6380)
#define CLASS_1_79CE56AB7A394B29__CTOR_OFFSET UNITYSDK_OFFSET(0x11EA6360)

inline static constexpr unsigned int Class_1_79CE56AB7A394B29_TypeDefinitionIndex = 65547;

class Class_1_79CE56AB7A394B29 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_10()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_79CE56AB7A394B29_TypeDefinitionIndex)->GetStaticField(0x10460);
	}
	static ::System::Single* StaticGet_Field_1_11()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_79CE56AB7A394B29_TypeDefinitionIndex)->GetStaticField(0x10464);
	}
	static ::System::Single* StaticGet_Field_1_9()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_79CE56AB7A394B29_TypeDefinitionIndex)->GetStaticField(0x10468);
	}
	::System::Boolean Field_1_5; // 0x10
	::System::Boolean Field_1_0; // 0x11
	::System::Boolean Field_1_7; // 0x12
	::System::Single Field_1_6; // 0x14
	::System::UInt32 Field_1_4; // 0x18
	::System::Single Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79CE56AB7A394B29__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_79CE56AB7A394B29__CCTOR_OFFSET))();
	}
};
