#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D066A42D90454061;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_D066A42D90454061___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1363CE70)
#define CLASS_1_D066A42D90454061___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1363CEA0)
#define CLASS_1_D066A42D90454061___C__GET__FIXEDUPDATEACTION_B__21_0_OFFSET UNITYSDK_OFFSET(0x1363CEB0)
#define CLASS_1_D066A42D90454061___C__GET__LATEFIXEDUPDATEACTION_B__23_0_OFFSET UNITYSDK_OFFSET(0x1363CED0)

inline static constexpr unsigned int Class_1_D066A42D90454061___c_TypeDefinitionIndex = 71675;

class Class_1_D066A42D90454061___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_D066A42D90454061*>** StaticGet___9__23_0()
	{
		return (::System::Action_1<::Class_1_D066A42D90454061*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D066A42D90454061___c_TypeDefinitionIndex)->GetStaticField(0x49DB0);
	}
	static ::System::Action_1<::Class_1_D066A42D90454061*>** StaticGet___9__21_0()
	{
		return (::System::Action_1<::Class_1_D066A42D90454061*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D066A42D90454061___c_TypeDefinitionIndex)->GetStaticField(0x49DB8);
	}
	static ::Class_1_D066A42D90454061___c** StaticGet___9()
	{
		return (::Class_1_D066A42D90454061___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D066A42D90454061___c_TypeDefinitionIndex)->GetStaticField(0x49DC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D066A42D90454061___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D066A42D90454061___C__CTOR_OFFSET))(this);
	}

	::System::Void _get__FixedUpdateAction_b__21_0(::Class_1_D066A42D90454061* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D066A42D90454061*))((::PBYTE)hIl2Cpp + CLASS_1_D066A42D90454061___C__GET__FIXEDUPDATEACTION_B__21_0_OFFSET))(this, a1);
	}

	::System::Void _get__LateFixedUpdateAction_b__23_0(::Class_1_D066A42D90454061* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D066A42D90454061*))((::PBYTE)hIl2Cpp + CLASS_1_D066A42D90454061___C__GET__LATEFIXEDUPDATEACTION_B__23_0_OFFSET))(this, a1);
	}
};
