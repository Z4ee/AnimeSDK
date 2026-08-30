#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfigListType.h"
#include "unitysdk/System/Object.h"

class Class_1_E272722571A79B56;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_CONFIGMANIFEST_DISCOVERCONFIGLIST_OFFSET UNITYSDK_OFFSET(0x12269890)
#define RPG_GAMECORE_CONFIGMANIFEST_FROMJSON_OFFSET UNITYSDK_OFFSET(0x12268EB0)
#define RPG_GAMECORE_CONFIGMANIFEST_GETALLCONFIGTYPES_OFFSET UNITYSDK_OFFSET(0x12268710)
#define RPG_GAMECORE_CONFIGMANIFEST_GETCONFIGLISTBYTYPE_OFFSET UNITYSDK_OFFSET(0x122683A0)
#define RPG_GAMECORE_CONFIGMANIFEST_GET_MANIFESTITEMS_OFFSET UNITYSDK_OFFSET(0x12268340)
#define RPG_GAMECORE_CONFIGMANIFEST_INITIALIZECONFIGMANIFEST_OFFSET UNITYSDK_OFFSET(0x12267B40)
#define RPG_GAMECORE_CONFIGMANIFEST_LOADBYFILEDISCOVERY_OFFSET UNITYSDK_OFFSET(0x12269230)
#define RPG_GAMECORE_CONFIGMANIFEST_LOADMANIFESTITEMBYFILEDISCOVERY_OFFSET UNITYSDK_OFFSET(0x122693B0)
#define RPG_GAMECORE_CONFIGMANIFEST_LOADMANIFEST_OFFSET UNITYSDK_OFFSET(0x12268630)
#define RPG_GAMECORE_CONFIGMANIFEST_RELEASEMANIFEST_OFFSET UNITYSDK_OFFSET(0x1226A640)
#define RPG_GAMECORE_CONFIGMANIFEST_TOJSON_OFFSET UNITYSDK_OFFSET(0x12268980)
#define RPG_GAMECORE_CONFIGMANIFEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1226A790)
#define RPG_GAMECORE_CONFIGMANIFEST__DISCOVERCONFIGLIST_OFFSET UNITYSDK_OFFSET(0x12269B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigManifest_TypeDefinitionIndex = 56695;

	class ConfigManifest : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::Class_1_E272722571A79B56*>** StaticGet__ManifestItems()
		{
			return (::System::Collections::Generic::List_1<::Class_1_E272722571A79B56*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigManifest_TypeDefinitionIndex)->GetStaticField(0x66FB0);
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

		::Il2CppArray<::System::String*>* GetConfigListByType(::RPG::GameCore::JsonConfigListType a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::RPG::GameCore::JsonConfigListType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFEST_GETCONFIGLISTBYTYPE_OFFSET))(this, a1);
		}

		static ::Il2CppArray<::RPG::GameCore::JsonConfigListType>* GetAllConfigTypes()
		{
			return ((::Il2CppArray<::RPG::GameCore::JsonConfigListType>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFEST_GETALLCONFIGTYPES_OFFSET))();
		}

		static ::System::String* ToJson(::RPG::GameCore::ConfigManifest* a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::ConfigManifest*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFEST_TOJSON_OFFSET))(a1);
		}

		::System::Void FromJson(::SimpleJSON::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFEST_FROMJSON_OFFSET))(this, a1);
		}

		::System::Void LoadByFileDiscovery(::System::Collections::Generic::HashSet_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFEST_LOADBYFILEDISCOVERY_OFFSET))(this, a1);
		}

		::System::Void LoadManifestItemByFileDiscovery(::Class_1_E272722571A79B56* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E272722571A79B56*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFEST_LOADMANIFESTITEMBYFILEDISCOVERY_OFFSET))(this, a1, a2);
		}

		static ::Il2CppArray<::System::String*>* DiscoverConfigList(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFEST_DISCOVERCONFIGLIST_OFFSET))(a1, a2);
		}

		static ::System::Void _DiscoverConfigList(::System::String* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::System::Collections::Generic::HashSet_1<::System::String*>* a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFEST__DISCOVERCONFIGLIST_OFFSET))(a1, a2, a3, a4);
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
