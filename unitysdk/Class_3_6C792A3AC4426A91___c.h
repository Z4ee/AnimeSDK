#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class SceneLightVolume;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_3_6C792A3AC4426A91___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC3F6C30)
#define CLASS_3_6C792A3AC4426A91___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC3F6C60)
#define CLASS_3_6C792A3AC4426A91___C__GETACTIVESCENELIGHTVOLUMEFIX_B__60_0_OFFSET UNITYSDK_OFFSET(0xC3F6C70)
#define CLASS_3_6C792A3AC4426A91___C__GETACTIVESCENELIGHTVOLUME_B__61_0_OFFSET UNITYSDK_OFFSET(0xC3F6CB0)
#define CLASS_3_6C792A3AC4426A91___C__GETACTIVESCENELIGHTVOLUME_B__62_0_OFFSET UNITYSDK_OFFSET(0xC3F6CF0)

inline static constexpr unsigned int Class_3_6C792A3AC4426A91___c_TypeDefinitionIndex = 49769;

class Class_3_6C792A3AC4426A91___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::SceneLightVolume*>** StaticGet___9__60_0()
	{
		return (::System::Comparison_1<::SceneLightVolume*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6C792A3AC4426A91___c_TypeDefinitionIndex)->GetStaticField(0x57D70);
	}
	static ::System::Comparison_1<::SceneLightVolume*>** StaticGet___9__62_0()
	{
		return (::System::Comparison_1<::SceneLightVolume*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6C792A3AC4426A91___c_TypeDefinitionIndex)->GetStaticField(0x57D78);
	}
	static ::System::Comparison_1<::SceneLightVolume*>** StaticGet___9__61_0()
	{
		return (::System::Comparison_1<::SceneLightVolume*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6C792A3AC4426A91___c_TypeDefinitionIndex)->GetStaticField(0x57D80);
	}
	static ::Class_3_6C792A3AC4426A91___c** StaticGet___9()
	{
		return (::Class_3_6C792A3AC4426A91___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6C792A3AC4426A91___c_TypeDefinitionIndex)->GetStaticField(0x57D88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetActiveSceneLightVolumeFix_b__60_0(::SceneLightVolume* a1, ::SceneLightVolume* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::SceneLightVolume*, ::SceneLightVolume*))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91___C__GETACTIVESCENELIGHTVOLUMEFIX_B__60_0_OFFSET))(this, a1, a2);
	}

	::System::Int32 _GetActiveSceneLightVolume_b__61_0(::SceneLightVolume* a1, ::SceneLightVolume* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::SceneLightVolume*, ::SceneLightVolume*))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91___C__GETACTIVESCENELIGHTVOLUME_B__61_0_OFFSET))(this, a1, a2);
	}

	::System::Int32 _GetActiveSceneLightVolume_b__62_0(::SceneLightVolume* a1, ::SceneLightVolume* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::SceneLightVolume*, ::SceneLightVolume*))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91___C__GETACTIVESCENELIGHTVOLUME_B__62_0_OFFSET))(this, a1, a2);
	}
};
