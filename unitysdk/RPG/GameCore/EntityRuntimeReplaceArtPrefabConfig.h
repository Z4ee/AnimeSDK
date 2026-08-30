#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EntityRuntimeReplaceArtPrefab; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ENTITYRUNTIMEREPLACEARTPREFABCONFIG_METHOD_2_331E7FA3DEA051F4_OFFSET UNITYSDK_OFFSET(0x1D7C6750)
#define RPG_GAMECORE_ENTITYRUNTIMEREPLACEARTPREFABCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C6830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityRuntimeReplaceArtPrefabConfig_TypeDefinitionIndex = 18877;

	class EntityRuntimeReplaceArtPrefabConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::EntityRuntimeReplaceArtPrefab*>* Config; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYRUNTIMEREPLACEARTPREFABCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_331E7FA3DEA051F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EntityRuntimeReplaceArtPrefabConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityRuntimeReplaceArtPrefabConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYRUNTIMEREPLACEARTPREFABCONFIG_METHOD_2_331E7FA3DEA051F4_OFFSET))(a1, a2);
		}
	};
}
