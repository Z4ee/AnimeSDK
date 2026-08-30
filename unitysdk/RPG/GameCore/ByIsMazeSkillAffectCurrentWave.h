#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE_METHOD_4_05FCA94E95966EC2_OFFSET UNITYSDK_OFFSET(0x1CF437D0)
#define RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE_METHOD_4_37D3FB7E69E32A49_OFFSET UNITYSDK_OFFSET(0x1CF43810)
#define RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE_METHOD_4_66AB750877ACA4A6_OFFSET UNITYSDK_OFFSET(0x1CF43980)
#define RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE_METHOD_4_8AAA7911EBCA99F3_OFFSET UNITYSDK_OFFSET(0x1CF43950)
#define RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF43800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsMazeSkillAffectCurrentWave_TypeDefinitionIndex = 23255;

	class ByIsMazeSkillAffectCurrentWave : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_05FCA94E95966EC2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE_METHOD_4_05FCA94E95966EC2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_37D3FB7E69E32A49(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE_METHOD_4_37D3FB7E69E32A49_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8AAA7911EBCA99F3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE_METHOD_4_8AAA7911EBCA99F3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_66AB750877ACA4A6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE_METHOD_4_66AB750877ACA4A6_OFFSET))(a1, a2);
		}
	};
}
