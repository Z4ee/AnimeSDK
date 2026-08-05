#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_09C6D749A1B6BB3E;
class Class_3_707412604A129938;
class Class_3_F33F9DC5F4112336;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_3_8B5C246122C47145___C_METHOD_1_A090F5C78675393B_OFFSET UNITYSDK_OFFSET(0x17A7B6B0)
#define CLASS_3_8B5C246122C47145___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A7B660)
#define CLASS_3_8B5C246122C47145___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17A7B6A0)

inline static constexpr unsigned int Class_3_8B5C246122C47145___c_TypeDefinitionIndex = 44339;

class Class_3_8B5C246122C47145___c : public ::System::Object
{
public:
	static ::Class_3_8B5C246122C47145___c** StaticGet___9()
	{
		return (::Class_3_8B5C246122C47145___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8B5C246122C47145___c_TypeDefinitionIndex)->GetStaticField(0x41760);
	}
	static ::System::Action_3<::Class_3_09C6D749A1B6BB3E*, ::Class_3_707412604A129938*, ::Class_3_F33F9DC5F4112336*>** StaticGet___9__2_0()
	{
		return (::System::Action_3<::Class_3_09C6D749A1B6BB3E*, ::Class_3_707412604A129938*, ::Class_3_F33F9DC5F4112336*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8B5C246122C47145___c_TypeDefinitionIndex)->GetStaticField(0x41768);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A090F5C78675393B(::Class_3_09C6D749A1B6BB3E* a1, ::Class_3_707412604A129938* a2, ::Class_3_F33F9DC5F4112336* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_09C6D749A1B6BB3E*, ::Class_3_707412604A129938*, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145___C_METHOD_1_A090F5C78675393B_OFFSET))(this, a1, a2, a3);
	}
};
