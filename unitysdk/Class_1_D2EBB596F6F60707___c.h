#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D2EBB596F6F60707;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_D2EBB596F6F60707___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x990C340)
#define CLASS_1_D2EBB596F6F60707___C__CTOR_OFFSET UNITYSDK_OFFSET(0x990C370)
#define CLASS_1_D2EBB596F6F60707___C___INITBINDLEVELVAR_B__7_0_OFFSET UNITYSDK_OFFSET(0x990C380)
#define CLASS_1_D2EBB596F6F60707___C___INITVISIBILITYHANDLER_B__8_0_OFFSET UNITYSDK_OFFSET(0x990C3A0)

inline static constexpr unsigned int Class_1_D2EBB596F6F60707___c_TypeDefinitionIndex = 70632;

class Class_1_D2EBB596F6F60707___c : public ::System::Object
{
public:
	static ::Class_1_D2EBB596F6F60707___c** StaticGet___9()
	{
		return (::Class_1_D2EBB596F6F60707___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D2EBB596F6F60707___c_TypeDefinitionIndex)->GetStaticField(0x69A40);
	}
	static ::System::Action_2<::Class_1_D2EBB596F6F60707*, ::System::String*>** StaticGet___9__7_0()
	{
		return (::System::Action_2<::Class_1_D2EBB596F6F60707*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D2EBB596F6F60707___c_TypeDefinitionIndex)->GetStaticField(0x69A48);
	}
	static ::System::Action_3<::System::Single, ::Class_1_D2EBB596F6F60707*, ::System::Int32>** StaticGet___9__8_0()
	{
		return (::System::Action_3<::System::Single, ::Class_1_D2EBB596F6F60707*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D2EBB596F6F60707___c_TypeDefinitionIndex)->GetStaticField(0x69A50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D2EBB596F6F60707___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2EBB596F6F60707___C__CTOR_OFFSET))(this);
	}

	::System::Void __InitBindLevelVar_b__7_0(::Class_1_D2EBB596F6F60707* self, ::System::String* varName)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D2EBB596F6F60707*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D2EBB596F6F60707___C___INITBINDLEVELVAR_B__7_0_OFFSET))(this, self, varName);
	}

	::System::Void __InitVisibilityHandler_b__8_0(::System::Single ditherDuration, ::Class_1_D2EBB596F6F60707* self, ::System::Int32 id)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Class_1_D2EBB596F6F60707*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D2EBB596F6F60707___C___INITVISIBILITYHANDLER_B__8_0_OFFSET))(this, ditherDuration, self, id);
	}
};
