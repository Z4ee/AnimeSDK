#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_1A4ED5CB1A221EF5;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_836EF7522AFFC93E___C_METHOD_1_59A5313B1548B3FB_OFFSET UNITYSDK_OFFSET(0x16839B20)
#define CLASS_3_836EF7522AFFC93E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16839AD0)
#define CLASS_3_836EF7522AFFC93E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16839B10)

inline static constexpr unsigned int Class_3_836EF7522AFFC93E___c_TypeDefinitionIndex = 45219;

class Class_3_836EF7522AFFC93E___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_1A4ED5CB1A221EF5*>** StaticGet___9__10_0()
	{
		return (::System::Action_1<::Class_3_1A4ED5CB1A221EF5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_836EF7522AFFC93E___c_TypeDefinitionIndex)->GetStaticField(0x39210);
	}
	static ::Class_3_836EF7522AFFC93E___c** StaticGet___9()
	{
		return (::Class_3_836EF7522AFFC93E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_836EF7522AFFC93E___c_TypeDefinitionIndex)->GetStaticField(0x39218);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_836EF7522AFFC93E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_836EF7522AFFC93E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_59A5313B1548B3FB(::Class_3_1A4ED5CB1A221EF5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1A4ED5CB1A221EF5*))((::PBYTE)hIl2Cpp + CLASS_3_836EF7522AFFC93E___C_METHOD_1_59A5313B1548B3FB_OFFSET))(this, a1);
	}
};
