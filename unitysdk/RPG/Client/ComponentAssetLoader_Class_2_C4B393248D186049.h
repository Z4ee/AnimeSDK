#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_AssetSyncResult.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_Class_1_A733C3439371489B.h"

namespace RPG::Client { class ComponentAssetLoader_ComponentLoadItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_C4B393248D186049_METHOD_2_3CD6E3B4A8AD91EF_OFFSET UNITYSDK_OFFSET(0xCC5E510)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_C4B393248D186049_METHOD_2_4BB7541873A6CE6B_OFFSET UNITYSDK_OFFSET(0xCC5E670)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_C4B393248D186049_METHOD_2_4C1D0D51A45DF889_OFFSET UNITYSDK_OFFSET(0xCC5E410)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_C4B393248D186049_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xCC5E710)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_C4B393248D186049_METHOD_2_FCCA0C94BB179B19_OFFSET UNITYSDK_OFFSET(0xCC5DB70)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_C4B393248D186049__CTOR_OFFSET UNITYSDK_OFFSET(0xCC5E720)

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentAssetLoader_Class_2_C4B393248D186049_TypeDefinitionIndex = 68365;

	class ComponentAssetLoader_Class_2_C4B393248D186049 : public ::RPG::Client::ComponentAssetLoader_Class_1_A733C3439371489B
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_FFFELJKHHFE()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ComponentAssetLoader_Class_2_C4B393248D186049_TypeDefinitionIndex)->GetStaticField(0x587B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_C4B393248D186049__CTOR_OFFSET))(this);
		}

		::RPG::Client::ComponentAssetLoader_AssetSyncResult Method_2_FCCA0C94BB179B19(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1, ::Il2CppArray<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::ComponentAssetLoader_AssetSyncResult(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_C4B393248D186049_METHOD_2_FCCA0C94BB179B19_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Component* Method_2_4C1D0D51A45DF889(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_C4B393248D186049_METHOD_2_4C1D0D51A45DF889_OFFSET))(this, a1);
		}

		::System::Int32 Method_2_4BB7541873A6CE6B(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_C4B393248D186049_METHOD_2_4BB7541873A6CE6B_OFFSET))(this, a1);
		}

		static ::System::Void Method_2_3CD6E3B4A8AD91EF(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_C4B393248D186049_METHOD_2_3CD6E3B4A8AD91EF_OFFSET))(a1);
		}

		::System::Boolean Method_2_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_C4B393248D186049_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
		}
	};
}
