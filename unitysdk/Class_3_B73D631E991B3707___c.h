#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_8F19DA8B255A2CD0;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_B73D631E991B3707___C_METHOD_1_8C583511E6063393_OFFSET UNITYSDK_OFFSET(0x1759E2A0)
#define CLASS_3_B73D631E991B3707___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1759E250)
#define CLASS_3_B73D631E991B3707___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1759E290)

inline static constexpr unsigned int Class_3_B73D631E991B3707___c_TypeDefinitionIndex = 66102;

class Class_3_B73D631E991B3707___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_8F19DA8B255A2CD0*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_8F19DA8B255A2CD0*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B73D631E991B3707___c_TypeDefinitionIndex)->GetStaticField(0x3F870);
	}
	static ::Class_3_B73D631E991B3707___c** StaticGet___9()
	{
		return (::Class_3_B73D631E991B3707___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B73D631E991B3707___c_TypeDefinitionIndex)->GetStaticField(0x3F878);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B73D631E991B3707___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B73D631E991B3707___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8C583511E6063393(::Class_3_8F19DA8B255A2CD0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_8F19DA8B255A2CD0*))((::PBYTE)hIl2Cpp + CLASS_3_B73D631E991B3707___C_METHOD_1_8C583511E6063393_OFFSET))(this, a1);
	}
};
