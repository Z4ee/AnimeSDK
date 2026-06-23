#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_3_D5F259EA82A9EF5C_1___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1624CF00)
#define CLASS_3_D5F259EA82A9EF5C_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1624CEB0)
#define CLASS_3_D5F259EA82A9EF5C_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1624CEF0)

inline static constexpr unsigned int Class_3_D5F259EA82A9EF5C_1___c_TypeDefinitionIndex = 46560;

class Class_3_D5F259EA82A9EF5C_1___c : public ::System::Object
{
public:
	static ::Class_3_D5F259EA82A9EF5C_1___c** StaticGet___9()
	{
		return (::Class_3_D5F259EA82A9EF5C_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D5F259EA82A9EF5C_1___c_TypeDefinitionIndex)->GetStaticField(0x396B0);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D5F259EA82A9EF5C_1___c_TypeDefinitionIndex)->GetStaticField(0x396B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D5F259EA82A9EF5C_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D5F259EA82A9EF5C_1___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D5F259EA82A9EF5C_1___C_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
