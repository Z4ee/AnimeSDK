#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3FF87F4926CD1B22;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_3FF87F4926CD1B22___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A013C00)
#define CLASS_1_3FF87F4926CD1B22___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A013C30)
#define CLASS_1_3FF87F4926CD1B22___C__GET__FIXEDUPDATEACTION_B__21_0_OFFSET UNITYSDK_OFFSET(0x1A013C40)
#define CLASS_1_3FF87F4926CD1B22___C__GET__LATEFIXEDUPDATEACTION_B__23_0_OFFSET UNITYSDK_OFFSET(0x1A013C60)

inline static constexpr unsigned int Class_1_3FF87F4926CD1B22___c_TypeDefinitionIndex = 76677;

class Class_1_3FF87F4926CD1B22___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_3FF87F4926CD1B22*>** StaticGet___9__23_0()
	{
		return (::System::Action_1<::Class_1_3FF87F4926CD1B22*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3FF87F4926CD1B22___c_TypeDefinitionIndex)->GetStaticField(0x65A20);
	}
	static ::Class_1_3FF87F4926CD1B22___c** StaticGet___9()
	{
		return (::Class_1_3FF87F4926CD1B22___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3FF87F4926CD1B22___c_TypeDefinitionIndex)->GetStaticField(0x65A28);
	}
	static ::System::Action_1<::Class_1_3FF87F4926CD1B22*>** StaticGet___9__21_0()
	{
		return (::System::Action_1<::Class_1_3FF87F4926CD1B22*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3FF87F4926CD1B22___c_TypeDefinitionIndex)->GetStaticField(0x65A30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3FF87F4926CD1B22___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FF87F4926CD1B22___C__CTOR_OFFSET))(this);
	}

	::System::Void _get__FixedUpdateAction_b__21_0(::Class_1_3FF87F4926CD1B22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3FF87F4926CD1B22*))((::PBYTE)hIl2Cpp + CLASS_1_3FF87F4926CD1B22___C__GET__FIXEDUPDATEACTION_B__21_0_OFFSET))(this, a1);
	}

	::System::Void _get__LateFixedUpdateAction_b__23_0(::Class_1_3FF87F4926CD1B22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3FF87F4926CD1B22*))((::PBYTE)hIl2Cpp + CLASS_1_3FF87F4926CD1B22___C__GET__LATEFIXEDUPDATEACTION_B__23_0_OFFSET))(this, a1);
	}
};
