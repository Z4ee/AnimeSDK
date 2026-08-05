#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_4_C6B53AC9D82ABE9A___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1028F380)
#define CLASS_4_C6B53AC9D82ABE9A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1028F330)
#define CLASS_4_C6B53AC9D82ABE9A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1028F370)

inline static constexpr unsigned int Class_4_C6B53AC9D82ABE9A___c_TypeDefinitionIndex = 86612;

class Class_4_C6B53AC9D82ABE9A___c : public ::System::Object
{
public:
	static ::Class_4_C6B53AC9D82ABE9A___c** StaticGet___9()
	{
		return (::Class_4_C6B53AC9D82ABE9A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_C6B53AC9D82ABE9A___c_TypeDefinitionIndex)->GetStaticField(0x33870);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__1_9()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_C6B53AC9D82ABE9A___c_TypeDefinitionIndex)->GetStaticField(0x33878);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_C6B53AC9D82ABE9A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C6B53AC9D82ABE9A___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C6B53AC9D82ABE9A___C_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
