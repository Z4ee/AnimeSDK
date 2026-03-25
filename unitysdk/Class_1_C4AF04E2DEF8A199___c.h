#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C4AF04E2DEF8A199;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_C4AF04E2DEF8A199___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9C5BE50)
#define CLASS_1_C4AF04E2DEF8A199___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9C5BE80)
#define CLASS_1_C4AF04E2DEF8A199___C__GET__FIXEDUPDATEACTION_B__23_0_OFFSET UNITYSDK_OFFSET(0x9C5BE90)
#define CLASS_1_C4AF04E2DEF8A199___C__GET__LATEFIXEDUPDATEACTION_B__25_0_OFFSET UNITYSDK_OFFSET(0x9C5BEB0)

inline static constexpr unsigned int Class_1_C4AF04E2DEF8A199___c_TypeDefinitionIndex = 62702;

class Class_1_C4AF04E2DEF8A199___c : public ::System::Object
{
public:
	static ::Class_1_C4AF04E2DEF8A199___c** StaticGet___9()
	{
		return (::Class_1_C4AF04E2DEF8A199___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4AF04E2DEF8A199___c_TypeDefinitionIndex)->GetStaticField(0x46ED0);
	}
	static ::System::Action_1<::Class_1_C4AF04E2DEF8A199*>** StaticGet___9__23_0()
	{
		return (::System::Action_1<::Class_1_C4AF04E2DEF8A199*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4AF04E2DEF8A199___c_TypeDefinitionIndex)->GetStaticField(0x46ED8);
	}
	static ::System::Action_1<::Class_1_C4AF04E2DEF8A199*>** StaticGet___9__25_0()
	{
		return (::System::Action_1<::Class_1_C4AF04E2DEF8A199*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4AF04E2DEF8A199___c_TypeDefinitionIndex)->GetStaticField(0x46EE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C4AF04E2DEF8A199___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4AF04E2DEF8A199___C__CTOR_OFFSET))(this);
	}

	::System::Void _get__FixedUpdateAction_b__23_0(::Class_1_C4AF04E2DEF8A199* self)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C4AF04E2DEF8A199*))((::PBYTE)hIl2Cpp + CLASS_1_C4AF04E2DEF8A199___C__GET__FIXEDUPDATEACTION_B__23_0_OFFSET))(this, self);
	}

	::System::Void _get__LateFixedUpdateAction_b__25_0(::Class_1_C4AF04E2DEF8A199* self)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C4AF04E2DEF8A199*))((::PBYTE)hIl2Cpp + CLASS_1_C4AF04E2DEF8A199___C__GET__LATEFIXEDUPDATEACTION_B__25_0_OFFSET))(this, self);
	}
};
