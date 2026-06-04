#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7AB88D713F5121B3_17__CCTOR_OFFSET UNITYSDK_OFFSET(0x18920A60)
#define CLASS_1_7AB88D713F5121B3_17__CTOR_OFFSET UNITYSDK_OFFSET(0x18920A50)

inline static constexpr unsigned int Class_1_7AB88D713F5121B3_17_TypeDefinitionIndex = 38444;

class Class_1_7AB88D713F5121B3_17 : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_Field_1_0()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7AB88D713F5121B3_17_TypeDefinitionIndex)->GetStaticField(0x9120);
	}
	static ::System::UInt32* StaticGet_Field_1_1()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7AB88D713F5121B3_17_TypeDefinitionIndex)->GetStaticField(0x9124);
	}
	static ::System::UInt32* StaticGet_Field_1_2()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7AB88D713F5121B3_17_TypeDefinitionIndex)->GetStaticField(0x9128);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AB88D713F5121B3_17__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7AB88D713F5121B3_17__CCTOR_OFFSET))();
	}
};
