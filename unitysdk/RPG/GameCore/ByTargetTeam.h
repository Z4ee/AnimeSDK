#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETTEAM_METHOD_4_0F6121A8D13AD2DB_OFFSET UNITYSDK_OFFSET(0x1B2C2C00)
#define RPG_GAMECORE_BYTARGETTEAM_METHOD_4_443C8BC5E15DE355_OFFSET UNITYSDK_OFFSET(0x1B2C2BD0)
#define RPG_GAMECORE_BYTARGETTEAM_METHOD_4_46FBB24434D9F678_OFFSET UNITYSDK_OFFSET(0x1B2C29C0)
#define RPG_GAMECORE_BYTARGETTEAM_METHOD_4_F3624CEC2FCA443D_OFFSET UNITYSDK_OFFSET(0x1B2C2A00)
#define RPG_GAMECORE_BYTARGETTEAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2C29F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetTeam_TypeDefinitionIndex = 21740;

	class ByTargetTeam : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TeamType Team; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETTEAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_46FBB24434D9F678(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetTeam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetTeam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETTEAM_METHOD_4_46FBB24434D9F678_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F3624CEC2FCA443D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetTeam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetTeam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETTEAM_METHOD_4_F3624CEC2FCA443D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_443C8BC5E15DE355(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetTeam*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetTeam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETTEAM_METHOD_4_443C8BC5E15DE355_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0F6121A8D13AD2DB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetTeam* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetTeam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETTEAM_METHOD_4_0F6121A8D13AD2DB_OFFSET))(a1, a2);
		}
	};
}
