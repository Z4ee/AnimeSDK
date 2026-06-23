#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectSize.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/ParticleSystem_MinMaxCurve.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class EtherEyesInteractableVariationConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Renderer; }

#define ETHEREYEPARTICLEMESH_DEALMESHTRANSMIT_OFFSET UNITYSDK_OFFSET(0x1392A6C0)
#define ETHEREYEPARTICLEMESH_DEALSIZESETTINGSANDMESHTRANSMIT_OFFSET UNITYSDK_OFFSET(0x1392A3A0)
#define ETHEREYEPARTICLEMESH_DOCOLLECTPROPERPARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0x13928FA0)
#define ETHEREYEPARTICLEMESH_FETCHCONFIG_OFFSET UNITYSDK_OFFSET(0x13929430)
#define ETHEREYEPARTICLEMESH_ONENTITYDISABLE_OFFSET UNITYSDK_OFFSET(0x1392A7F0)
#define ETHEREYEPARTICLEMESH_UPDATEPARTICLEMESHSOURCE_OFFSET UNITYSDK_OFFSET(0x139295E0)
#define ETHEREYEPARTICLEMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1392AC90)

inline static constexpr unsigned int EtherEyeParticleMesh_TypeDefinitionIndex = 85421;

class EtherEyeParticleMesh : public ::UnityEngine::MonoBehaviour
{
public:
	// static const ::System::String* configPath; // 0x0
	::UnityEngine::GameObject* testGO; // 0x18
	::MoleMole::Config::EtherEyesObjectSize testObjectSize; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* collectedParticleSystems; // 0x28
	::UnityEngine::Mesh* sourceMesh; // 0x30
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EtherEyesObjectSize, ::MoleMole::Config::EtherEyesInteractableVariationConfig*>* particleConfigDict; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem_MinMaxCurve>* originalSize; // 0x40
	::System::Collections::Generic::List_1<::System::Single>* originalRate; // 0x48
	::UnityEngine::Mesh* savedMesh; // 0x50
	::Foundation::AssetRequestHandle RequestHandle; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYEPARTICLEMESH__CTOR_OFFSET))(this);
	}

	::System::Void DoCollectProperParticleSystem()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYEPARTICLEMESH_DOCOLLECTPROPERPARTICLESYSTEM_OFFSET))(this);
	}

	::System::Void FetchConfig()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYEPARTICLEMESH_FETCHCONFIG_OFFSET))(this);
	}

	::System::Void UpdateParticleMeshSource(::UnityEngine::GameObject* casterModelGo, ::Il2CppArray<::UnityEngine::Renderer*>* allRenderers, ::MoleMole::Config::EtherEyesObjectSize objectSize, ::System::Boolean isNormal, ::System::Boolean isPathWire)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Il2CppArray<::UnityEngine::Renderer*>*, ::MoleMole::Config::EtherEyesObjectSize, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ETHEREYEPARTICLEMESH_UPDATEPARTICLEMESHSOURCE_OFFSET))(this, casterModelGo, allRenderers, objectSize, isNormal, isPathWire);
	}

	::System::Void DealMeshTransmit(::UnityEngine::Vector3 sourceScale)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ETHEREYEPARTICLEMESH_DEALMESHTRANSMIT_OFFSET))(this, sourceScale);
	}

	::System::Void DealSizeSettingsAndMeshTransmit(::MoleMole::Config::EtherEyesObjectSize objectSize, ::System::Boolean isNormal, ::UnityEngine::Vector3 sourceScale)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EtherEyesObjectSize, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ETHEREYEPARTICLEMESH_DEALSIZESETTINGSANDMESHTRANSMIT_OFFSET))(this, objectSize, isNormal, sourceScale);
	}

	::System::Void OnEntityDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYEPARTICLEMESH_ONENTITYDISABLE_OFFSET))(this);
	}
};
