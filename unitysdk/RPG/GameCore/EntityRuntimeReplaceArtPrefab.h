#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EntityLodLoadingArtData; }

#define RPG_GAMECORE_ENTITYRUNTIMEREPLACEARTPREFAB_METHOD_2_1024B385EFC812FA_OFFSET UNITYSDK_OFFSET(0x1D7C66B0)
#define RPG_GAMECORE_ENTITYRUNTIMEREPLACEARTPREFAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C6740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityRuntimeReplaceArtPrefab_TypeDefinitionIndex = 18876;

	class EntityRuntimeReplaceArtPrefab : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::EntityLodLoadingArtData* ArtConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYRUNTIMEREPLACEARTPREFAB__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1024B385EFC812FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EntityRuntimeReplaceArtPrefab*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityRuntimeReplaceArtPrefab*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYRUNTIMEREPLACEARTPREFAB_METHOD_2_1024B385EFC812FA_OFFSET))(a1, a2);
		}
	};
}
