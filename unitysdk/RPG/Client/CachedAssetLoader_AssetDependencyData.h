#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CACHEDASSETLOADER_ASSETDEPENDENCYDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x9EC3330)
#define RPG_CLIENT_CACHEDASSETLOADER_ASSETDEPENDENCYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9EC3390)

namespace RPG::Client
{
	inline static constexpr unsigned int CachedAssetLoader_AssetDependencyData_TypeDefinitionIndex = 54828;

	class CachedAssetLoader_AssetDependencyData : public ::System::Object
	{
	public:
		::RPG::Client::CachedAssetLogicType OwnerLogicType; // 0x10
		::System::Int32 OwnerCount; // 0x14
		::System::Int32 MemorySize; // 0x18
		::RPG::Client::CachedAssetLogicType LogicType; // 0x1C
		::System::Int32 RefCount; // 0x20
		::System::UInt64 AssetNameHash; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_ASSETDEPENDENCYDATA__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_ASSETDEPENDENCYDATA_CLEAR_OFFSET))(this);
		}
	};
}
