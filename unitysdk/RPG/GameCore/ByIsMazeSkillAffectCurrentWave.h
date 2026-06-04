#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE_METHOD_4_21A00B020B8A2A0A_OFFSET UNITYSDK_OFFSET(0x195698B0)
#define RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE_METHOD_4_37D3FB7E69E32A49_OFFSET UNITYSDK_OFFSET(0x19569770)
#define RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE_METHOD_4_5291D344A6F165A2_OFFSET UNITYSDK_OFFSET(0x19569930)
#define RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE_METHOD_4_6717E4332E297A43_OFFSET UNITYSDK_OFFSET(0x195696A0)
#define RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x19569720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsMazeSkillAffectCurrentWave_TypeDefinitionIndex = 22238;

	class ByIsMazeSkillAffectCurrentWave : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6717E4332E297A43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE_METHOD_4_6717E4332E297A43_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_37D3FB7E69E32A49(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE_METHOD_4_37D3FB7E69E32A49_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_21A00B020B8A2A0A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE_METHOD_4_21A00B020B8A2A0A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5291D344A6F165A2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE_METHOD_4_5291D344A6F165A2_OFFSET))(a1, a2);
		}
	};
}
