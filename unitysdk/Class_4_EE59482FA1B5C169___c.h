#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9465CC52E1CFB15A;
namespace System { template <typename T> class Action_1; }

#define CLASS_4_EE59482FA1B5C169___C_METHOD_1_0D96EC860B2CF5AE_OFFSET UNITYSDK_OFFSET(0x18B0AF90)
#define CLASS_4_EE59482FA1B5C169___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B0AF40)
#define CLASS_4_EE59482FA1B5C169___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18B0AF80)

inline static constexpr unsigned int Class_4_EE59482FA1B5C169___c_TypeDefinitionIndex = 71081;

class Class_4_EE59482FA1B5C169___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_9465CC52E1CFB15A*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::Class_1_9465CC52E1CFB15A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_EE59482FA1B5C169___c_TypeDefinitionIndex)->GetStaticField(0x37FB0);
	}
	static ::Class_4_EE59482FA1B5C169___c** StaticGet___9()
	{
		return (::Class_4_EE59482FA1B5C169___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_EE59482FA1B5C169___c_TypeDefinitionIndex)->GetStaticField(0x37FB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_EE59482FA1B5C169___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EE59482FA1B5C169___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0D96EC860B2CF5AE(::Class_1_9465CC52E1CFB15A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9465CC52E1CFB15A*))((::PBYTE)hIl2Cpp + CLASS_4_EE59482FA1B5C169___C_METHOD_1_0D96EC860B2CF5AE_OFFSET))(this, a1);
	}
};
