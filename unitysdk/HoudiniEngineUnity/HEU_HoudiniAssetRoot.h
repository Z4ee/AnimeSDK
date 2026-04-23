#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_CLEARHOUDINIENGINEREFERENCES_OFFSET UNITYSDK_OFFSET(0x8C84490)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_DESTROYROOTCOMPONENT_OFFSET UNITYSDK_OFFSET(0x8C844D0)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x8C843B0)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_REMOVEHOUDINIENGINEASSETDATA_OFFSET UNITYSDK_OFFSET(0x8C843E0)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_RESET_OFFSET UNITYSDK_OFFSET(0x8C844E0)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT__CTOR_OFFSET UNITYSDK_OFFSET(0x8C84550)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_HoudiniAssetRoot_TypeDefinitionIndex = 43504;

	class HEU_HoudiniAssetRoot : public ::UnityEngine::MonoBehaviour
	{
	public:
		::HoudiniEngineUnity::HEU_HoudiniAsset* _houdiniAsset; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _bakeTargets; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT__CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_ONDESTROY_OFFSET))(this);
		}

		::System::Void RemoveHoudiniEngineAssetData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_REMOVEHOUDINIENGINEASSETDATA_OFFSET))(this);
		}

		::System::Void ClearHoudiniEngineReferences()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_CLEARHOUDINIENGINEREFERENCES_OFFSET))(this);
		}

		static ::System::Void DestroyRootComponent(::HoudiniEngineUnity::HEU_HoudiniAssetRoot* assetRoot)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_HoudiniAssetRoot*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_DESTROYROOTCOMPONENT_OFFSET))(assetRoot);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_RESET_OFFSET))(this);
		}
	};
}
