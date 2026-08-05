#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9465CC52E1CFB15A;
namespace System { template <typename T> class Action_1; }

#define CLASS_4_1D4E37BBF8EACFE3___C_METHOD_1_0D96EC860B2CF5AE_OFFSET UNITYSDK_OFFSET(0x11AFF9D0)
#define CLASS_4_1D4E37BBF8EACFE3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11AFF980)
#define CLASS_4_1D4E37BBF8EACFE3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11AFF9C0)

inline static constexpr unsigned int Class_4_1D4E37BBF8EACFE3___c_TypeDefinitionIndex = 56054;

class Class_4_1D4E37BBF8EACFE3___c : public ::System::Object
{
public:
	static ::Class_4_1D4E37BBF8EACFE3___c** StaticGet___9()
	{
		return (::Class_4_1D4E37BBF8EACFE3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_1D4E37BBF8EACFE3___c_TypeDefinitionIndex)->GetStaticField(0x3C2E0);
	}
	static ::System::Action_1<::Class_1_9465CC52E1CFB15A*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_1_9465CC52E1CFB15A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_1D4E37BBF8EACFE3___c_TypeDefinitionIndex)->GetStaticField(0x3C2E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_1D4E37BBF8EACFE3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1D4E37BBF8EACFE3___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0D96EC860B2CF5AE(::Class_1_9465CC52E1CFB15A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9465CC52E1CFB15A*))((::PBYTE)hIl2Cpp + CLASS_4_1D4E37BBF8EACFE3___C_METHOD_1_0D96EC860B2CF5AE_OFFSET))(this, a1);
	}
};
