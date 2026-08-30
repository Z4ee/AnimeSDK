#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_EDC795915B40E3E3;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_EDC795915B40E3E3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B20320)
#define CLASS_2_EDC795915B40E3E3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16B20360)
#define CLASS_2_EDC795915B40E3E3___C__GET__FIXEDUPDATEACTION_B__40_0_OFFSET UNITYSDK_OFFSET(0x16B20400)
#define CLASS_2_EDC795915B40E3E3___C__GET__ONPLAYERCREATEACTION_B__38_0_OFFSET UNITYSDK_OFFSET(0x16B20370)

inline static constexpr unsigned int Class_2_EDC795915B40E3E3___c_TypeDefinitionIndex = 76455;

class Class_2_EDC795915B40E3E3___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_2_EDC795915B40E3E3*>** StaticGet___9__40_0()
	{
		return (::System::Action_1<::Class_2_EDC795915B40E3E3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EDC795915B40E3E3___c_TypeDefinitionIndex)->GetStaticField(0x5ED60);
	}
	static ::Class_2_EDC795915B40E3E3___c** StaticGet___9()
	{
		return (::Class_2_EDC795915B40E3E3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EDC795915B40E3E3___c_TypeDefinitionIndex)->GetStaticField(0x5ED68);
	}
	static ::System::Action_1<::Class_2_EDC795915B40E3E3*>** StaticGet___9__38_0()
	{
		return (::System::Action_1<::Class_2_EDC795915B40E3E3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EDC795915B40E3E3___c_TypeDefinitionIndex)->GetStaticField(0x5ED70);
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
