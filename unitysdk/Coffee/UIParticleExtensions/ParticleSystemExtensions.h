#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ParticleSystemSimulationSpace.h"
#include "unitysdk/UnityEngine/ParticleSystem_Particle.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }

#define COFFEE_UIPARTICLEEXTENSIONS_PARTICLESYSTEMEXTENSIONS_CANBAKEMESH_OFFSET UNITYSDK_OFFSET(0x1B586880)
#define COFFEE_UIPARTICLEEXTENSIONS_PARTICLESYSTEMEXTENSIONS_EXEC_OFFSET UNITYSDK_OFFSET(0x1B578650)
#define COFFEE_UIPARTICLEEXTENSIONS_PARTICLESYSTEMEXTENSIONS_GETACTUALSIMULATIONSPACE_OFFSET UNITYSDK_OFFSET(0x1B5876A0)
#define COFFEE_UIPARTICLEEXTENSIONS_PARTICLESYSTEMEXTENSIONS_GETINDEX_OFFSET UNITYSDK_OFFSET(0x1B58A0A0)
#define COFFEE_UIPARTICLEEXTENSIONS_PARTICLESYSTEMEXTENSIONS_GETPARTICLEARRAY_OFFSET UNITYSDK_OFFSET(0x1B589C90)
#define COFFEE_UIPARTICLEEXTENSIONS_PARTICLESYSTEMEXTENSIONS_GETTEXTUREFORSPRITE_OFFSET UNITYSDK_OFFSET(0x1B582A30)
#define COFFEE_UIPARTICLEEXTENSIONS_PARTICLESYSTEMEXTENSIONS_ISLOCALSPACE_OFFSET UNITYSDK_OFFSET(0x1B5825D0)
#define COFFEE_UIPARTICLEEXTENSIONS_PARTICLESYSTEMEXTENSIONS_ISWORLDSPACE_OFFSET UNITYSDK_OFFSET(0x1B5879D0)
#define COFFEE_UIPARTICLEEXTENSIONS_PARTICLESYSTEMEXTENSIONS_SORTFORRENDERING_OFFSET UNITYSDK_OFFSET(0x1B589F60)
#define COFFEE_UIPARTICLEEXTENSIONS_PARTICLESYSTEMEXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B58A550)

namespace Coffee::UIParticleExtensions
{
	inline static constexpr unsigned int ParticleSystemExtensions_TypeDefinitionIndex = 32661;

	class ParticleSystemExtensions : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::ParticleSystem_Particle>** StaticGet_s_TmpParticles()
		{
			return (::Il2CppArray<::UnityEngine::ParticleSystem_Particle>**)Il2CppClass::FromTypeDefinitionIndex(ParticleSystemExtensions_TypeDefinitionIndex)->GetStaticField(0x25E90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEEXTENSIONS_PARTICLESYSTEMEXTENSIONS__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::UnityEngine::ParticleSystem_Particle>* GetParticleArray(::System::Int32 size)
		{
			return ((::Il2CppArray<::UnityEngine::ParticleSystem_Particle>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEEXTENSIONS_PARTICLESYSTEMEXTENSIONS_GETPARTICLEARRAY_OFFSET))(size);
		}

		static ::System::Boolean CanBakeMesh(::UnityEngine::ParticleSystemRenderer* self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystemRenderer*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEEXTENSIONS_PARTICLESYSTEMEXTENSIONS_CANBAKEMESH_OFFSET))(self);
		}

		static ::UnityEngine::ParticleSystemSimulationSpace GetActualSimulationSpace(::UnityEngine::ParticleSystem* self)
		{
			return ((::UnityEngine::ParticleSystemSimulationSpace(*)(::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEEXTENSIONS_PARTICLESYSTEMEXTENSIONS_GETACTUALSIMULATIONSPACE_OFFSET))(self);
		}

		static ::System::Boolean IsLocalSpace(::UnityEngine::ParticleSystem* self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEEXTENSIONS_PARTICLESYSTEMEXTENSIONS_ISLOCALSPACE_OFFSET))(self);
		}

		static ::System::Boolean IsWorldSpace(::UnityEngine::ParticleSystem* self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEEXTENSIONS_PARTICLESYSTEMEXTENSIONS_ISWORLDSPACE_OFFSET))(self);
		}

		static ::System::Void SortForRendering(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* self, ::UnityEngine::Transform* transform, ::System::Boolean sortByMaterial)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEEXTENSIONS_PARTICLESYSTEMEXTENSIONS_SORTFORRENDERING_OFFSET))(self, transform, sortByMaterial);
		}

		static ::System::Int32 GetIndex(::System::Collections::Generic::IList_1<::UnityEngine::ParticleSystem*>* list, ::UnityEngine::Object* ps)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::IList_1<::UnityEngine::ParticleSystem*>*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEEXTENSIONS_PARTICLESYSTEMEXTENSIONS_GETINDEX_OFFSET))(list, ps);
		}

		static ::UnityEngine::Texture2D* GetTextureForSprite(::UnityEngine::ParticleSystem* self)
		{
			return ((::UnityEngine::Texture2D*(*)(::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEEXTENSIONS_PARTICLESYSTEMEXTENSIONS_GETTEXTUREFORSPRITE_OFFSET))(self);
		}

		static ::System::Void Exec(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* self, ::System::Action_1<::UnityEngine::ParticleSystem*>* action)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>*, ::System::Action_1<::UnityEngine::ParticleSystem*>*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEEXTENSIONS_PARTICLESYSTEMEXTENSIONS_EXEC_OFFSET))(self, action);
		}
	};
}
