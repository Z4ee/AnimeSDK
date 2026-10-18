#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CACHEDASSETLOADER_ASSETDEPENDENCYDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xC8CE670)
#define RPG_CLIENT_CACHEDASSETLOADER_ASSETDEPENDENCYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC8CE6C0)

namespace RPG::Client
{
	inline static constexpr unsigned int CachedAssetLoader_AssetDependencyData_TypeDefinitionIndex = 59435;

	class CachedAssetLoader_AssetDependencyData : public ::System::Object
	{
	public:
		::System::Int32 MemorySize; // 0x10
		::RPG::Client::CachedAssetLogicType LogicType; // 0x14
		::System::UInt64 AssetNameHash; // 0x18
		::RPG::Client::CachedAssetLogicType OwnerLogicType; // 0x20
		::System::Int32 RefCount; // 0x24
		::System::Int32 OwnerCount; // 0x28

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
