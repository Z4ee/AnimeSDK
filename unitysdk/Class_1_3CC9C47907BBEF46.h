#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_96F671E4E83A73C0;

#define CLASS_1_3CC9C47907BBEF46_METHOD_1_8B2C27F836EAA7B5_OFFSET UNITYSDK_OFFSET(0x19DB8D30)
#define CLASS_1_3CC9C47907BBEF46__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DB9120)
#define CLASS_1_3CC9C47907BBEF46__CTOR_OFFSET UNITYSDK_OFFSET(0x19DB8D20)

inline static constexpr unsigned int Class_1_3CC9C47907BBEF46_TypeDefinitionIndex = 39861;

class Class_1_3CC9C47907BBEF46 : public ::System::Object
{
public:
	static ::Class_1_3CC9C47907BBEF46** StaticGet_Field_1_0()
	{
		return (::Class_1_3CC9C47907BBEF46**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3CC9C47907BBEF46_TypeDefinitionIndex)->GetStaticField(0x22D60);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CC9C47907BBEF46__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3CC9C47907BBEF46__CCTOR_OFFSET))();
	}

	::System::Void Method_1_8B2C27F836EAA7B5(::Class_1_96F671E4E83A73C0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_96F671E4E83A73C0*))((::PBYTE)hIl2Cpp + CLASS_1_3CC9C47907BBEF46_METHOD_1_8B2C27F836EAA7B5_OFFSET))(this, a1);
	}
};
