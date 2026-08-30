#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ElfFeverSkillLevelConfig; }

#define RPG_GAMECORE_ELFFEVERSKILLCONFIG_METHOD_2_915BFE5DE8EA7474_OFFSET UNITYSDK_OFFSET(0x1DB293A0)
#define RPG_GAMECORE_ELFFEVERSKILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB29490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfFeverSkillConfig_TypeDefinitionIndex = 18245;

	class ElfFeverSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ElfFeverSkillLevelConfig*>* FeverSkillLevelConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFFEVERSKILLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_915BFE5DE8EA7474(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfFeverSkillConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfFeverSkillConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFFEVERSKILLCONFIG_METHOD_2_915BFE5DE8EA7474_OFFSET))(a1, a2);
		}
	};
}
