#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class SceneLightVolume;
namespace System { template <typename T> class Comparison_1; }

#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFB8B450)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFB8B490)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY___C__GETACTIVESCENELIGHTVOLUME_B__28_0_OFFSET UNITYSDK_OFFSET(0xFB8B4A0)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY___C__GETACTIVESCENELIGHTVOLUME_B__28_1_OFFSET UNITYSDK_OFFSET(0xFB8B4E0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroBlockDataTransProperty___c_TypeDefinitionIndex = 40281;

	class EnviroBlockDataTransProperty___c : public ::System::Object
	{
	public:
		static ::EnviromentSystem::EnviroBlockDataTransProperty___c** StaticGet___9()
		{
			return (::EnviromentSystem::EnviroBlockDataTransProperty___c**)Il2CppClass::FromTypeDefinitionIndex(EnviroBlockDataTransProperty___c_TypeDefinitionIndex)->GetStaticField(0xE440);
		}
		static ::System::Comparison_1<::SceneLightVolume*>** StaticGet___9__28_1()
		{
			return (::System::Comparison_1<::SceneLightVolume*>**)Il2CppClass::FromTypeDefinitionIndex(EnviroBlockDataTransProperty___c_TypeDefinitionIndex)->GetStaticField(0xE448);
		}
		static ::System::Comparison_1<::SceneLightVolume*>** StaticGet___9__28_0()
		{
			return (::System::Comparison_1<::SceneLightVolume*>**)Il2CppClass::FromTypeDefinitionIndex(EnviroBlockDataTransProperty___c_TypeDefinitionIndex)->GetStaticField(0xE450);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetActiveSceneLightVolume_b__28_0(::SceneLightVolume* a, ::SceneLightVolume* b)
		{
			return ((::System::Int32(*)(::PVOID, ::SceneLightVolume*, ::SceneLightVolume*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY___C__GETACTIVESCENELIGHTVOLUME_B__28_0_OFFSET))(this, a, b);
		}

		::System::Int32 _GetActiveSceneLightVolume_b__28_1(::SceneLightVolume* a, ::SceneLightVolume* b)
		{
			return ((::System::Int32(*)(::PVOID, ::SceneLightVolume*, ::SceneLightVolume*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY___C__GETACTIVESCENELIGHTVOLUME_B__28_1_OFFSET))(this, a, b);
		}
	};
}
