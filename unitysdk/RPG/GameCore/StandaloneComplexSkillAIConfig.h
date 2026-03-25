#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ComplexSkillAIFactorGroup; }
namespace RPG::GameCore { class SkillExtensionComplexSkillAIConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STANDALONECOMPLEXSKILLAICONFIG_METHOD_2_A4795A1AB36FF73D_OFFSET UNITYSDK_OFFSET(0x17772060)
#define RPG_GAMECORE_STANDALONECOMPLEXSKILLAICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x177721E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StandaloneComplexSkillAIConfig_TypeDefinitionIndex = 14265;

	class StandaloneComplexSkillAIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ComplexSkillAIFactorGroup*>* GroupsMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SkillExtensionComplexSkillAIConfig*>* SkillMap; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANDALONECOMPLEXSKILLAICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A4795A1AB36FF73D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StandaloneComplexSkillAIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StandaloneComplexSkillAIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANDALONECOMPLEXSKILLAICONFIG_METHOD_2_A4795A1AB36FF73D_OFFSET))(a1, a2);
		}
	};
}
