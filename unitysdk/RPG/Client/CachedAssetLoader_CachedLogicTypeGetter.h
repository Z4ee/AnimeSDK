#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CACHEDASSETLOADER_CACHEDLOGICTYPEGETTER_GET_OFFSET UNITYSDK_OFFSET(0xB45E970)
#define RPG_CLIENT_CACHEDASSETLOADER_CACHEDLOGICTYPEGETTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB460140)

namespace RPG::Client
{
	inline static constexpr unsigned int CachedAssetLoader_CachedLogicTypeGetter_TypeDefinitionIndex = 55556;

	class CachedAssetLoader_CachedLogicTypeGetter : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::RPG::Client::CachedAssetLogicType>** StaticGet__CachedAssetLogicTypeMapping()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::RPG::Client::CachedAssetLogicType>**)Il2CppClass::FromTypeDefinitionIndex(CachedAssetLoader_CachedLogicTypeGetter_TypeDefinitionIndex)->GetStaticField(0x5AE70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CACHEDLOGICTYPEGETTER__CCTOR_OFFSET))();
		}

		static ::RPG::Client::CachedAssetLogicType Get(::System::Type* a1)
		{
			return ((::RPG::Client::CachedAssetLogicType(*)(::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CACHEDLOGICTYPEGETTER_GET_OFFSET))(a1);
		}
	};
}
