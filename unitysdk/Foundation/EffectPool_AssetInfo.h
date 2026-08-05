#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_EFFECTPOOL_ASSETINFO_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x1F4BDDE0)
#define FOUNDATION_EFFECTPOOL_ASSETINFO_DEALLOCATE_OFFSET UNITYSDK_OFFSET(0x1F4BDE70)
#define FOUNDATION_EFFECTPOOL_ASSETINFO_RESET_OFFSET UNITYSDK_OFFSET(0x1F4BDC90)
#define FOUNDATION_EFFECTPOOL_ASSETINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4BDF10)

namespace Foundation
{
	inline static constexpr unsigned int EffectPool_AssetInfo_TypeDefinitionIndex = 8130;

	class EffectPool_AssetInfo : public ::System::Object
	{
	public:
		::Foundation::AssetRequestHandle handle; // 0x10
		::System::Int32 refCount; // 0x30
		::System::Single lastUsedTime; // 0x34
		::System::Single delayUnloadTime; // 0x38
		::System::Boolean isPreload; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_ASSETINFO__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_ASSETINFO_RESET_OFFSET))(this);
		}

		static ::Foundation::EffectPool_AssetInfo* Allocate()
		{
			return ((::Foundation::EffectPool_AssetInfo*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_ASSETINFO_ALLOCATE_OFFSET))();
		}

		static ::System::Void Deallocate(::Foundation::EffectPool_AssetInfo* assetInfo)
		{
			return ((::System::Void(*)(::Foundation::EffectPool_AssetInfo*))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_ASSETINFO_DEALLOCATE_OFFSET))(assetInfo);
		}
	};
}
