#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTEAMLEADER_METHOD_4_1135FB6B9F9EB77B_OFFSET UNITYSDK_OFFSET(0x1CF4C8B0)
#define RPG_GAMECORE_BYISTEAMLEADER_METHOD_4_13A110131D65000A_OFFSET UNITYSDK_OFFSET(0x1CF4C810)
#define RPG_GAMECORE_BYISTEAMLEADER_METHOD_4_49D0D67004B1D567_OFFSET UNITYSDK_OFFSET(0x1CF4CA90)
#define RPG_GAMECORE_BYISTEAMLEADER_METHOD_4_8C3D9D13AC309212_OFFSET UNITYSDK_OFFSET(0x1CF4CA30)
#define RPG_GAMECORE_BYISTEAMLEADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF4C870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTeamLeader_TypeDefinitionIndex = 20348;

	class ByIsTeamLeader : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMLEADER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_13A110131D65000A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTeamLeader*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTeamLeader*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMLEADER_METHOD_4_13A110131D65000A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1135FB6B9F9EB77B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTeamLeader* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTeamLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMLEADER_METHOD_4_1135FB6B9F9EB77B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8C3D9D13AC309212(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeamLeader*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeamLeader*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMLEADER_METHOD_4_8C3D9D13AC309212_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_49D0D67004B1D567(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeamLeader* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeamLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMLEADER_METHOD_4_49D0D67004B1D567_OFFSET))(a1, a2);
		}
	};
}
