#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_AssetSyncResult.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_Class_1_A733C3439371489B.h"

namespace RPG::Client { class ComponentAssetLoader_ComponentLoadItem; }
namespace System { class String; }
namespace UnityEngine { class Component; }

#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_F00699C7B50A73DF_METHOD_2_1B5623B3CB8D63BF_OFFSET UNITYSDK_OFFSET(0x180162F0)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_F00699C7B50A73DF_METHOD_2_908668BEC77D9726_OFFSET UNITYSDK_OFFSET(0x18016220)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_F00699C7B50A73DF_METHOD_2_C8553AEB07BE1FEF_OFFSET UNITYSDK_OFFSET(0x180161C0)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_F00699C7B50A73DF_METHOD_2_E97DD0112E31A642_OFFSET UNITYSDK_OFFSET(0x18016070)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_F00699C7B50A73DF__CTOR_OFFSET UNITYSDK_OFFSET(0x18015E80)

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentAssetLoader_Class_2_F00699C7B50A73DF_TypeDefinitionIndex = 65351;

	class ComponentAssetLoader_Class_2_F00699C7B50A73DF : public ::RPG::Client::ComponentAssetLoader_Class_1_A733C3439371489B
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_F00699C7B50A73DF__CTOR_OFFSET))(this);
		}

		::RPG::Client::ComponentAssetLoader_AssetSyncResult Method_2_E97DD0112E31A642(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1, ::Il2CppArray<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::ComponentAssetLoader_AssetSyncResult(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_F00699C7B50A73DF_METHOD_2_E97DD0112E31A642_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Component* Method_2_C8553AEB07BE1FEF(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_F00699C7B50A73DF_METHOD_2_C8553AEB07BE1FEF_OFFSET))(this, a1);
		}

		static ::System::Void Method_2_908668BEC77D9726(::UnityEngine::Component* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::Component*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_F00699C7B50A73DF_METHOD_2_908668BEC77D9726_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_1B5623B3CB8D63BF(::UnityEngine::Component* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_F00699C7B50A73DF_METHOD_2_1B5623B3CB8D63BF_OFFSET))(a1);
		}
	};
}
