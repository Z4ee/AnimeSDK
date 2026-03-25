#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D0B740BBA7D5755D;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_D0B740BBA7D5755D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8A0FE60)
#define CLASS_1_D0B740BBA7D5755D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8A0FEA0)
#define CLASS_1_D0B740BBA7D5755D___C__GET__FIXEDUPDATEACTION_B__28_0_OFFSET UNITYSDK_OFFSET(0x8A0FEB0)
#define CLASS_1_D0B740BBA7D5755D___C__GET__LATEFIXEDUPDATEACTION_B__30_0_OFFSET UNITYSDK_OFFSET(0x8A0FED0)

inline static constexpr unsigned int Class_1_D0B740BBA7D5755D___c_TypeDefinitionIndex = 62628;

class Class_1_D0B740BBA7D5755D___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_D0B740BBA7D5755D*>** StaticGet___9__28_0()
	{
		return (::System::Action_1<::Class_1_D0B740BBA7D5755D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D0B740BBA7D5755D___c_TypeDefinitionIndex)->GetStaticField(0x452C0);
	}
	static ::Class_1_D0B740BBA7D5755D___c** StaticGet___9()
	{
		return (::Class_1_D0B740BBA7D5755D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D0B740BBA7D5755D___c_TypeDefinitionIndex)->GetStaticField(0x452C8);
	}
	static ::System::Action_1<::Class_1_D0B740BBA7D5755D*>** StaticGet___9__30_0()
	{
		return (::System::Action_1<::Class_1_D0B740BBA7D5755D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D0B740BBA7D5755D___c_TypeDefinitionIndex)->GetStaticField(0x452D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0B740BBA7D5755D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0B740BBA7D5755D___C__CTOR_OFFSET))(this);
	}

	::System::Void _get__FixedUpdateAction_b__28_0(::Class_1_D0B740BBA7D5755D* self)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D0B740BBA7D5755D*))((::PBYTE)hIl2Cpp + CLASS_1_D0B740BBA7D5755D___C__GET__FIXEDUPDATEACTION_B__28_0_OFFSET))(this, self);
	}

	::System::Void _get__LateFixedUpdateAction_b__30_0(::Class_1_D0B740BBA7D5755D* self)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D0B740BBA7D5755D*))((::PBYTE)hIl2Cpp + CLASS_1_D0B740BBA7D5755D___C__GET__LATEFIXEDUPDATEACTION_B__30_0_OFFSET))(this, self);
	}
};
