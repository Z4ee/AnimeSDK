#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterCustomPreloadConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SingleElationSkillResBakeConfig; }

#define RPG_GAMECORE_ELATIONSKILLRESBAKECONFIG_METHOD_3_831235FDA70605F6_OFFSET UNITYSDK_OFFSET(0x1D633820)
#define RPG_GAMECORE_ELATIONSKILLRESBAKECONFIG_METHOD_3_FBF9ACFB413B9585_OFFSET UNITYSDK_OFFSET(0x1D6337E0)
#define RPG_GAMECORE_ELATIONSKILLRESBAKECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D633810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationSkillResBakeConfig_TypeDefinitionIndex = 16345;

	class ElationSkillResBakeConfig : public ::RPG::GameCore::CharacterCustomPreloadConfigBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::SingleElationSkillResBakeConfig*>* Skills; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLRESBAKECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FBF9ACFB413B9585(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElationSkillResBakeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElationSkillResBakeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLRESBAKECONFIG_METHOD_3_FBF9ACFB413B9585_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_831235FDA70605F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElationSkillResBakeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElationSkillResBakeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLRESBAKECONFIG_METHOD_3_831235FDA70605F6_OFFSET))(a1, a2);
		}
	};
}
