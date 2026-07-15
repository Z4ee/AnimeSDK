#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_105C32866538BE74;

#define CLASS_1_75067F6D04F0C8AA_METHOD_1_6F4831346CC7CE2B_OFFSET UNITYSDK_OFFSET(0x1D0F5DF0)
#define CLASS_1_75067F6D04F0C8AA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0F6080)
#define CLASS_1_75067F6D04F0C8AA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F5DE0)

inline static constexpr unsigned int Class_1_75067F6D04F0C8AA_TypeDefinitionIndex = 41510;

class Class_1_75067F6D04F0C8AA : public ::System::Object
{
public:
	static ::Class_1_75067F6D04F0C8AA** StaticGet_Field_1_0()
	{
		return (::Class_1_75067F6D04F0C8AA**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75067F6D04F0C8AA_TypeDefinitionIndex)->GetStaticField(0x4E260);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75067F6D04F0C8AA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75067F6D04F0C8AA__CCTOR_OFFSET))();
	}

	::System::Object* Method_1_6F4831346CC7CE2B(::Class_1_105C32866538BE74* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::Class_1_105C32866538BE74*))((::PBYTE)hIl2Cpp + CLASS_1_75067F6D04F0C8AA_METHOD_1_6F4831346CC7CE2B_OFFSET))(this, a1);
	}
};
