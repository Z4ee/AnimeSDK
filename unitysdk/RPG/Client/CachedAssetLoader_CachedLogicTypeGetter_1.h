#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CachedAssetLoader_CachedLogicTypeGetter_1_TypeDefinitionIndex = 56794;

	template <typename TObject>
	class CachedAssetLoader_CachedLogicTypeGetter_1 : public ::System::Object
	{
	public:
		static ::RPG::Client::CachedAssetLogicType* StaticGet_Default()
		{
			return (::RPG::Client::CachedAssetLogicType*)Il2CppClass::FromTypeDefinitionIndex(CachedAssetLoader_CachedLogicTypeGetter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
