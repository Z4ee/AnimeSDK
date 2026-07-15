#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class SceneLightVolume;
namespace System { template <typename T> class Comparison_1; }

#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF194A00)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF194A40)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY___C__GETACTIVESCENELIGHTVOLUME_B__28_0_OFFSET UNITYSDK_OFFSET(0xF194A50)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY___C__GETACTIVESCENELIGHTVOLUME_B__28_1_OFFSET UNITYSDK_OFFSET(0xF194A90)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroBlockDataTransProperty___c_TypeDefinitionIndex = 47738;

	class EnviroBlockDataTransProperty___c : public ::System::Object
	{
	public:
		static ::EnviromentSystem::EnviroBlockDataTransProperty___c** StaticGet___9()
		{
			return (::EnviromentSystem::EnviroBlockDataTransProperty___c**)Il2CppClass::FromTypeDefinitionIndex(EnviroBlockDataTransProperty___c_TypeDefinitionIndex)->GetStaticField(0x34B20);
		}
		static ::System::Comparison_1<::SceneLightVolume*>** StaticGet___9__28_1()
		{
			return (::System::Comparison_1<::SceneLightVolume*>**)Il2CppClass::FromTypeDefinitionIndex(EnviroBlockDataTransProperty___c_TypeDefinitionIndex)->GetStaticField(0x34B28);
		}
		static ::System::Comparison_1<::SceneLightVolume*>** StaticGet___9__28_0()
		{
			return (::System::Comparison_1<::SceneLightVolume*>**)Il2CppClass::FromTypeDefinitionIndex(EnviroBlockDataTransProperty___c_TypeDefinitionIndex)->GetStaticField(0x34B30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetActiveSceneLightVolume_b__28_0(::SceneLightVolume* a1, ::SceneLightVolume* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::SceneLightVolume*, ::SceneLightVolume*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY___C__GETACTIVESCENELIGHTVOLUME_B__28_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetActiveSceneLightVolume_b__28_1(::SceneLightVolume* a1, ::SceneLightVolume* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::SceneLightVolume*, ::SceneLightVolume*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY___C__GETACTIVESCENELIGHTVOLUME_B__28_1_OFFSET))(this, a1, a2);
		}
	};
}
