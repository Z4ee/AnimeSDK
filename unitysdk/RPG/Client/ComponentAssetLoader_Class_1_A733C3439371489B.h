#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_AssetSyncResult.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ComponentAssetLoader; }
namespace RPG::Client { class ComponentAssetLoader_ComponentLoadItem; }
namespace System { class String; }
namespace UnityEngine { class Component; }

#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_1_A733C3439371489B_METHOD_1_15FCA09CA4828B90_OFFSET UNITYSDK_OFFSET(0x1A2891E0)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_1_A733C3439371489B_METHOD_1_1E11D4882EEDEE57_1_OFFSET UNITYSDK_OFFSET(0x1A289190)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_1_A733C3439371489B_METHOD_1_1E11D4882EEDEE57_OFFSET UNITYSDK_OFFSET(0x1A289140)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_1_A733C3439371489B_METHOD_1_C8553AEB07BE1FEF_OFFSET UNITYSDK_OFFSET(0x1A289230)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_1_A733C3439371489B_METHOD_1_D0172DBC391B172D_OFFSET UNITYSDK_OFFSET(0x1A289080)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_1_A733C3439371489B_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A289290)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_1_A733C3439371489B_METHOD_1_F6D0AA3FC1093151_OFFSET UNITYSDK_OFFSET(0x1A2890E0)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_1_A733C3439371489B__CTOR_OFFSET UNITYSDK_OFFSET(0x1A287C10)

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentAssetLoader_Class_1_A733C3439371489B_TypeDefinitionIndex = 68359;

	class ComponentAssetLoader_Class_1_A733C3439371489B : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_1_A733C3439371489B__CTOR_OFFSET))(this);
		}

		::RPG::Client::ComponentAssetLoader_AssetSyncResult Method_1_D0172DBC391B172D(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1, ::Il2CppArray<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::ComponentAssetLoader_AssetSyncResult(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_1_A733C3439371489B_METHOD_1_D0172DBC391B172D_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::ComponentAssetLoader_AssetSyncResult Method_1_F6D0AA3FC1093151(::RPG::Client::ComponentAssetLoader* a1, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::ComponentAssetLoader_AssetSyncResult(*)(::PVOID, ::RPG::Client::ComponentAssetLoader*, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_1_A733C3439371489B_METHOD_1_F6D0AA3FC1093151_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_1E11D4882EEDEE57(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_1_A733C3439371489B_METHOD_1_1E11D4882EEDEE57_OFFSET))(this, a1);
		}

		::System::Void Method_1_1E11D4882EEDEE57_1(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_1_A733C3439371489B_METHOD_1_1E11D4882EEDEE57_1_OFFSET))(this, a1);
		}

		::System::Int32 Method_1_15FCA09CA4828B90(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_1_A733C3439371489B_METHOD_1_15FCA09CA4828B90_OFFSET))(this, a1);
		}

		::UnityEngine::Component* Method_1_C8553AEB07BE1FEF(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_1_A733C3439371489B_METHOD_1_C8553AEB07BE1FEF_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_1_A733C3439371489B_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
		}
	};
}
