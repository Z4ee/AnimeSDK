#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_E2819F45333A39BF;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_627BDECF488D9EB4___C_METHOD_1_8E753D0A7DA5F566_OFFSET UNITYSDK_OFFSET(0x16ACC660)
#define CLASS_3_627BDECF488D9EB4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16ACC610)
#define CLASS_3_627BDECF488D9EB4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16ACC650)

inline static constexpr unsigned int Class_3_627BDECF488D9EB4___c_TypeDefinitionIndex = 53315;

class Class_3_627BDECF488D9EB4___c : public ::System::Object
{
public:
	static ::Class_3_627BDECF488D9EB4___c** StaticGet___9()
	{
		return (::Class_3_627BDECF488D9EB4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_627BDECF488D9EB4___c_TypeDefinitionIndex)->GetStaticField(0x438B0);
	}
	static ::System::Action_1<::Class_3_E2819F45333A39BF*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::Class_3_E2819F45333A39BF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_627BDECF488D9EB4___c_TypeDefinitionIndex)->GetStaticField(0x438B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_627BDECF488D9EB4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_627BDECF488D9EB4___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8E753D0A7DA5F566(::Class_3_E2819F45333A39BF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E2819F45333A39BF*))((::PBYTE)hIl2Cpp + CLASS_3_627BDECF488D9EB4___C_METHOD_1_8E753D0A7DA5F566_OFFSET))(this, a1);
	}
};
