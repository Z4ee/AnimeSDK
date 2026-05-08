#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_79CE56AB7A394B29__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C98320)
#define CLASS_1_79CE56AB7A394B29__CTOR_OFFSET UNITYSDK_OFFSET(0x18C98300)

inline static constexpr unsigned int Class_1_79CE56AB7A394B29_TypeDefinitionIndex = 57038;

class Class_1_79CE56AB7A394B29 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_6()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_79CE56AB7A394B29_TypeDefinitionIndex)->GetStaticField(0xF060);
	}
	static ::System::Single* StaticGet_Field_1_8()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_79CE56AB7A394B29_TypeDefinitionIndex)->GetStaticField(0xF064);
	}
	static ::System::Int32* StaticGet_Field_1_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_79CE56AB7A394B29_TypeDefinitionIndex)->GetStaticField(0xF068);
	}
	::System::UInt32 Field_1_5; // 0x10
	::System::Single Field_1_0; // 0x14
	::System::Single Field_1_3; // 0x18
	::System::Boolean Field_1_4; // 0x1C
	::System::Boolean Field_1_2; // 0x1D
	::System::Boolean Field_1_1; // 0x1E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79CE56AB7A394B29__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_79CE56AB7A394B29__CCTOR_OFFSET))();
	}
};
