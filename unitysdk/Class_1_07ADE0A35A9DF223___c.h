#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_07ADE0A35A9DF223;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_07ADE0A35A9DF223___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14447DB0)
#define CLASS_1_07ADE0A35A9DF223___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14447DE0)
#define CLASS_1_07ADE0A35A9DF223___C___INITBINDLEVELVAR_B__7_0_OFFSET UNITYSDK_OFFSET(0x14447DF0)
#define CLASS_1_07ADE0A35A9DF223___C___INITVISIBILITYHANDLER_B__8_0_OFFSET UNITYSDK_OFFSET(0x14447E10)

inline static constexpr unsigned int Class_1_07ADE0A35A9DF223___c_TypeDefinitionIndex = 71450;

class Class_1_07ADE0A35A9DF223___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_1_07ADE0A35A9DF223*, ::System::String*>** StaticGet___9__7_0()
	{
		return (::System::Action_2<::Class_1_07ADE0A35A9DF223*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_07ADE0A35A9DF223___c_TypeDefinitionIndex)->GetStaticField(0x425C0);
	}
	static ::Class_1_07ADE0A35A9DF223___c** StaticGet___9()
	{
		return (::Class_1_07ADE0A35A9DF223___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_07ADE0A35A9DF223___c_TypeDefinitionIndex)->GetStaticField(0x425C8);
	}
	static ::System::Action_3<::System::Single, ::Class_1_07ADE0A35A9DF223*, ::System::Int32>** StaticGet___9__8_0()
	{
		return (::System::Action_3<::System::Single, ::Class_1_07ADE0A35A9DF223*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_07ADE0A35A9DF223___c_TypeDefinitionIndex)->GetStaticField(0x425D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_07ADE0A35A9DF223___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07ADE0A35A9DF223___C__CTOR_OFFSET))(this);
	}

	::System::Void __InitBindLevelVar_b__7_0(::Class_1_07ADE0A35A9DF223* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_07ADE0A35A9DF223*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_07ADE0A35A9DF223___C___INITBINDLEVELVAR_B__7_0_OFFSET))(this, a1, a2);
	}

	::System::Void __InitVisibilityHandler_b__8_0(::System::Single a1, ::Class_1_07ADE0A35A9DF223* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Class_1_07ADE0A35A9DF223*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_07ADE0A35A9DF223___C___INITVISIBILITYHANDLER_B__8_0_OFFSET))(this, a1, a2, a3);
	}
};
