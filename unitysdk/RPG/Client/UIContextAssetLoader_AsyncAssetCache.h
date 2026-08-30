#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }

#define RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCASSETCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x17007080)

namespace RPG::Client
{
	inline static constexpr unsigned int UIContextAssetLoader_AsyncAssetCache_TypeDefinitionIndex = 72947;

	class UIContextAssetLoader_AsyncAssetCache : public ::System::Object
	{
	public:
		::RPG::Client::IAssetOperation* CacheObject; // 0x10
		::System::Object* UserParam; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCASSETCACHE__CTOR_OFFSET))(this);
		}
	};
}
