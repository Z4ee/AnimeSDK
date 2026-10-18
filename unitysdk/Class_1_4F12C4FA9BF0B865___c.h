#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4F12C4FA9BF0B865;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_4F12C4FA9BF0B865___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBA2CF90)
#define CLASS_1_4F12C4FA9BF0B865___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBA2CFD0)
#define CLASS_1_4F12C4FA9BF0B865___C__GET__FIXEDUPDATEACTION_B__29_0_OFFSET UNITYSDK_OFFSET(0xBA2CFE0)
#define CLASS_1_4F12C4FA9BF0B865___C__GET__LATEFIXEDUPDATEACTION_B__31_0_OFFSET UNITYSDK_OFFSET(0xBA2D000)

inline static constexpr unsigned int Class_1_4F12C4FA9BF0B865___c_TypeDefinitionIndex = 76931;

class Class_1_4F12C4FA9BF0B865___c : public ::System::Object
{
public:
	static ::Class_1_4F12C4FA9BF0B865___c** StaticGet___9()
	{
		return (::Class_1_4F12C4FA9BF0B865___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4F12C4FA9BF0B865___c_TypeDefinitionIndex)->GetStaticField(0x17400);
	}
	static ::System::Action_1<::Class_1_4F12C4FA9BF0B865*>** StaticGet___9__31_0()
	{
		return (::System::Action_1<::Class_1_4F12C4FA9BF0B865*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4F12C4FA9BF0B865___c_TypeDefinitionIndex)->GetStaticField(0x17408);
	}
	static ::System::Action_1<::Class_1_4F12C4FA9BF0B865*>** StaticGet___9__29_0()
	{
		return (::System::Action_1<::Class_1_4F12C4FA9BF0B865*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4F12C4FA9BF0B865___c_TypeDefinitionIndex)->GetStaticField(0x17410);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4F12C4FA9BF0B865___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F12C4FA9BF0B865___C__CTOR_OFFSET))(this);
	}

	::System::Void _get__FixedUpdateAction_b__29_0(::Class_1_4F12C4FA9BF0B865* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4F12C4FA9BF0B865*))((::PBYTE)hIl2Cpp + CLASS_1_4F12C4FA9BF0B865___C__GET__FIXEDUPDATEACTION_B__29_0_OFFSET))(this, a1);
	}

	::System::Void _get__LateFixedUpdateAction_b__31_0(::Class_1_4F12C4FA9BF0B865* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4F12C4FA9BF0B865*))((::PBYTE)hIl2Cpp + CLASS_1_4F12C4FA9BF0B865___C__GET__LATEFIXEDUPDATEACTION_B__31_0_OFFSET))(this, a1);
	}
};
