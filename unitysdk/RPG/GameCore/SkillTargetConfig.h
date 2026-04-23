#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ServantSelectType.h"
#include "unitysdk/RPG/GameCore/SkillSubTargetType.h"
#include "unitysdk/RPG/GameCore/SkillTargetAliveState.h"
#include "unitysdk/RPG/GameCore/SkillTargetType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SKILLTARGETCONFIG_METHOD_2_847860BE801C153F_OFFSET UNITYSDK_OFFSET(0x18E71390)
#define RPG_GAMECORE_SKILLTARGETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18E72F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillTargetConfig_TypeDefinitionIndex = 17268;

	class SkillTargetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::SkillTargetType TargetType; // 0x10
		::RPG::GameCore::SkillSubTargetType SubTargetType; // 0x14
		::RPG::GameCore::TargetEvaluator* TargetFilter; // 0x18
		::System::Int32 AdjoinSubTargetCount; // 0x20
		::System::Boolean IncludeAllRowsSubTarget; // 0x24
		::RPG::Client::TextID InvalidTargetMessage; // 0x28
		::System::String* InvalidTargetMessageIcon; // 0x38
		::System::Int32 MaxTargetCount; // 0x40
		::RPG::GameCore::SkillTargetAliveState AliveState; // 0x44
		::System::Boolean AvoidSelf; // 0x48
		::RPG::GameCore::ServantSelectType AllowFriendServant; // 0x4C
		::RPG::GameCore::ServantSelectType AllowEnemyServant; // 0x50
		::System::Boolean AllowUnselectableTarget; // 0x54
		::System::Boolean MergeServantSelectToSummoner; // 0x55
		::System::Boolean IsDynamicTarget; // 0x56

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLTARGETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_847860BE801C153F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SkillTargetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SkillTargetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLTARGETCONFIG_METHOD_2_847860BE801C153F_OFFSET))(a1, a2);
		}
	};
}
