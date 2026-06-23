#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapLodController_NapLODLevel.h"
#include "unitysdk/NapLodController_NapLODType.h"
#include "unitysdk/NapLodMeshLoadingState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class MdbComponent; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define NAPLODCONTROLLER_APPLYLODLEVELIMPL_OFFSET UNITYSDK_OFFSET(0xFFDC800)
#define NAPLODCONTROLLER_APPLYLODLEVEL_OFFSET UNITYSDK_OFFSET(0xFFDBD30)
#define NAPLODCONTROLLER_APPLY_OFFSET UNITYSDK_OFFSET(0xFFDC0A0)
#define NAPLODCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xFFDD560)
#define NAPLODCONTROLLER_CLEANUP_OFFSET UNITYSDK_OFFSET(0xFFDD670)
#define NAPLODCONTROLLER_GETMESHFILTER_OFFSET UNITYSDK_OFFSET(0xFFDBE80)
#define NAPLODCONTROLLER_GETMESH_OFFSET UNITYSDK_OFFSET(0xFFDBEC0)
#define NAPLODCONTROLLER_GETRENDER_OFFSET UNITYSDK_OFFSET(0xFFDD860)
#define NAPLODCONTROLLER_GET_LODBASE_OFFSET UNITYSDK_OFFSET(0xFFDBC60)
#define NAPLODCONTROLLER_GET_LODLEVEL_OFFSET UNITYSDK_OFFSET(0xFFDBC50)
#define NAPLODCONTROLLER_GET_LODOFFSET_OFFSET UNITYSDK_OFFSET(0xFFDBDB0)
#define NAPLODCONTROLLER_LOADLODMESHASYNC_OFFSET UNITYSDK_OFFSET(0xFFDC590)
#define NAPLODCONTROLLER_NAPLODMESHSTREAMINGDEBUGLOG_OFFSET UNITYSDK_OFFSET(0xFFDDA50)
#define NAPLODCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xFFDD620)
#define NAPLODCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xFFDBA50)
#define NAPLODCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xFFDB090)
#define NAPLODCONTROLLER_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0xFFDBB90)
#define NAPLODCONTROLLER_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0xFFDBBF0)
#define NAPLODCONTROLLER_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0xFFDBB10)
#define NAPLODCONTROLLER_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0xFFDB150)
#define NAPLODCONTROLLER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xFFDD810)
#define NAPLODCONTROLLER_OVERRIDELODLEVELBYGAMEPLAY_OFFSET UNITYSDK_OFFSET(0xFFDD0B0)
#define NAPLODCONTROLLER_RECOVERLODLEVEL_OFFSET UNITYSDK_OFFSET(0xFFDD3A0)
#define NAPLODCONTROLLER_RELEASELODMESH_OFFSET UNITYSDK_OFFSET(0xFFDCC70)
#define NAPLODCONTROLLER_SET_LODBASE_OFFSET UNITYSDK_OFFSET(0xFFDBC70)
#define NAPLODCONTROLLER_SET_LODOFFSET_OFFSET UNITYSDK_OFFSET(0xFFDBDC0)
#define NAPLODCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xFFDDC60)

inline static constexpr unsigned int NapLodController_TypeDefinitionIndex = 66688;

class NapLodController : public ::UnityEngine::MonoBehaviour
{
public:
	::Il2CppArray<::System::String*>* LodMeshPathes; // 0x18
	::UnityEngine::Animator* animator; // 0x20
	::UnityEngine::MdbComponent* mdbComp; // 0x28
	::NapLodController_NapLODType LodType; // 0x30
	::System::Boolean IsMeshCooked; // 0x34
	::System::Boolean IsPlayer; // 0x35
	::System::Boolean m_IsSkinnedMeshRenderer; // 0x36
	::UnityEngine::SkinnedMeshRenderer* m_Renderer; // 0x38
	::UnityEngine::MeshFilter* m_MeshFilter; // 0x40
	::NapLodController_NapLODLevel m_FinalLodLevel; // 0x48
	::NapLodController_NapLODLevel m_LodBase; // 0x4C
	::System::Int32 m_LodOffset; // 0x50
	::System::Boolean m_IsOverrided; // 0x54
	::Il2CppArray<::NapLodMeshLoadingState>* m_LoadingStates; // 0x58
	::NapLodController_NapLODLevel m_CurrentLodLevel; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLER__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLER_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnLightweightActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLER_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
	}

	::System::Void OnLightweightDeactive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLER_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}

	::NapLodController_NapLODLevel get_LodLevel()
	{
		return ((::NapLodController_NapLODLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLER_GET_LODLEVEL_OFFSET))(this);
	}

	::NapLodController_NapLODLevel get_LodBase()
	{
		return ((::NapLodController_NapLODLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLER_GET_LODBASE_OFFSET))(this);
	}

	::System::Void set_LodBase(::NapLodController_NapLODLevel value)
	{
		return ((::System::Void(*)(::PVOID, ::NapLodController_NapLODLevel))((::PBYTE)hIl2Cpp + NAPLODCONTROLLER_SET_LODBASE_OFFSET))(this, value);
	}

	::System::Int32 get_LodOffset()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLER_GET_LODOFFSET_OFFSET))(this);
	}

	::System::Void set_LodOffset(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPLODCONTROLLER_SET_LODOFFSET_OFFSET))(this, value);
	}

	::UnityEngine::MeshFilter* GetMeshFilter()
	{
		return ((::UnityEngine::MeshFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLER_GETMESHFILTER_OFFSET))(this);
	}

	::UnityEngine::Mesh* GetMesh()
	{
		return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLER_GETMESH_OFFSET))(this);
	}

	::System::Void ApplyLodLevel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLER_APPLYLODLEVEL_OFFSET))(this);
	}

	::System::Void ApplyLodLevelImpl(::UnityEngine::Mesh* mesh)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + NAPLODCONTROLLER_APPLYLODLEVELIMPL_OFFSET))(this, mesh);
	}

	::System::Void OverrideLodLevelByGamePlay(::NapLodController_NapLODLevel lodLevel)
	{
		return ((::System::Void(*)(::PVOID, ::NapLodController_NapLODLevel))((::PBYTE)hIl2Cpp + NAPLODCONTROLLER_OVERRIDELODLEVELBYGAMEPLAY_OFFSET))(this, lodLevel);
	}

	::System::Void RecoverLodLevel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLER_RECOVERLODLEVEL_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLER_AWAKE_OFFSET))(this);
	}

	::System::Void OnRealEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLER_ONREALENABLE_OFFSET))(this);
	}

	::System::Void OnRealDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLER_ONREALDISABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLER_ONDESTROY_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLER_ONVALIDATE_OFFSET))(this);
	}

	::System::Void Apply()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLER_APPLY_OFFSET))(this);
	}

	::UnityEngine::Renderer* GetRender()
	{
		return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLER_GETRENDER_OFFSET))(this);
	}

	::System::Void Cleanup()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLER_CLEANUP_OFFSET))(this);
	}

	::System::Void LoadLodMeshAsync(::System::Int32 lodLevel)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPLODCONTROLLER_LOADLODMESHASYNC_OFFSET))(this, lodLevel);
	}

	::System::Void ReleaseLodMesh(::System::Int32 lodLevel)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPLODCONTROLLER_RELEASELODMESH_OFFSET))(this, lodLevel);
	}

	::System::Void NapLodMeshStreamingDebugLog(::System::String* log)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NAPLODCONTROLLER_NAPLODMESHSTREAMINGDEBUGLOG_OFFSET))(this, log);
	}
};
