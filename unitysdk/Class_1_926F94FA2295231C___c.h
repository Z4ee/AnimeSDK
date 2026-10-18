#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_926F94FA2295231C;

#define CLASS_1_926F94FA2295231C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE53EB0)
#define CLASS_1_926F94FA2295231C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE53EF0)
#define CLASS_1_926F94FA2295231C___C___CCTOR_B__47_0_OFFSET UNITYSDK_OFFSET(0x1DE53F00)

inline static constexpr unsigned int Class_1_926F94FA2295231C___c_TypeDefinitionIndex = 31850;

class Class_1_926F94FA2295231C___c : public ::System::Object
{
public:
	static ::Class_1_926F94FA2295231C___c** StaticGet___9()
	{
		return (::Class_1_926F94FA2295231C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_926F94FA2295231C___c_TypeDefinitionIndex)->GetStaticField(0x1C110);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_926F94FA2295231C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_926F94FA2295231C___C__CTOR_OFFSET))(this);
	}

	::Class_1_926F94FA2295231C* __cctor_b__47_0()
	{
		return ((::Class_1_926F94FA2295231C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_926F94FA2295231C___C___CCTOR_B__47_0_OFFSET))(this);
	}
};
