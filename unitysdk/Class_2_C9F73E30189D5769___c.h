#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9868CACE651EDD88;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_C9F73E30189D5769___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE63A150)
#define CLASS_2_C9F73E30189D5769___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE63A180)
#define CLASS_2_C9F73E30189D5769___C__REFRESHEFFECTS_B__1_0_OFFSET UNITYSDK_OFFSET(0xE63A190)

inline static constexpr unsigned int Class_2_C9F73E30189D5769___c_TypeDefinitionIndex = 65653;

class Class_2_C9F73E30189D5769___c : public ::System::Object
{
public:
	static ::Class_2_C9F73E30189D5769___c** StaticGet___9()
	{
		return (::Class_2_C9F73E30189D5769___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9F73E30189D5769___c_TypeDefinitionIndex)->GetStaticField(0x5B00);
	}
	static ::System::Func_2<::Class_1_9868CACE651EDD88*, ::System::String*>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::Class_1_9868CACE651EDD88*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9F73E30189D5769___c_TypeDefinitionIndex)->GetStaticField(0x5B08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C9F73E30189D5769___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9F73E30189D5769___C__CTOR_OFFSET))(this);
	}

	::System::String* _RefreshEffects_b__1_0(::Class_1_9868CACE651EDD88* e)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_9868CACE651EDD88*))((::PBYTE)hIl2Cpp + CLASS_2_C9F73E30189D5769___C__REFRESHEFFECTS_B__1_0_OFFSET))(this, e);
	}
};
