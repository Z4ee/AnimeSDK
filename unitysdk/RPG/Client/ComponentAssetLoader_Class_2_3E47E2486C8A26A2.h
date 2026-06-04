#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_AssetSyncResult.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_Class_1_A733C3439371489B.h"

namespace RPG::Client { class ComponentAssetLoader_ComponentLoadItem; }
namespace System { class String; }
namespace UnityEngine { class Component; }

#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_3E47E2486C8A26A2_METHOD_2_1B5623B3CB8D63BF_OFFSET UNITYSDK_OFFSET(0xB700D90)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_3E47E2486C8A26A2_METHOD_2_908668BEC77D9726_OFFSET UNITYSDK_OFFSET(0xB700CC0)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_3E47E2486C8A26A2_METHOD_2_C8553AEB07BE1FEF_1_OFFSET UNITYSDK_OFFSET(0xB700EB0)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_3E47E2486C8A26A2_METHOD_2_C8553AEB07BE1FEF_OFFSET UNITYSDK_OFFSET(0xB700C60)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_3E47E2486C8A26A2_METHOD_2_D0172DBC391B172D_OFFSET UNITYSDK_OFFSET(0xB700E50)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_3E47E2486C8A26A2_METHOD_2_E97DD0112E31A642_OFFSET UNITYSDK_OFFSET(0xB700B10)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_3E47E2486C8A26A2__CTOR_OFFSET UNITYSDK_OFFSET(0xB700860)

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentAssetLoader_Class_2_3E47E2486C8A26A2_TypeDefinitionIndex = 63980;

	class ComponentAssetLoader_Class_2_3E47E2486C8A26A2 : public ::RPG::Client::ComponentAssetLoader_Class_1_A733C3439371489B
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_3E47E2486C8A26A2__CTOR_OFFSET))(this);
		}

		::RPG::Client::ComponentAssetLoader_AssetSyncResult Method_2_E97DD0112E31A642(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1, ::Il2CppArray<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::ComponentAssetLoader_AssetSyncResult(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_3E47E2486C8A26A2_METHOD_2_E97DD0112E31A642_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Component* Method_2_C8553AEB07BE1FEF(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_3E47E2486C8A26A2_METHOD_2_C8553AEB07BE1FEF_OFFSET))(this, a1);
		}

		static ::System::Void Method_2_908668BEC77D9726(::UnityEngine::Component* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::Component*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_3E47E2486C8A26A2_METHOD_2_908668BEC77D9726_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_1B5623B3CB8D63BF(::UnityEngine::Component* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_3E47E2486C8A26A2_METHOD_2_1B5623B3CB8D63BF_OFFSET))(a1);
		}

		::RPG::Client::ComponentAssetLoader_AssetSyncResult Method_2_D0172DBC391B172D(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1, ::Il2CppArray<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::ComponentAssetLoader_AssetSyncResult(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_3E47E2486C8A26A2_METHOD_2_D0172DBC391B172D_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Component* Method_2_C8553AEB07BE1FEF_1(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_3E47E2486C8A26A2_METHOD_2_C8553AEB07BE1FEF_1_OFFSET))(this, a1);
		}
	};
}
