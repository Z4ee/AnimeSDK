#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_387BDAC12AFE15BA;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_C54653660BA7F249___C_METHOD_1_B0BF93601065B260_OFFSET UNITYSDK_OFFSET(0x17075D70)
#define CLASS_3_C54653660BA7F249___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17075D20)
#define CLASS_3_C54653660BA7F249___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17075D60)

inline static constexpr unsigned int Class_3_C54653660BA7F249___c_TypeDefinitionIndex = 45988;

class Class_3_C54653660BA7F249___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_387BDAC12AFE15BA*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_387BDAC12AFE15BA*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C54653660BA7F249___c_TypeDefinitionIndex)->GetStaticField(0x43BA0);
	}
	static ::Class_3_C54653660BA7F249___c** StaticGet___9()
	{
		return (::Class_3_C54653660BA7F249___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C54653660BA7F249___c_TypeDefinitionIndex)->GetStaticField(0x43BA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C54653660BA7F249___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C54653660BA7F249___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B0BF93601065B260(::Class_3_387BDAC12AFE15BA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_387BDAC12AFE15BA*))((::PBYTE)hIl2Cpp + CLASS_3_C54653660BA7F249___C_METHOD_1_B0BF93601065B260_OFFSET))(this, a1);
	}
};
