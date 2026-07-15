#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTEAMMATE_METHOD_4_2BB5923F79CDA0C9_OFFSET UNITYSDK_OFFSET(0x1B2AA020)
#define RPG_GAMECORE_BYISTEAMMATE_METHOD_4_7C10375D698EB27A_OFFSET UNITYSDK_OFFSET(0x1B2A9E60)
#define RPG_GAMECORE_BYISTEAMMATE_METHOD_4_BB553F09A4E1E54F_OFFSET UNITYSDK_OFFSET(0x1B2AA050)
#define RPG_GAMECORE_BYISTEAMMATE_METHOD_4_D0F207836C71B8F3_OFFSET UNITYSDK_OFFSET(0x1B2A9EA0)
#define RPG_GAMECORE_BYISTEAMMATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2A9E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTeammate_TypeDefinitionIndex = 22643;

	class ByIsTeammate : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMMATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7C10375D698EB27A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTeammate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTeammate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMMATE_METHOD_4_7C10375D698EB27A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D0F207836C71B8F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTeammate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTeammate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMMATE_METHOD_4_D0F207836C71B8F3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2BB5923F79CDA0C9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeammate*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeammate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMMATE_METHOD_4_2BB5923F79CDA0C9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BB553F09A4E1E54F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeammate* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeammate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMMATE_METHOD_4_BB553F09A4E1E54F_OFFSET))(a1, a2);
		}
	};
}
