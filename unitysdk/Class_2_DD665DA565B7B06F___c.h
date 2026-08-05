#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_990CFDA0450BD1BE;
namespace Foundation { template <typename T> class NapStringJoin_IntGetter_1; }

#define CLASS_2_DD665DA565B7B06F___C_METHOD_1_701450B30605DE35_OFFSET UNITYSDK_OFFSET(0x169E1F50)
#define CLASS_2_DD665DA565B7B06F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x169E1F00)
#define CLASS_2_DD665DA565B7B06F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x169E1F40)

inline static constexpr unsigned int Class_2_DD665DA565B7B06F___c_TypeDefinitionIndex = 81097;

class Class_2_DD665DA565B7B06F___c : public ::System::Object
{
public:
	static ::Class_2_DD665DA565B7B06F___c** StaticGet___9()
	{
		return (::Class_2_DD665DA565B7B06F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_DD665DA565B7B06F___c_TypeDefinitionIndex)->GetStaticField(0x3ECF0);
	}
	static ::Foundation::NapStringJoin_IntGetter_1<::Class_2_990CFDA0450BD1BE*>** StaticGet___9__76_0()
	{
		return (::Foundation::NapStringJoin_IntGetter_1<::Class_2_990CFDA0450BD1BE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_DD665DA565B7B06F___c_TypeDefinitionIndex)->GetStaticField(0x3ECF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_DD665DA565B7B06F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD665DA565B7B06F___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_701450B30605DE35(::Class_2_990CFDA0450BD1BE* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_990CFDA0450BD1BE*))((::PBYTE)hIl2Cpp + CLASS_2_DD665DA565B7B06F___C_METHOD_1_701450B30605DE35_OFFSET))(this, a1);
	}
};
