#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETTEAM_METHOD_4_1C57FC86B91D54FE_OFFSET UNITYSDK_OFFSET(0x195DDFF0)
#define RPG_GAMECORE_BYTARGETTEAM_METHOD_4_658A59B374066D91_OFFSET UNITYSDK_OFFSET(0x195DDCD0)
#define RPG_GAMECORE_BYTARGETTEAM_METHOD_4_F29816FAA772FD11_OFFSET UNITYSDK_OFFSET(0x195DDF70)
#define RPG_GAMECORE_BYTARGETTEAM_METHOD_4_F3624CEC2FCA443D_OFFSET UNITYSDK_OFFSET(0x195DDDA0)
#define RPG_GAMECORE_BYTARGETTEAM__CTOR_OFFSET UNITYSDK_OFFSET(0x195DDD50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetTeam_TypeDefinitionIndex = 21322;

	class ByTargetTeam : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TeamType Team; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETTEAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_658A59B374066D91(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetTeam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetTeam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETTEAM_METHOD_4_658A59B374066D91_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F3624CEC2FCA443D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetTeam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetTeam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETTEAM_METHOD_4_F3624CEC2FCA443D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F29816FAA772FD11(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetTeam*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetTeam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETTEAM_METHOD_4_F29816FAA772FD11_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1C57FC86B91D54FE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetTeam* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetTeam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETTEAM_METHOD_4_1C57FC86B91D54FE_OFFSET))(a1, a2);
		}
	};
}
