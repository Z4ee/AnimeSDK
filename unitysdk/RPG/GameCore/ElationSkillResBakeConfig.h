#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterCustomPreloadConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SingleElationSkillResBakeConfig; }

#define RPG_GAMECORE_ELATIONSKILLRESBAKECONFIG_METHOD_3_88420910F28438FF_OFFSET UNITYSDK_OFFSET(0x1D056CC0)
#define RPG_GAMECORE_ELATIONSKILLRESBAKECONFIG_METHOD_3_D304FEFB75704FDF_OFFSET UNITYSDK_OFFSET(0x1D056D20)
#define RPG_GAMECORE_ELATIONSKILLRESBAKECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D056D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationSkillResBakeConfig_TypeDefinitionIndex = 16172;

	class ElationSkillResBakeConfig : public ::RPG::GameCore::CharacterCustomPreloadConfigBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::SingleElationSkillResBakeConfig*>* Skills; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLRESBAKECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_88420910F28438FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElationSkillResBakeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElationSkillResBakeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLRESBAKECONFIG_METHOD_3_88420910F28438FF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D304FEFB75704FDF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElationSkillResBakeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElationSkillResBakeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLRESBAKECONFIG_METHOD_3_D304FEFB75704FDF_OFFSET))(a1, a2);
		}
	};
}
