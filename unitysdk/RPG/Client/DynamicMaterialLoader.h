#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComponentAssetLoaderBase.h"
#include "unitysdk/RPG/Client/DynamicMaterialLoader_LoadOption.h"

namespace RPG::Client { class DynamicMaterialLoader_RendererLoadItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DYNAMICMATERIALLOADER_AWAKE_OFFSET UNITYSDK_OFFSET(0xB821390)
#define RPG_CLIENT_DYNAMICMATERIALLOADER_COLLECTALLREFASSETPATH_OFFSET UNITYSDK_OFFSET(0xB821FA0)
#define RPG_CLIENT_DYNAMICMATERIALLOADER_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xB8216E0)
#define RPG_CLIENT_DYNAMICMATERIALLOADER_FORCELOAD_OFFSET UNITYSDK_OFFSET(0xB8218E0)
#define RPG_CLIENT_DYNAMICMATERIALLOADER_FORCEUNLOAD_OFFSET UNITYSDK_OFFSET(0xB821940)
#define RPG_CLIENT_DYNAMICMATERIALLOADER_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xB822030)
#define RPG_CLIENT_DYNAMICMATERIALLOADER_METHOD_6_2805BA06C41CBB37_OFFSET UNITYSDK_OFFSET(0xB821420)
#define RPG_CLIENT_DYNAMICMATERIALLOADER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB821890)
#define RPG_CLIENT_DYNAMICMATERIALLOADER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB821800)
#define RPG_CLIENT_DYNAMICMATERIALLOADER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB821770)
#define RPG_CLIENT_DYNAMICMATERIALLOADER_SETLOADSTATE_OFFSET UNITYSDK_OFFSET(0xB821470)
#define RPG_CLIENT_DYNAMICMATERIALLOADER_SPAWNED_OFFSET UNITYSDK_OFFSET(0xB821650)
#define RPG_CLIENT_DYNAMICMATERIALLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0xB822090)
#define RPG_CLIENT_DYNAMICMATERIALLOADER___IFIXBASEPROXY_COLLECTALLREFASSETPATH_OFFSET UNITYSDK_OFFSET(0xB822100)

namespace RPG::Client
{
	inline static constexpr unsigned int DynamicMaterialLoader_TypeDefinitionIndex = 63991;

	class DynamicMaterialLoader : public ::RPG::Client::ComponentAssetLoaderBase
	{
	public:
		::RPG::Client::DynamicMaterialLoader_LoadOption Option; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::DynamicMaterialLoader_RendererLoadItem*>* LoadItems; // 0x20
		::System::Boolean Field_6_2; // 0x28
		::System::Boolean Field_6_3; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_AWAKE_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_ONDESTROY_OFFSET))(this);
		}

		::System::Void ForceLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_FORCELOAD_OFFSET))(this);
		}

		::System::Void ForceUnload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_FORCEUNLOAD_OFFSET))(this);
		}

		::System::Void SetLoadState(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_SETLOADSTATE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* CollectAllRefAssetPath()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_COLLECTALLREFASSETPATH_OFFSET))(this);
		}

		::System::Boolean Method_6_2805BA06C41CBB37(::RPG::Client::DynamicMaterialLoader_LoadOption a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DynamicMaterialLoader_LoadOption))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_METHOD_6_2805BA06C41CBB37_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* __iFixBaseProxy_CollectAllRefAssetPath()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER___IFIXBASEPROXY_COLLECTALLREFASSETPATH_OFFSET))(this);
		}
	};
}
