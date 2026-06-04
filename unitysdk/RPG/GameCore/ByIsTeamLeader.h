#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTEAMLEADER_METHOD_4_1135FB6B9F9EB77B_OFFSET UNITYSDK_OFFSET(0x19571050)
#define RPG_GAMECORE_BYISTEAMLEADER_METHOD_4_28BF3382A4CF1769_OFFSET UNITYSDK_OFFSET(0x19571270)
#define RPG_GAMECORE_BYISTEAMLEADER_METHOD_4_A16D297D9316095C_OFFSET UNITYSDK_OFFSET(0x19570F30)
#define RPG_GAMECORE_BYISTEAMLEADER_METHOD_4_D163B97EFA7BAF18_OFFSET UNITYSDK_OFFSET(0x195711D0)
#define RPG_GAMECORE_BYISTEAMLEADER__CTOR_OFFSET UNITYSDK_OFFSET(0x19570FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTeamLeader_TypeDefinitionIndex = 19444;

	class ByIsTeamLeader : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMLEADER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A16D297D9316095C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTeamLeader*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTeamLeader*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMLEADER_METHOD_4_A16D297D9316095C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1135FB6B9F9EB77B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTeamLeader* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTeamLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMLEADER_METHOD_4_1135FB6B9F9EB77B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D163B97EFA7BAF18(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeamLeader*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeamLeader*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMLEADER_METHOD_4_D163B97EFA7BAF18_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_28BF3382A4CF1769(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeamLeader* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeamLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMLEADER_METHOD_4_28BF3382A4CF1769_OFFSET))(a1, a2);
		}
	};
}
