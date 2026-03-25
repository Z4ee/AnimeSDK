#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GpuParticleOccluder; }
namespace System { template <typename T> class Comparison_1; }

#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY___C__CALCULATEOBBAABBINTERSECTIONS_B__56_0_OFFSET UNITYSDK_OFFSET(0xFB990B0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFB99060)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFB990A0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroGpuParticleProperty___c_TypeDefinitionIndex = 40290;

	class EnviroGpuParticleProperty___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::GpuParticleOccluder*>** StaticGet___9__56_0()
		{
			return (::System::Comparison_1<::RPG::Client::GpuParticleOccluder*>**)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty___c_TypeDefinitionIndex)->GetStaticField(0xEA90);
		}
		static ::EnviromentSystem::EnviroGpuParticleProperty___c** StaticGet___9()
		{
			return (::EnviromentSystem::EnviroGpuParticleProperty___c**)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty___c_TypeDefinitionIndex)->GetStaticField(0xEA98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _CalculateOBBAABBIntersections_b__56_0(::RPG::Client::GpuParticleOccluder* a, ::RPG::Client::GpuParticleOccluder* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GpuParticleOccluder*, ::RPG::Client::GpuParticleOccluder*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY___C__CALCULATEOBBAABBINTERSECTIONS_B__56_0_OFFSET))(this, a, b);
		}
	};
}
