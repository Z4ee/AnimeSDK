#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PhaseSkillInfoMappingList; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHARACTERPHASESKILLINFOMAPPINGCONFIG_METHOD_2_57492CA46A37658D_OFFSET UNITYSDK_OFFSET(0x1B728ED0)
#define RPG_GAMECORE_CHARACTERPHASESKILLINFOMAPPINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B728FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterPhaseSkillInfoMappingConfig_TypeDefinitionIndex = 15885;

	class CharacterPhaseSkillInfoMappingConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::PhaseSkillInfoMappingList*>* Mappings; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPHASESKILLINFOMAPPINGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_57492CA46A37658D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterPhaseSkillInfoMappingConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterPhaseSkillInfoMappingConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPHASESKILLINFOMAPPINGCONFIG_METHOD_2_57492CA46A37658D_OFFSET))(a1, a2);
		}
	};
}
