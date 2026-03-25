#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AISKILLDEPENDENCYCONFIG_METHOD_2_A46AA0C89233FBC0_OFFSET UNITYSDK_OFFSET(0x16E91D50)
#define RPG_GAMECORE_AISKILLDEPENDENCYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E91EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AISkillDependencyConfig_TypeDefinitionIndex = 14310;

	class AISkillDependencyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Int32 AfterUsedTurnCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISKILLDEPENDENCYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A46AA0C89233FBC0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AISkillDependencyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AISkillDependencyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISKILLDEPENDENCYCONFIG_METHOD_2_A46AA0C89233FBC0_OFFSET))(a1, a2);
		}
	};
}
