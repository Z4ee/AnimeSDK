#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7AB88D713F5121B3_19__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C21B30)
#define CLASS_1_7AB88D713F5121B3_19__CTOR_OFFSET UNITYSDK_OFFSET(0x18C21B20)

inline static constexpr unsigned int Class_1_7AB88D713F5121B3_19_TypeDefinitionIndex = 39252;

class Class_1_7AB88D713F5121B3_19 : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_Field_1_0()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7AB88D713F5121B3_19_TypeDefinitionIndex)->GetStaticField(0x7A30);
	}
	static ::System::UInt32* StaticGet_Field_1_1()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7AB88D713F5121B3_19_TypeDefinitionIndex)->GetStaticField(0x7A34);
	}
	static ::System::UInt32* StaticGet_Field_1_2()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7AB88D713F5121B3_19_TypeDefinitionIndex)->GetStaticField(0x7A38);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AB88D713F5121B3_19__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7AB88D713F5121B3_19__CCTOR_OFFSET))();
	}
};
