#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Map3DLiftRenderer_ELiftType.h"
#include "unitysdk/Map3DLiftRenderer_LiftParams.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }

#define MAP3DLIFTRENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12B839B0)
#define MAP3DLIFTRENDERER_SETUPLIFTEFFECT_OFFSET UNITYSDK_OFFSET(0x12B84170)
#define MAP3DLIFTRENDERER_SWITCHLINETYPE_OFFSET UNITYSDK_OFFSET(0x12B84AE0)
#define MAP3DLIFTRENDERER_UPDATECURRENTDISTANCE_OFFSET UNITYSDK_OFFSET(0x12B84DB0)
#define MAP3DLIFTRENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0x12B84E60)
#define MAP3DLIFTRENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B85620)
#define MAP3DLIFTRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x12B85430)

inline static constexpr unsigned int Map3DLiftRenderer_TypeDefinitionIndex = 75476;

class Map3DLiftRenderer : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
{
public:
	static ::System::Single* StaticGet_percent()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Map3DLiftRenderer_TypeDefinitionIndex)->GetStaticField(0xCAD0);
	}
	::UnityEngine::Material* sphereMaterial; // 0x58
	::System::Single radius; // 0x60
	::System::Single radiusFar; // 0x64
	::UnityEngine::GameObject* topSphere; // 0x68
	::UnityEngine::GameObject* bottomSphere; // 0x70
	::UnityEngine::GameObject* linkObjectA; // 0x78
	::UnityEngine::GameObject* linkObjectB; // 0x80
	::Map3DLiftRenderer_ELiftType liftType; // 0x88
	::System::Collections::Generic::Dictionary_2<::Map3DLiftRenderer_ELiftType, ::Map3DLiftRenderer_LiftParams>* liftParams; // 0x90
	::UnityEngine::MeshRenderer* bottomMR; // 0x98
	::UnityEngine::MeshRenderer* topMR; // 0xA0
	::UnityEngine::MeshRenderer* linkMRA; // 0xA8
	::UnityEngine::MeshRenderer* linkMRB; // 0xB0
	::System::Single sphereRealRadius; // 0xB8
	::System::Single lineRealRadius; // 0xBC
	::System::Boolean isSetup; // 0xC0
	::System::Int32 _DistancePercent; // 0xC4
	::System::Int32 ForceLayerIndex; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAP3DLIFTRENDERER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAP3DLIFTRENDERER__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAP3DLIFTRENDERER_ONENABLE_OFFSET))(this);
	}

	::System::Void SetupLiftEffect(::UnityEngine::Vector3 bottomPos, ::UnityEngine::Vector3 topPos, ::Map3DLiftRenderer_ELiftType type)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Map3DLiftRenderer_ELiftType))((::PBYTE)hIl2Cpp + MAP3DLIFTRENDERER_SETUPLIFTEFFECT_OFFSET))(this, bottomPos, topPos, type);
	}

	::System::Void SwitchLineType(::Map3DLiftRenderer_ELiftType type)
	{
		return ((::System::Void(*)(::PVOID, ::Map3DLiftRenderer_ELiftType))((::PBYTE)hIl2Cpp + MAP3DLIFTRENDERER_SWITCHLINETYPE_OFFSET))(this, type);
	}

	static ::System::Void UpdateCurrentDistance(::System::Single maxDist, ::System::Single minDist, ::System::Single curDist)
	{
		return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MAP3DLIFTRENDERER_UPDATECURRENTDISTANCE_OFFSET))(maxDist, minDist, curDist);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAP3DLIFTRENDERER_UPDATE_OFFSET))(this);
	}
};
