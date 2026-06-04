#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace System { class String; }

#define RPG_CLIENT_CACHEDASSETLOADER___C__DISPLAYCLASS21_0__ASYNCLOADASSET_B__0_OFFSET UNITYSDK_OFFSET(0xB45F490)
#define RPG_CLIENT_CACHEDASSETLOADER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB45D340)

namespace RPG::Client
{
	inline static constexpr unsigned int CachedAssetLoader___c__DisplayClass21_0_TypeDefinitionIndex = 55558;

	class CachedAssetLoader___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::String* assetName; // 0x10
		::RPG::Client::OnAssetOperationDelegate* handle; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _AsyncLoadAsset_b__0(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER___C__DISPLAYCLASS21_0__ASYNCLOADASSET_B__0_OFFSET))(this, a1);
		}
	};
}
