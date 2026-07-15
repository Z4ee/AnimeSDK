#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ElfLeaderSkillLevelConfig; }

#define RPG_GAMECORE_ELFLEADERSKILLCONFIG_METHOD_2_FC23A751BFA459E7_OFFSET UNITYSDK_OFFSET(0x1BB37710)
#define RPG_GAMECORE_ELFLEADERSKILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB37800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfLeaderSkillConfig_TypeDefinitionIndex = 17729;

	class ElfLeaderSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ElfLeaderSkillLevelConfig*>* LeaderSkillLevelConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFLEADERSKILLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FC23A751BFA459E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfLeaderSkillConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfLeaderSkillConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFLEADERSKILLCONFIG_METHOD_2_FC23A751BFA459E7_OFFSET))(a1, a2);
		}
	};
}
