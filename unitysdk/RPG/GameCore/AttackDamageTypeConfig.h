#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackDamageTypeSource.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ATTACKDAMAGETYPECONFIG_METHOD_2_42A043373CD9509C_OFFSET UNITYSDK_OFFSET(0x1CE2C7D0)
#define RPG_GAMECORE_ATTACKDAMAGETYPECONFIG_METHOD_2_70AD061FE2E32537_OFFSET UNITYSDK_OFFSET(0x1CE2C0A0)
#define RPG_GAMECORE_ATTACKDAMAGETYPECONFIG_METHOD_2_D72A8BA1AB8D977A_OFFSET UNITYSDK_OFFSET(0x1CE2CAF0)
#define RPG_GAMECORE_ATTACKDAMAGETYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE2C7C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AttackDamageTypeConfig_TypeDefinitionIndex = 22812;

	class AttackDamageTypeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AttackDamageTypeSource SourceType; // 0x10
		::RPG::GameCore::AttackDamageType DamageType; // 0x14
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACKDAMAGETYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_70AD061FE2E32537(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AttackDamageTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AttackDamageTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACKDAMAGETYPECONFIG_METHOD_2_70AD061FE2E32537_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_42A043373CD9509C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AttackDamageTypeConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AttackDamageTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACKDAMAGETYPECONFIG_METHOD_2_42A043373CD9509C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_D72A8BA1AB8D977A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AttackDamageTypeConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AttackDamageTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACKDAMAGETYPECONFIG_METHOD_2_D72A8BA1AB8D977A_OFFSET))(a1, a2);
		}
	};
}
