#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_387BDAC12AFE15BA;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_1EF968414CAAECE3___C_METHOD_1_B0BF93601065B260_OFFSET UNITYSDK_OFFSET(0x160B8E10)
#define CLASS_3_1EF968414CAAECE3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x160B8DC0)
#define CLASS_3_1EF968414CAAECE3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x160B8E00)

inline static constexpr unsigned int Class_3_1EF968414CAAECE3___c_TypeDefinitionIndex = 62026;

class Class_3_1EF968414CAAECE3___c : public ::System::Object
{
public:
	static ::Class_3_1EF968414CAAECE3___c** StaticGet___9()
	{
		return (::Class_3_1EF968414CAAECE3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1EF968414CAAECE3___c_TypeDefinitionIndex)->GetStaticField(0x30070);
	}
	static ::System::Action_1<::Class_3_387BDAC12AFE15BA*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_387BDAC12AFE15BA*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1EF968414CAAECE3___c_TypeDefinitionIndex)->GetStaticField(0x30078);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B0BF93601065B260(::Class_3_387BDAC12AFE15BA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_387BDAC12AFE15BA*))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3___C_METHOD_1_B0BF93601065B260_OFFSET))(this, a1);
	}
};
