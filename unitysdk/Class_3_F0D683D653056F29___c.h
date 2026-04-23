#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class SceneLightVolume;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_3_F0D683D653056F29___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11BD5020)
#define CLASS_3_F0D683D653056F29___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11BD5050)
#define CLASS_3_F0D683D653056F29___C__GETACTIVESCENELIGHTVOLUME_B__52_0_OFFSET UNITYSDK_OFFSET(0x11BD5060)
#define CLASS_3_F0D683D653056F29___C__GETACTIVESCENELIGHTVOLUME_B__53_0_OFFSET UNITYSDK_OFFSET(0x11BD50A0)

inline static constexpr unsigned int Class_3_F0D683D653056F29___c_TypeDefinitionIndex = 45941;

class Class_3_F0D683D653056F29___c : public ::System::Object
{
public:
	static ::Class_3_F0D683D653056F29___c** StaticGet___9()
	{
		return (::Class_3_F0D683D653056F29___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F0D683D653056F29___c_TypeDefinitionIndex)->GetStaticField(0x2F1F0);
	}
	static ::System::Comparison_1<::SceneLightVolume*>** StaticGet___9__52_0()
	{
		return (::System::Comparison_1<::SceneLightVolume*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F0D683D653056F29___c_TypeDefinitionIndex)->GetStaticField(0x2F1F8);
	}
	static ::System::Comparison_1<::SceneLightVolume*>** StaticGet___9__53_0()
	{
		return (::System::Comparison_1<::SceneLightVolume*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F0D683D653056F29___c_TypeDefinitionIndex)->GetStaticField(0x2F200);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F0D683D653056F29___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F0D683D653056F29___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetActiveSceneLightVolume_b__52_0(::SceneLightVolume* a, ::SceneLightVolume* b)
	{
		return ((::System::Int32(*)(::PVOID, ::SceneLightVolume*, ::SceneLightVolume*))((::PBYTE)hIl2Cpp + CLASS_3_F0D683D653056F29___C__GETACTIVESCENELIGHTVOLUME_B__52_0_OFFSET))(this, a, b);
	}

	::System::Int32 _GetActiveSceneLightVolume_b__53_0(::SceneLightVolume* a, ::SceneLightVolume* b)
	{
		return ((::System::Int32(*)(::PVOID, ::SceneLightVolume*, ::SceneLightVolume*))((::PBYTE)hIl2Cpp + CLASS_3_F0D683D653056F29___C__GETACTIVESCENELIGHTVOLUME_B__53_0_OFFSET))(this, a, b);
	}
};
