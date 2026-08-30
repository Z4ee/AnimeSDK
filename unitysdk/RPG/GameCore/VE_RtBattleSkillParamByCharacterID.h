#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_VE_RTBATTLESKILLPARAMBYCHARACTERID_METHOD_3_1A2598079F2701C8_OFFSET UNITYSDK_OFFSET(0x1DEA59C0)
#define RPG_GAMECORE_VE_RTBATTLESKILLPARAMBYCHARACTERID_METHOD_3_7F92496B6DD55218_OFFSET UNITYSDK_OFFSET(0x1DEA5C20)
#define RPG_GAMECORE_VE_RTBATTLESKILLPARAMBYCHARACTERID_METHOD_3_9EA132584BD81E99_OFFSET UNITYSDK_OFFSET(0x1DEA5A00)
#define RPG_GAMECORE_VE_RTBATTLESKILLPARAMBYCHARACTERID_METHOD_3_E1FEFD8AAA94DD07_OFFSET UNITYSDK_OFFSET(0x1DEA5BF0)
#define RPG_GAMECORE_VE_RTBATTLESKILLPARAMBYCHARACTERID__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA59F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtBattleSkillParamByCharacterID_TypeDefinitionIndex = 23987;

	class VE_RtBattleSkillParamByCharacterID : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* CharacterID; // 0x20
		::RPG::GameCore::ValueEvaluatorConfig* Level; // 0x28
		::System::String* SkillName; // 0x30
		::RPG::GameCore::ValueEvaluatorConfig* ParamIndex; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLESKILLPARAMBYCHARACTERID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1A2598079F2701C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtBattleSkillParamByCharacterID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtBattleSkillParamByCharacterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLESKILLPARAMBYCHARACTERID_METHOD_3_1A2598079F2701C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9EA132584BD81E99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtBattleSkillParamByCharacterID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtBattleSkillParamByCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLESKILLPARAMBYCHARACTERID_METHOD_3_9EA132584BD81E99_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E1FEFD8AAA94DD07(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleSkillParamByCharacterID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleSkillParamByCharacterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLESKILLPARAMBYCHARACTERID_METHOD_3_E1FEFD8AAA94DD07_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7F92496B6DD55218(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleSkillParamByCharacterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleSkillParamByCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLESKILLPARAMBYCHARACTERID_METHOD_3_7F92496B6DD55218_OFFSET))(a1, a2);
		}
	};
}
