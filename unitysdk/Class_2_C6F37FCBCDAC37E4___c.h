#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_80AF8BF5A186D7B9;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_C6F37FCBCDAC37E4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C05F40)
#define CLASS_2_C6F37FCBCDAC37E4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16C05F70)
#define CLASS_2_C6F37FCBCDAC37E4___C__REFRESHEFFECTS_B__1_0_OFFSET UNITYSDK_OFFSET(0x16C05F80)

inline static constexpr unsigned int Class_2_C6F37FCBCDAC37E4___c_TypeDefinitionIndex = 71196;

class Class_2_C6F37FCBCDAC37E4___c : public ::System::Object
{
public:
	static ::Class_2_C6F37FCBCDAC37E4___c** StaticGet___9()
	{
		return (::Class_2_C6F37FCBCDAC37E4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C6F37FCBCDAC37E4___c_TypeDefinitionIndex)->GetStaticField(0x676F0);
	}
	static ::System::Func_2<::Class_1_80AF8BF5A186D7B9*, ::System::String*>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::Class_1_80AF8BF5A186D7B9*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C6F37FCBCDAC37E4___c_TypeDefinitionIndex)->GetStaticField(0x676F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C6F37FCBCDAC37E4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6F37FCBCDAC37E4___C__CTOR_OFFSET))(this);
	}

	::System::String* _RefreshEffects_b__1_0(::Class_1_80AF8BF5A186D7B9* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_80AF8BF5A186D7B9*))((::PBYTE)hIl2Cpp + CLASS_2_C6F37FCBCDAC37E4___C__REFRESHEFFECTS_B__1_0_OFFSET))(this, a1);
	}
};
