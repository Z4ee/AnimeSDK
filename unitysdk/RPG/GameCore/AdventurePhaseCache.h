#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EntityLodLoadingData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ADVENTUREPHASECACHE_GETENTITYLODLOADINGDATA_OFFSET UNITYSDK_OFFSET(0xA84B790)
#define RPG_GAMECORE_ADVENTUREPHASECACHE_GETMESHLODPATH_OFFSET UNITYSDK_OFFSET(0xA84B990)
#define RPG_GAMECORE_ADVENTUREPHASECACHE_RELEASEONSWITCHMAP_OFFSET UNITYSDK_OFFSET(0xA84B6B0)
#define RPG_GAMECORE_ADVENTUREPHASECACHE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA84BBC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventurePhaseCache_TypeDefinitionIndex = 42288;

	class AdventurePhaseCache : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>, ::System::String*>** StaticGet__MeshLodPathDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AdventurePhaseCache_TypeDefinitionIndex)->GetStaticField(0x44280);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::EntityLodLoadingData*>** StaticGet__LoadingDataCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::EntityLodLoadingData*>**)Il2CppClass::FromTypeDefinitionIndex(AdventurePhaseCache_TypeDefinitionIndex)->GetStaticField(0x44288);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPHASECACHE__CCTOR_OFFSET))();
		}

		static ::System::Void ReleaseOnSwitchMap()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPHASECACHE_RELEASEONSWITCHMAP_OFFSET))();
		}

		static ::RPG::GameCore::EntityLodLoadingData* GetEntityLodLoadingData(::System::String* jsonPath)
		{
			return ((::RPG::GameCore::EntityLodLoadingData*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPHASECACHE_GETENTITYLODLOADINGDATA_OFFSET))(jsonPath);
		}

		static ::System::String* GetMeshLodPath(::System::String* meshPathBase, ::System::Int32 lod)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPHASECACHE_GETMESHLODPATH_OFFSET))(meshPathBase, lod);
		}
	};
}
