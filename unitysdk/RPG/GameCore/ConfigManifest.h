#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfigListType.h"
#include "unitysdk/System/Object.h"

class Class_1_E272722571A79B56;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_CONFIGMANIFEST_DISCOVERCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xB625E50)
#define RPG_GAMECORE_CONFIGMANIFEST_FROMJSON_OFFSET UNITYSDK_OFFSET(0xB625440)
#define RPG_GAMECORE_CONFIGMANIFEST_GETALLCONFIGTYPES_OFFSET UNITYSDK_OFFSET(0xB624D70)
#define RPG_GAMECORE_CONFIGMANIFEST_GETCONFIGLISTBYTYPE_OFFSET UNITYSDK_OFFSET(0xB624A20)
#define RPG_GAMECORE_CONFIGMANIFEST_GET_MANIFESTITEMS_OFFSET UNITYSDK_OFFSET(0xB6249C0)
#define RPG_GAMECORE_CONFIGMANIFEST_INITIALIZECONFIGMANIFEST_OFFSET UNITYSDK_OFFSET(0xB624660)
#define RPG_GAMECORE_CONFIGMANIFEST_LOADBYFILEDISCOVERY_OFFSET UNITYSDK_OFFSET(0xB6256D0)
#define RPG_GAMECORE_CONFIGMANIFEST_LOADMANIFESTITEMBYFILEDISCOVERY_OFFSET UNITYSDK_OFFSET(0xB625830)
#define RPG_GAMECORE_CONFIGMANIFEST_LOADMANIFEST_OFFSET UNITYSDK_OFFSET(0xB624CF0)
#define RPG_GAMECORE_CONFIGMANIFEST_RELEASEMANIFEST_OFFSET UNITYSDK_OFFSET(0xB6268C0)
#define RPG_GAMECORE_CONFIGMANIFEST_TOJSON_OFFSET UNITYSDK_OFFSET(0xB624FD0)
#define RPG_GAMECORE_CONFIGMANIFEST__CTOR_OFFSET UNITYSDK_OFFSET(0xB626A40)
#define RPG_GAMECORE_CONFIGMANIFEST__DISCOVERCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xB626130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigManifest_TypeDefinitionIndex = 52089;

	class ConfigManifest : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::Class_1_E272722571A79B56*>** StaticGet__ManifestItems()
		{
			return (::System::Collections::Generic::List_1<::Class_1_E272722571A79B56*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigManifest_TypeDefinitionIndex)->GetStaticField(0x48F40);
		}
		// static const ::System::String* c_ConfigManifestPath; // 0x0
		::System::Boolean _IsLoaded; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFEST__CTOR_OFFSET))(this);
		}

		static ::System::Void InitializeConfigManifest()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFEST_INITIALIZECONFIGMANIFEST_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::Class_1_E272722571A79B56*>* get_ManifestItems()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_E272722571A79B56*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFEST_GET_MANIFESTITEMS_OFFSET))();
		}

		::Il2CppArray<::System::String*>* GetConfigListByType(::RPG::GameCore::JsonConfigListType fieldType)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::RPG::GameCore::JsonConfigListType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFEST_GETCONFIGLISTBYTYPE_OFFSET))(this, fieldType);
		}

		static ::Il2CppArray<::RPG::GameCore::JsonConfigListType>* GetAllConfigTypes()
		{
			return ((::Il2CppArray<::RPG::GameCore::JsonConfigListType>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFEST_GETALLCONFIGTYPES_OFFSET))();
		}

		static ::System::String* ToJson(::RPG::GameCore::ConfigManifest* manifest)
		{
			return ((::System::String*(*)(::RPG::GameCore::ConfigManifest*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFEST_TOJSON_OFFSET))(manifest);
		}

		::System::Void FromJson(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFEST_FROMJSON_OFFSET))(this, node);
		}

		::System::Void LoadByFileDiscovery(::System::Collections::Generic::HashSet_1<::System::String*>* excludes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFEST_LOADBYFILEDISCOVERY_OFFSET))(this, excludes);
		}

		::System::Void LoadManifestItemByFileDiscovery(::Class_1_E272722571A79B56* item, ::System::Collections::Generic::HashSet_1<::System::String*>* excludes)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E272722571A79B56*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFEST_LOADMANIFESTITEMBYFILEDISCOVERY_OFFSET))(this, item, excludes);
		}

		static ::Il2CppArray<::System::String*>* DiscoverConfigList(::System::String* sVirtualPath, ::System::Collections::Generic::HashSet_1<::System::String*>* excludes)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFEST_DISCOVERCONFIGLIST_OFFSET))(sVirtualPath, excludes);
		}

		static ::System::Void _DiscoverConfigList(::System::String* sBasePath, ::System::String* sVirtualPath, ::System::Collections::Generic::List_1<::System::String*>* pResults, ::System::Collections::Generic::HashSet_1<::System::String*>* excludes)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFEST__DISCOVERCONFIGLIST_OFFSET))(sBasePath, sVirtualPath, pResults, excludes);
		}

		::System::Void LoadManifest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFEST_LOADMANIFEST_OFFSET))(this);
		}

		::System::Void ReleaseManifest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFEST_RELEASEMANIFEST_OFFSET))(this);
		}
	};
}
