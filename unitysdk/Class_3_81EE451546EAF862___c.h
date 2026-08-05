#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_7BF98046FA3EA064;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_81EE451546EAF862___C_METHOD_1_6065F24A36A6AF99_OFFSET UNITYSDK_OFFSET(0x15422400)
#define CLASS_3_81EE451546EAF862___C_METHOD_1_E33F53EB083F6486_OFFSET UNITYSDK_OFFSET(0x15422300)
#define CLASS_3_81EE451546EAF862___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x154222B0)
#define CLASS_3_81EE451546EAF862___C__CTOR_OFFSET UNITYSDK_OFFSET(0x154222F0)

inline static constexpr unsigned int Class_3_81EE451546EAF862___c_TypeDefinitionIndex = 64257;

class Class_3_81EE451546EAF862___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_7BF98046FA3EA064*>** StaticGet___9__13_0()
	{
		return (::System::Action_1<::Class_3_7BF98046FA3EA064*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_81EE451546EAF862___c_TypeDefinitionIndex)->GetStaticField(0x3BDA0);
	}
	static ::System::Action_1<::Class_3_7BF98046FA3EA064*>** StaticGet___9__16_0()
	{
		return (::System::Action_1<::Class_3_7BF98046FA3EA064*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_81EE451546EAF862___c_TypeDefinitionIndex)->GetStaticField(0x3BDA8);
	}
	static ::Class_3_81EE451546EAF862___c** StaticGet___9()
	{
		return (::Class_3_81EE451546EAF862___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_81EE451546EAF862___c_TypeDefinitionIndex)->GetStaticField(0x3BDB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E33F53EB083F6486(::Class_3_7BF98046FA3EA064* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7BF98046FA3EA064*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862___C_METHOD_1_E33F53EB083F6486_OFFSET))(this, a1);
	}

	::System::Void Method_1_6065F24A36A6AF99(::Class_3_7BF98046FA3EA064* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7BF98046FA3EA064*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862___C_METHOD_1_6065F24A36A6AF99_OFFSET))(this, a1);
	}
};
