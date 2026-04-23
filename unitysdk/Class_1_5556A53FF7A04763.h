#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_92C4F468C62D6105;

#define CLASS_1_5556A53FF7A04763_METHOD_1_38CB37E818A86F19_OFFSET UNITYSDK_OFFSET(0x90D0130)
#define CLASS_1_5556A53FF7A04763_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0x90D00C0)
#define CLASS_1_5556A53FF7A04763__CCTOR_OFFSET UNITYSDK_OFFSET(0x90D0250)
#define CLASS_1_5556A53FF7A04763__CTOR_OFFSET UNITYSDK_OFFSET(0x90D0120)

inline static constexpr unsigned int Class_1_5556A53FF7A04763_TypeDefinitionIndex = 69335;

class Class_1_5556A53FF7A04763 : public ::System::Object
{
public:
	static ::Class_1_5556A53FF7A04763** StaticGet_Field_1_0()
	{
		return (::Class_1_5556A53FF7A04763**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5556A53FF7A04763_TypeDefinitionIndex)->GetStaticField(0x5BF20);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5556A53FF7A04763__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5556A53FF7A04763__CCTOR_OFFSET))();
	}

	static ::Class_1_5556A53FF7A04763* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_5556A53FF7A04763*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5556A53FF7A04763_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}

	::System::Void Method_1_38CB37E818A86F19(::Class_2_92C4F468C62D6105* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_92C4F468C62D6105*))((::PBYTE)hIl2Cpp + CLASS_1_5556A53FF7A04763_METHOD_1_38CB37E818A86F19_OFFSET))(this, a1);
	}
};
