#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class EmbreeDebugTool_RayDebugInfo;
namespace RPG::Embree { class EmbreeRaycastAPI; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MeshRenderer; }

#define EMBREEDEBUGTOOL_CALCULATESCENEBOUNDS_OFFSET UNITYSDK_OFFSET(0x8366BD0)
#define EMBREEDEBUGTOOL_CASTRAYGRID_OFFSET UNITYSDK_OFFSET(0x8366E00)
#define EMBREEDEBUGTOOL_CLEANUP_OFFSET UNITYSDK_OFFSET(0x8366AF0)
#define EMBREEDEBUGTOOL_EXECUTEDEBUG_OFFSET UNITYSDK_OFFSET(0x8366120)
#define EMBREEDEBUGTOOL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x8368D80)
#define EMBREEDEBUGTOOL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x8368E60)
#define EMBREEDEBUGTOOL_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x83681A0)
#define EMBREEDEBUGTOOL_PRINTRESULTS_OFFSET UNITYSDK_OFFSET(0x8367DA0)
#define EMBREEDEBUGTOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x8368F40)

inline static constexpr unsigned int EmbreeDebugTool_TypeDefinitionIndex = 35082;

class EmbreeDebugTool : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Int32 gridResolution; // 0x18
	::System::Single rayDistance; // 0x1C
	::System::Boolean useAABB; // 0x20
	::System::Single aabbPadding; // 0x24
	::System::Boolean showRays; // 0x28
	::System::Boolean showHitPoints; // 0x29
	::System::Boolean showNormals; // 0x2A
	::System::Single normalLength; // 0x2C
	::UnityEngine::Color hitColor; // 0x30
	::UnityEngine::Color missColor; // 0x40
	::UnityEngine::Color normalColor; // 0x50
	::System::Boolean showDebugInfo; // 0x60
	::System::Collections::Generic::List_1<::EmbreeDebugTool_RayDebugInfo*>* rayResults; // 0x68
	::RPG::Embree::EmbreeRaycastAPI* raycastAPI; // 0x70
	::System::Boolean isInitialized; // 0x78
	::UnityEngine::Bounds sceneBounds; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBREEDEBUGTOOL__CTOR_OFFSET))(this);
	}

	::System::Void ExecuteDebug()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBREEDEBUGTOOL_EXECUTEDEBUG_OFFSET))(this);
	}

	::System::Void CalculateSceneBounds(::Il2CppArray<::UnityEngine::MeshRenderer*>* renderers)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::MeshRenderer*>*))((::PBYTE)hIl2Cpp + EMBREEDEBUGTOOL_CALCULATESCENEBOUNDS_OFFSET))(this, renderers);
	}

	::System::Void CastRayGrid()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBREEDEBUGTOOL_CASTRAYGRID_OFFSET))(this);
	}

	::System::Void PrintResults()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBREEDEBUGTOOL_PRINTRESULTS_OFFSET))(this);
	}

	::System::Void Cleanup()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBREEDEBUGTOOL_CLEANUP_OFFSET))(this);
	}

	::System::Void OnDrawGizmos()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBREEDEBUGTOOL_ONDRAWGIZMOS_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBREEDEBUGTOOL_ONDESTROY_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBREEDEBUGTOOL_ONDISABLE_OFFSET))(this);
	}
};
