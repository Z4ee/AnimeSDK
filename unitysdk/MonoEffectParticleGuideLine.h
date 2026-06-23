#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MonoEffectParticleGuideLine_ControlledParticles;
class MonoEffectParticleGuideLine_GuideLineData;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class ParticleSystem; }

#define MONOEFFECTPARTICLEGUIDELINE_CONTROLPARTICLE_OFFSET UNITYSDK_OFFSET(0xE86F530)
#define MONOEFFECTPARTICLEGUIDELINE_CRATEMESH_OFFSET UNITYSDK_OFFSET(0xE86F740)
#define MONOEFFECTPARTICLEGUIDELINE_GENERATEMESH_OFFSET UNITYSDK_OFFSET(0xE86FB90)
#define MONOEFFECTPARTICLEGUIDELINE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE8712B0)
#define MONOEFFECTPARTICLEGUIDELINE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE86FAB0)
#define MONOEFFECTPARTICLEGUIDELINE_REFRESHGUIDELINE_OFFSET UNITYSDK_OFFSET(0xE8711B0)
#define MONOEFFECTPARTICLEGUIDELINE_START_OFFSET UNITYSDK_OFFSET(0xE86F360)
#define MONOEFFECTPARTICLEGUIDELINE_TESTREFRESHGUIDELINE_OFFSET UNITYSDK_OFFSET(0xE8710D0)
#define MONOEFFECTPARTICLEGUIDELINE__CTOR_OFFSET UNITYSDK_OFFSET(0xE871480)

inline static constexpr unsigned int MonoEffectParticleGuideLine_TypeDefinitionIndex = 62804;

class MonoEffectParticleGuideLine : public ::UnityEngine::MonoBehaviour
{
public:
	::MonoEffectParticleGuideLine_GuideLineData* m_GuideLineData; // 0x18
	::MonoEffectParticleGuideLine_ControlledParticles* m_ControlledParticles; // 0x20
	::System::Single speed; // 0x28
	::UnityEngine::ParticleSystem* psTarget; // 0x30
	::UnityEngine::MeshFilter* meshFilterTargetA; // 0x38
	::UnityEngine::MeshFilter* meshFilterTargetB; // 0x40
	::System::Single meshWidth; // 0x48
	::System::Single fadeWidth; // 0x4C
	::Il2CppArray<::UnityEngine::Mesh*>* cachedMesh; // 0x50
	::System::Boolean guideLineIsReady; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTPARTICLEGUIDELINE__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTPARTICLEGUIDELINE_START_OFFSET))(this);
	}

	::UnityEngine::Mesh* CrateMesh(::Il2CppArray<::UnityEngine::Vector3>* vertices, ::Il2CppArray<::UnityEngine::Vector3>* normals, ::Il2CppArray<::UnityEngine::Vector2>* uvs, ::Il2CppArray<::UnityEngine::Color>* colors, ::Il2CppArray<::System::Int32>* triangles, ::System::Int32 cacheIndex)
	{
		return ((::UnityEngine::Mesh*(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::UnityEngine::Color>*, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONOEFFECTPARTICLEGUIDELINE_CRATEMESH_OFFSET))(this, vertices, normals, uvs, colors, triangles, cacheIndex);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTPARTICLEGUIDELINE_ONDESTROY_OFFSET))(this);
	}

	::System::Void GenerateMesh(::Il2CppArray<::UnityEngine::Vector3>* curvePoints)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MONOEFFECTPARTICLEGUIDELINE_GENERATEMESH_OFFSET))(this, curvePoints);
	}

	::System::Void TestRefreshGuideLine()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTPARTICLEGUIDELINE_TESTREFRESHGUIDELINE_OFFSET))(this);
	}

	::System::Void RefreshGuideLine(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* guidelines)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MONOEFFECTPARTICLEGUIDELINE_REFRESHGUIDELINE_OFFSET))(this, guidelines);
	}

	::System::Void ControlParticle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTPARTICLEGUIDELINE_CONTROLPARTICLE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTPARTICLEGUIDELINE_LATEUPDATE_OFFSET))(this);
	}
};
