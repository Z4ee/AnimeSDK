#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FormationData; }

#define RPG_GAMECORE_FORMATIONASSETCONFIG_METHOD_2_68F8E1EA5D323F32_OFFSET UNITYSDK_OFFSET(0x197656C0)
#define RPG_GAMECORE_FORMATIONASSETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19765780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormationAssetConfig_TypeDefinitionIndex = 16265;

	class FormationAssetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FormationData*>* FormationDataList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONASSETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_68F8E1EA5D323F32(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FormationAssetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FormationAssetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONASSETCONFIG_METHOD_2_68F8E1EA5D323F32_OFFSET))(a1, a2);
		}
	};
}
