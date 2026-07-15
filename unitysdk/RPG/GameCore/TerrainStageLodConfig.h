#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TERRAINSTAGELODCONFIG_METHOD_2_2F315825A11840B5_OFFSET UNITYSDK_OFFSET(0x1C14B420)
#define RPG_GAMECORE_TERRAINSTAGELODCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C14B4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TerrainStageLodConfig_TypeDefinitionIndex = 18453;

	class TerrainStageLodConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* LodMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TERRAINSTAGELODCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2F315825A11840B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TerrainStageLodConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TerrainStageLodConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TERRAINSTAGELODCONFIG_METHOD_2_2F315825A11840B5_OFFSET))(a1, a2);
		}
	};
}
