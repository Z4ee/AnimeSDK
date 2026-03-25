#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_AssetSyncResult.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_Class_1_A733C3439371489B.h"

namespace RPG::Client { class ComponentAssetLoader_ComponentLoadItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_8CC9248FCAF3F834_METHOD_2_2B5378247E7031EB_OFFSET UNITYSDK_OFFSET(0x94132D0)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_8CC9248FCAF3F834_METHOD_2_56A077B5B7EF6817_OFFSET UNITYSDK_OFFSET(0x9413E20)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_8CC9248FCAF3F834_METHOD_2_6FC73B3608125498_OFFSET UNITYSDK_OFFSET(0x9413DC0)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_8CC9248FCAF3F834_METHOD_2_7B2C572FC70A5A33_OFFSET UNITYSDK_OFFSET(0x9413AC0)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_8CC9248FCAF3F834_METHOD_2_9FA0F2F97B19BDFF_OFFSET UNITYSDK_OFFSET(0x9413BC0)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_8CC9248FCAF3F834_METHOD_2_AB20670EB05B1ABD_OFFSET UNITYSDK_OFFSET(0x9413D20)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_8CC9248FCAF3F834_METHOD_2_EE7527057799DF5C_OFFSET UNITYSDK_OFFSET(0x9413E80)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_8CC9248FCAF3F834__CTOR_OFFSET UNITYSDK_OFFSET(0x94132A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentAssetLoader_Class_2_8CC9248FCAF3F834_TypeDefinitionIndex = 55833;

	class ComponentAssetLoader_Class_2_8CC9248FCAF3F834 : public ::RPG::Client::ComponentAssetLoader_Class_1_A733C3439371489B
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_Field_2_0()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ComponentAssetLoader_Class_2_8CC9248FCAF3F834_TypeDefinitionIndex)->GetStaticField(0x41670);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_8CC9248FCAF3F834__CTOR_OFFSET))(this);
		}

		::RPG::Client::ComponentAssetLoader_AssetSyncResult Method_2_2B5378247E7031EB(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1, ::Il2CppArray<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::ComponentAssetLoader_AssetSyncResult(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_8CC9248FCAF3F834_METHOD_2_2B5378247E7031EB_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Component* Method_2_7B2C572FC70A5A33(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_8CC9248FCAF3F834_METHOD_2_7B2C572FC70A5A33_OFFSET))(this, a1);
		}

		::System::Int32 Method_2_AB20670EB05B1ABD(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_8CC9248FCAF3F834_METHOD_2_AB20670EB05B1ABD_OFFSET))(this, a1);
		}

		static ::System::Void Method_2_9FA0F2F97B19BDFF(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_8CC9248FCAF3F834_METHOD_2_9FA0F2F97B19BDFF_OFFSET))(a1);
		}

		::RPG::Client::ComponentAssetLoader_AssetSyncResult Method_2_6FC73B3608125498(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* P0, ::Il2CppArray<::System::String*>* P1, ::System::Boolean P2)
		{
			return ((::RPG::Client::ComponentAssetLoader_AssetSyncResult(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_8CC9248FCAF3F834_METHOD_2_6FC73B3608125498_OFFSET))(this, P0, P1, P2);
		}

		::UnityEngine::Component* Method_2_56A077B5B7EF6817(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* P0)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_8CC9248FCAF3F834_METHOD_2_56A077B5B7EF6817_OFFSET))(this, P0);
		}

		::System::Int32 Method_2_EE7527057799DF5C(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* P0)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_2_8CC9248FCAF3F834_METHOD_2_EE7527057799DF5C_OFFSET))(this, P0);
		}
	};
}
