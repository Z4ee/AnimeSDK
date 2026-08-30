#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_EDC795915B40E3E3;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_EDC795915B40E3E3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBB55640)
#define CLASS_2_EDC795915B40E3E3___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBB55680)
#define CLASS_2_EDC795915B40E3E3___C__GET__FIXEDUPDATEACTION_B__40_0_OFFSET UNITYSDK_OFFSET(0xBB55720)
#define CLASS_2_EDC795915B40E3E3___C__GET__ONPLAYERCREATEACTION_B__38_0_OFFSET UNITYSDK_OFFSET(0xBB55690)

inline static constexpr unsigned int Class_2_EDC795915B40E3E3___c_TypeDefinitionIndex = 76456;

class Class_2_EDC795915B40E3E3___c : public ::System::Object
{
public:
	static ::Class_2_EDC795915B40E3E3___c** StaticGet___9()
	{
		return (::Class_2_EDC795915B40E3E3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EDC795915B40E3E3___c_TypeDefinitionIndex)->GetStaticField(0x611A0);
	}
	static ::System::Action_1<::Class_2_EDC795915B40E3E3*>** StaticGet___9__40_0()
	{
		return (::System::Action_1<::Class_2_EDC795915B40E3E3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EDC795915B40E3E3___c_TypeDefinitionIndex)->GetStaticField(0x611A8);
	}
	static ::System::Action_1<::Class_2_EDC795915B40E3E3*>** StaticGet___9__38_0()
	{
		return (::System::Action_1<::Class_2_EDC795915B40E3E3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EDC795915B40E3E3___c_TypeDefinitionIndex)->GetStaticField(0x611B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EDC795915B40E3E3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDC795915B40E3E3___C__CTOR_OFFSET))(this);
	}

	::System::Void _get__OnPlayerCreateAction_b__38_0(::Class_2_EDC795915B40E3E3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_EDC795915B40E3E3*))((::PBYTE)hIl2Cpp + CLASS_2_EDC795915B40E3E3___C__GET__ONPLAYERCREATEACTION_B__38_0_OFFSET))(this, a1);
	}

	::System::Void _get__FixedUpdateAction_b__40_0(::Class_2_EDC795915B40E3E3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_EDC795915B40E3E3*))((::PBYTE)hIl2Cpp + CLASS_2_EDC795915B40E3E3___C__GET__FIXEDUPDATEACTION_B__40_0_OFFSET))(this, a1);
	}
};
