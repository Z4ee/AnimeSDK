#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTEAMMATE_METHOD_4_3C2EEA3E4ADFF2E0_OFFSET UNITYSDK_OFFSET(0x19571ED0)
#define RPG_GAMECORE_BYISTEAMMATE_METHOD_4_97BE87EAD8B9A7D1_OFFSET UNITYSDK_OFFSET(0x19571F50)
#define RPG_GAMECORE_BYISTEAMMATE_METHOD_4_A3EEA2AA2C6D8A1D_OFFSET UNITYSDK_OFFSET(0x19571C80)
#define RPG_GAMECORE_BYISTEAMMATE_METHOD_4_D0F207836C71B8F3_OFFSET UNITYSDK_OFFSET(0x19571D50)
#define RPG_GAMECORE_BYISTEAMMATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19571D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTeammate_TypeDefinitionIndex = 22206;

	class ByIsTeammate : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMMATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A3EEA2AA2C6D8A1D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTeammate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTeammate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMMATE_METHOD_4_A3EEA2AA2C6D8A1D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D0F207836C71B8F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTeammate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTeammate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMMATE_METHOD_4_D0F207836C71B8F3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3C2EEA3E4ADFF2E0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeammate*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeammate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMMATE_METHOD_4_3C2EEA3E4ADFF2E0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_97BE87EAD8B9A7D1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeammate* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeammate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMMATE_METHOD_4_97BE87EAD8B9A7D1_OFFSET))(a1, a2);
		}
	};
}
