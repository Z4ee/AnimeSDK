#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FormationData; }

#define RPG_GAMECORE_FORMATIONASSETCONFIG_METHOD_2_D8B6426AF745DFAF_OFFSET UNITYSDK_OFFSET(0x1892A2F0)
#define RPG_GAMECORE_FORMATIONASSETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1892A3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormationAssetConfig_TypeDefinitionIndex = 16227;

	class FormationAssetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FormationData*>* FormationDataList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONASSETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D8B6426AF745DFAF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FormationAssetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FormationAssetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONASSETCONFIG_METHOD_2_D8B6426AF745DFAF_OFFSET))(a1, a2);
		}
	};
}
