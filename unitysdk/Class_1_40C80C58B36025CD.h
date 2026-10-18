#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1059;
namespace System { class String; }

#define CLASS_1_40C80C58B36025CD_METHOD_1_B9F24902D28645A9_OFFSET UNITYSDK_OFFSET(0xB77C180)
#define CLASS_1_40C80C58B36025CD_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xB77C130)
#define CLASS_1_40C80C58B36025CD__CCTOR_OFFSET UNITYSDK_OFFSET(0xB77C4D0)
#define CLASS_1_40C80C58B36025CD__CTOR_OFFSET UNITYSDK_OFFSET(0xB77C120)

inline static constexpr unsigned int Class_1_40C80C58B36025CD_TypeDefinitionIndex = 67174;

class Class_1_40C80C58B36025CD : public ::System::Object
{
public:
	static ::Class_1_40C80C58B36025CD** StaticGet_FMJPMFEDIJL()
	{
		return (::Class_1_40C80C58B36025CD**)Il2CppClass::FromTypeDefinitionIndex(Class_1_40C80C58B36025CD_TypeDefinitionIndex)->GetStaticField(0x666A0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40C80C58B36025CD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_40C80C58B36025CD__CCTOR_OFFSET))();
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40C80C58B36025CD_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Object* Method_1_B9F24902D28645A9(::System::String* a1, ::Class_0_16E4307DCC419505_1059* a2)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_1059*))((::PBYTE)hIl2Cpp + CLASS_1_40C80C58B36025CD_METHOD_1_B9F24902D28645A9_OFFSET))(this, a1, a2);
	}
};
