#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FE0E300FA55D1287;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_FE0E300FA55D1287___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10651020)
#define CLASS_1_FE0E300FA55D1287___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10651050)
#define CLASS_1_FE0E300FA55D1287___C__GET__FIXEDUPDATEACTION_B__25_0_OFFSET UNITYSDK_OFFSET(0x10651060)
#define CLASS_1_FE0E300FA55D1287___C__GET__LATEFIXEDUPDATEACTION_B__27_0_OFFSET UNITYSDK_OFFSET(0x10651080)

inline static constexpr unsigned int Class_1_FE0E300FA55D1287___c_TypeDefinitionIndex = 71537;

class Class_1_FE0E300FA55D1287___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_FE0E300FA55D1287*>** StaticGet___9__27_0()
	{
		return (::System::Action_1<::Class_1_FE0E300FA55D1287*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE0E300FA55D1287___c_TypeDefinitionIndex)->GetStaticField(0x10D10);
	}
	static ::System::Action_1<::Class_1_FE0E300FA55D1287*>** StaticGet___9__25_0()
	{
		return (::System::Action_1<::Class_1_FE0E300FA55D1287*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE0E300FA55D1287___c_TypeDefinitionIndex)->GetStaticField(0x10D18);
	}
	static ::Class_1_FE0E300FA55D1287___c** StaticGet___9()
	{
		return (::Class_1_FE0E300FA55D1287___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE0E300FA55D1287___c_TypeDefinitionIndex)->GetStaticField(0x10D20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE0E300FA55D1287___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE0E300FA55D1287___C__CTOR_OFFSET))(this);
	}

	::System::Void _get__FixedUpdateAction_b__25_0(::Class_1_FE0E300FA55D1287* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FE0E300FA55D1287*))((::PBYTE)hIl2Cpp + CLASS_1_FE0E300FA55D1287___C__GET__FIXEDUPDATEACTION_B__25_0_OFFSET))(this, a1);
	}

	::System::Void _get__LateFixedUpdateAction_b__27_0(::Class_1_FE0E300FA55D1287* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FE0E300FA55D1287*))((::PBYTE)hIl2Cpp + CLASS_1_FE0E300FA55D1287___C__GET__LATEFIXEDUPDATEACTION_B__27_0_OFFSET))(this, a1);
	}
};
