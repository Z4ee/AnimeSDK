#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_INITLITTLEGAMEWITHLEVELCONFIG_METHOD_3_67991288636D2BFA_OFFSET UNITYSDK_OFFSET(0x18A1EC20)
#define RPG_GAMECORE_INITLITTLEGAMEWITHLEVELCONFIG_METHOD_3_FC60A0992DC10937_OFFSET UNITYSDK_OFFSET(0x18A1EAD0)
#define RPG_GAMECORE_INITLITTLEGAMEWITHLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A1EB90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InitLittleGameWithLevelConfig_TypeDefinitionIndex = 19976;

	class InitLittleGameWithLevelConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* LittleGameOwner; // 0x18
		::RPG::GameCore::DynamicString* LevelConfigPath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITLITTLEGAMEWITHLEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FC60A0992DC10937(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InitLittleGameWithLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InitLittleGameWithLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITLITTLEGAMEWITHLEVELCONFIG_METHOD_3_FC60A0992DC10937_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_67991288636D2BFA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InitLittleGameWithLevelConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InitLittleGameWithLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITLITTLEGAMEWITHLEVELCONFIG_METHOD_3_67991288636D2BFA_OFFSET))(a1, a2);
		}
	};
}
