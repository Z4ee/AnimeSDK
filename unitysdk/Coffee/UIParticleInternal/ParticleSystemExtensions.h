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

#define COFFEE_UIPARTICLEINTERNAL_PARTICLESYSTEMEXTENSIONS_CANBAKEMESH_OFFSET UNITYSDK_OFFSET(0x1EE7E390)
#define COFFEE_UIPARTICLEINTERNAL_PARTICLESYSTEMEXTENSIONS_EXEC_OFFSET UNITYSDK_OFFSET(0x1EE737A0)
#define COFFEE_UIPARTICLEINTERNAL_PARTICLESYSTEMEXTENSIONS_GETACTUALSIMULATIONSPACE_OFFSET UNITYSDK_OFFSET(0x1EE7FCE0)
#define COFFEE_UIPARTICLEINTERNAL_PARTICLESYSTEMEXTENSIONS_GETINDEX_OFFSET UNITYSDK_OFFSET(0x1EE82AD0)
#define COFFEE_UIPARTICLEINTERNAL_PARTICLESYSTEMEXTENSIONS_GETMAINEMITTER_OFFSET UNITYSDK_OFFSET(0x1EE762C0)
#define COFFEE_UIPARTICLEINTERNAL_PARTICLESYSTEMEXTENSIONS_GETPARTICLEARRAY_OFFSET UNITYSDK_OFFSET(0x1EE79250)
#define COFFEE_UIPARTICLEINTERNAL_PARTICLESYSTEMEXTENSIONS_GETTEXTUREFORSPRITE_OFFSET UNITYSDK_OFFSET(0x1EE79D00)
#define COFFEE_UIPARTICLEINTERNAL_PARTICLESYSTEMEXTENSIONS_ISLOCALSPACE_OFFSET UNITYSDK_OFFSET(0x1EE79B00)
#define COFFEE_UIPARTICLEINTERNAL_PARTICLESYSTEMEXTENSIONS_ISSUBEMITTEROF_OFFSET UNITYSDK_OFFSET(0x1EE82DE0)
#define COFFEE_UIPARTICLEINTERNAL_PARTICLESYSTEMEXTENSIONS_ISWORLDSPACE_OFFSET UNITYSDK_OFFSET(0x1EE7FD30)
#define COFFEE_UIPARTICLEINTERNAL_PARTICLESYSTEMEXTENSIONS_SORTFORRENDERING_OFFSET UNITYSDK_OFFSET(0x1EE829B0)
#define COFFEE_UIPARTICLEINTERNAL_PARTICLESYSTEMEXTENSIONS_VALIDATESHAPE_OFFSET UNITYSDK_OFFSET(0x1EE7E3E0)
#define COFFEE_UIPARTICLEINTERNAL_PARTICLESYSTEMEXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE82E70)

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int ParticleSystemExtensions_TypeDefinitionIndex = 43954;

	class ParticleSystemExtensions : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::ParticleSystem_Particle>** StaticGet_s_TmpParticles()
		{
			return (::Il2CppArray<::UnityEngine::ParticleSystem_Particle>**)Il2CppClass::FromTypeDefinitionIndex(ParticleSystemExtensions_TypeDefinitionIndex)->GetStaticField(0x1380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_PARTICLESYSTEMEXTENSIONS__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::UnityEngine::ParticleSystem_Particle>* GetParticleArray(::System::Int32 a1)
		{
			return ((::Il2CppArray<::UnityEngine::ParticleSystem_Particle>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_PARTICLESYSTEMEXTENSIONS_GETPARTICLEARRAY_OFFSET))(a1);
		}

		static ::System::Void ValidateShape(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_PARTICLESYSTEMEXTENSIONS_VALIDATESHAPE_OFFSET))(a1);
		}

		static ::System::Boolean CanBakeMesh(::UnityEngine::ParticleSystemRenderer* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystemRenderer*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_PARTICLESYSTEMEXTENSIONS_CANBAKEMESH_OFFSET))(a1);
		}

		static ::UnityEngine::ParticleSystemSimulationSpace GetActualSimulationSpace(::UnityEngine::ParticleSystem* a1)
		{
			return ((::UnityEngine::ParticleSystemSimulationSpace(*)(::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_PARTICLESYSTEMEXTENSIONS_GETACTUALSIMULATIONSPACE_OFFSET))(a1);
		}

		static ::System::Boolean IsLocalSpace(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_PARTICLESYSTEMEXTENSIONS_ISLOCALSPACE_OFFSET))(a1);
		}

		static ::System::Boolean IsWorldSpace(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_PARTICLESYSTEMEXTENSIONS_ISWORLDSPACE_OFFSET))(a1);
		}

		static ::System::Void SortForRendering(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_PARTICLESYSTEMEXTENSIONS_SORTFORRENDERING_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetIndex(::System::Collections::Generic::IList_1<::UnityEngine::ParticleSystem*>* a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::IList_1<::UnityEngine::ParticleSystem*>*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_PARTICLESYSTEMEXTENSIONS_GETINDEX_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Texture2D* GetTextureForSprite(::UnityEngine::ParticleSystem* a1)
		{
			return ((::UnityEngine::Texture2D*(*)(::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_PARTICLESYSTEMEXTENSIONS_GETTEXTUREFORSPRITE_OFFSET))(a1);
		}

		static ::System::Void Exec(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* a1, ::System::Action_1<::UnityEngine::ParticleSystem*>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>*, ::System::Action_1<::UnityEngine::ParticleSystem*>*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_PARTICLESYSTEMEXTENSIONS_EXEC_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ParticleSystem* GetMainEmitter(::UnityEngine::ParticleSystem* a1, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* a2)
		{
			return ((::UnityEngine::ParticleSystem*(*)(::UnityEngine::ParticleSystem*, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_PARTICLESYSTEMEXTENSIONS_GETMAINEMITTER_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsSubEmitterOf(::UnityEngine::ParticleSystem* a1, ::UnityEngine::ParticleSystem* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem*, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_PARTICLESYSTEMEXTENSIONS_ISSUBEMITTEROF_OFFSET))(a1, a2);
		}
	};
}
