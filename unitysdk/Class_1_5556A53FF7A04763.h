#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_65223DE6C1B20E8E;

#define CLASS_1_5556A53FF7A04763_METHOD_1_38CB37E818A86F19_OFFSET UNITYSDK_OFFSET(0x17AC49B0)
#define CLASS_1_5556A53FF7A04763_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x17AC4920)
#define CLASS_1_5556A53FF7A04763__CCTOR_OFFSET UNITYSDK_OFFSET(0x17AC4AD0)
#define CLASS_1_5556A53FF7A04763__CTOR_OFFSET UNITYSDK_OFFSET(0x17AC49A0)

inline static constexpr unsigned int Class_1_5556A53FF7A04763_TypeDefinitionIndex = 71670;

class Class_1_5556A53FF7A04763 : public ::System::Object
{
public:
	static ::Class_1_5556A53FF7A04763** StaticGet_Field_1_0()
	{
		return (::Class_1_5556A53FF7A04763**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5556A53FF7A04763_TypeDefinitionIndex)->GetStaticField(0x552B0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5556A53FF7A04763__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5556A53FF7A04763__CCTOR_OFFSET))();
	}

	static ::Class_1_5556A53FF7A04763* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_5556A53FF7A04763*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5556A53FF7A04763_METHOD_1_C4BFBB1BE6C0430A_OFFSET))();
	}

	::System::Void Method_1_38CB37E818A86F19(::Class_2_65223DE6C1B20E8E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_65223DE6C1B20E8E*))((::PBYTE)hIl2Cpp + CLASS_1_5556A53FF7A04763_METHOD_1_38CB37E818A86F19_OFFSET))(this, a1);
	}
};
