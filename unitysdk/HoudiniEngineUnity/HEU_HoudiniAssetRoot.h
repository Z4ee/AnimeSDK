#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_CLEARHOUDINIENGINEREFERENCES_OFFSET UNITYSDK_OFFSET(0x11A4D340)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_DESTROYROOTCOMPONENT_OFFSET UNITYSDK_OFFSET(0x11A4D390)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_GET_BAKETARGETS_OFFSET UNITYSDK_OFFSET(0x11A4D210)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_GET_HOUDINIASSET_OFFSET UNITYSDK_OFFSET(0x11A4D200)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11A4D220)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_REMOVEHOUDINIENGINEASSETDATA_OFFSET UNITYSDK_OFFSET(0x11A4D250)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_RESET_OFFSET UNITYSDK_OFFSET(0x11A4D3D0)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT__CTOR_OFFSET UNITYSDK_OFFSET(0x11A4D440)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_HoudiniAssetRoot_TypeDefinitionIndex = 39104;

	class HEU_HoudiniAssetRoot : public ::UnityEngine::MonoBehaviour
	{
	public:
		::HoudiniEngineUnity::HEU_HoudiniAsset* _houdiniAsset; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _bakeTargets; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT__CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_HoudiniAsset* get_HoudiniAsset()
		{
			return ((::HoudiniEngineUnity::HEU_HoudiniAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_GET_HOUDINIASSET_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* get_BakeTargets()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_GET_BAKETARGETS_OFFSET))(this);
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

		static ::System::Void DestroyRootComponent(::HoudiniEngineUnity::HEU_HoudiniAssetRoot* a1)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_HoudiniAssetRoot*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_DESTROYROOTCOMPONENT_OFFSET))(a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_RESET_OFFSET))(this);
		}
	};
}
