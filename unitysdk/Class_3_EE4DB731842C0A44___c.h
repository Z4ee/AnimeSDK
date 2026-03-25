#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class SceneLightVolume;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_3_EE4DB731842C0A44___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB8B2470)
#define CLASS_3_EE4DB731842C0A44___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB8B24B0)
#define CLASS_3_EE4DB731842C0A44___C__GETACTIVESCENELIGHTVOLUME_B__25_0_OFFSET UNITYSDK_OFFSET(0xB8B24D0)
#define CLASS_3_EE4DB731842C0A44___C__RESETLIGHTV1_B__13_0_OFFSET UNITYSDK_OFFSET(0xB8B24C0)

inline static constexpr unsigned int Class_3_EE4DB731842C0A44___c_TypeDefinitionIndex = 40030;

class Class_3_EE4DB731842C0A44___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__13_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_EE4DB731842C0A44___c_TypeDefinitionIndex)->GetStaticField(0x41070);
	}
	static ::Class_3_EE4DB731842C0A44___c** StaticGet___9()
	{
		return (::Class_3_EE4DB731842C0A44___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_EE4DB731842C0A44___c_TypeDefinitionIndex)->GetStaticField(0x41078);
	}
	static ::System::Comparison_1<::SceneLightVolume*>** StaticGet___9__25_0()
	{
		return (::System::Comparison_1<::SceneLightVolume*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_EE4DB731842C0A44___c_TypeDefinitionIndex)->GetStaticField(0x41080);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_EE4DB731842C0A44___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE4DB731842C0A44___C__CTOR_OFFSET))(this);
	}

	::System::Void _ResetLightV1_b__13_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE4DB731842C0A44___C__RESETLIGHTV1_B__13_0_OFFSET))(this);
	}

	::System::Int32 _GetActiveSceneLightVolume_b__25_0(::SceneLightVolume* a, ::SceneLightVolume* b)
	{
		return ((::System::Int32(*)(::PVOID, ::SceneLightVolume*, ::SceneLightVolume*))((::PBYTE)hIl2Cpp + CLASS_3_EE4DB731842C0A44___C__GETACTIVESCENELIGHTVOLUME_B__25_0_OFFSET))(this, a, b);
	}
};
