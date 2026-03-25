#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_582251EF6392A222;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_C9F73E30189D5769___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x99D88F0)
#define CLASS_2_C9F73E30189D5769___C__CTOR_OFFSET UNITYSDK_OFFSET(0x99D8920)
#define CLASS_2_C9F73E30189D5769___C__REFRESHEFFECTS_B__1_0_OFFSET UNITYSDK_OFFSET(0x99D8930)

inline static constexpr unsigned int Class_2_C9F73E30189D5769___c_TypeDefinitionIndex = 58364;

class Class_2_C9F73E30189D5769___c : public ::System::Object
{
public:
	static ::Class_2_C9F73E30189D5769___c** StaticGet___9()
	{
		return (::Class_2_C9F73E30189D5769___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9F73E30189D5769___c_TypeDefinitionIndex)->GetStaticField(0x464F0);
	}
	static ::System::Func_2<::Class_1_582251EF6392A222*, ::System::String*>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::Class_1_582251EF6392A222*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C9F73E30189D5769___c_TypeDefinitionIndex)->GetStaticField(0x464F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C9F73E30189D5769___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9F73E30189D5769___C__CTOR_OFFSET))(this);
	}

	::System::String* _RefreshEffects_b__1_0(::Class_1_582251EF6392A222* e)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_582251EF6392A222*))((::PBYTE)hIl2Cpp + CLASS_2_C9F73E30189D5769___C__REFRESHEFFECTS_B__1_0_OFFSET))(this, e);
	}
};
