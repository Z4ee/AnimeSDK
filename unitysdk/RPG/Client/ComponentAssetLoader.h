#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComponentAssetLoaderBase.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_LoadOption.h"
#include "unitysdk/RPG/Client/ComponentAssetSkinType.h"

namespace RPG::Client { class ComponentAssetLoader_ComponentLoadItem; }
namespace RPG::Client { class ComponentAssetSkinItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_COMPONENTASSETLOADER_AWAKE_OFFSET UNITYSDK_OFFSET(0xCC5C5D0)
#define RPG_CLIENT_COMPONENTASSETLOADER_COLLECTALLREFASSETPATH_OFFSET UNITYSDK_OFFSET(0xCC5D270)
#define RPG_CLIENT_COMPONENTASSETLOADER_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xCC5C830)
#define RPG_CLIENT_COMPONENTASSETLOADER_GET_LOADSTATEINDEX_OFFSET UNITYSDK_OFFSET(0xCC5D500)
#define RPG_CLIENT_COMPONENTASSETLOADER_GET_LOADSTATE_OFFSET UNITYSDK_OFFSET(0xCC5D4F0)
#define RPG_CLIENT_COMPONENTASSETLOADER_METHOD_6_5FB1B9EC645AD55B_OFFSET UNITYSDK_OFFSET(0xCC5CC20)
#define RPG_CLIENT_COMPONENTASSETLOADER_METHOD_6_D8F099CB1A1E0D4E_OFFSET UNITYSDK_OFFSET(0xCC5C6A0)
#define RPG_CLIENT_COMPONENTASSETLOADER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCC5CB90)
#define RPG_CLIENT_COMPONENTASSETLOADER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCC5CAD0)
#define RPG_CLIENT_COMPONENTASSETLOADER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCC5CA00)
#define RPG_CLIENT_COMPONENTASSETLOADER_SETLOADSTATEINDEX_OFFSET UNITYSDK_OFFSET(0xCC5C9A0)
#define RPG_CLIENT_COMPONENTASSETLOADER_SETLOADSTATE_OFFSET UNITYSDK_OFFSET(0xCC5C6F0)
#define RPG_CLIENT_COMPONENTASSETLOADER_SETSKINRESMAPPING_OFFSET UNITYSDK_OFFSET(0xCC5CF40)
#define RPG_CLIENT_COMPONENTASSETLOADER_SETSKIN_OFFSET UNITYSDK_OFFSET(0xCC5CDB0)
#define RPG_CLIENT_COMPONENTASSETLOADER_SPAWNED_OFFSET UNITYSDK_OFFSET(0xCC5C760)
#define RPG_CLIENT_COMPONENTASSETLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0xCC5D510)

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentAssetLoader_TypeDefinitionIndex = 68354;

	class ComponentAssetLoader : public ::RPG::Client::ComponentAssetLoaderBase
	{
	public:
		::RPG::Client::ComponentAssetLoader_LoadOption Option; // 0x18
		::System::Int32 DefaultStateIndex; // 0x1C
		::Il2CppArray<::RPG::Client::ComponentAssetLoader_ComponentLoadItem*>* LoadItems; // 0x20
		::Il2CppArray<::RPG::Client::ComponentAssetSkinItem*>* SkinItems; // 0x28
		::System::Boolean FMNJGFHAPEA; // 0x30
		::System::Int32 DHCEILDDGLA; // 0x34
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* IGKKDEPNHIJ; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_AWAKE_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetLoadStateIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_SETLOADSTATEINDEX_OFFSET))(this, a1);
		}

		::System::Void SetLoadState(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_SETLOADSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void SetSkin(::RPG::Client::ComponentAssetSkinType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComponentAssetSkinType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_SETSKIN_OFFSET))(this, a1, a2);
		}

		::System::Void SetSkinResMapping(::RPG::Client::ComponentAssetSkinType a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComponentAssetSkinType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_SETSKINRESMAPPING_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* CollectAllRefAssetPath()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_COLLECTALLREFASSETPATH_OFFSET))(this);
		}

		::System::Void Method_6_5FB1B9EC645AD55B(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_METHOD_6_5FB1B9EC645AD55B_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_D8F099CB1A1E0D4E(::RPG::Client::ComponentAssetLoader_LoadOption a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_LoadOption))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_METHOD_6_D8F099CB1A1E0D4E_OFFSET))(this, a1);
		}

		::System::Boolean get_LoadState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_GET_LOADSTATE_OFFSET))(this);
		}

		::System::Int32 get_LoadStateIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_GET_LOADSTATEINDEX_OFFSET))(this);
		}
	};
}
