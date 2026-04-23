#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_VE_RTBATTLESKILLPARAMBYCHARACTERID_METHOD_3_7C25BD28B3A8E07F_OFFSET UNITYSDK_OFFSET(0x190EEF10)
#define RPG_GAMECORE_VE_RTBATTLESKILLPARAMBYCHARACTERID_METHOD_3_B97A48CB5EACBF2E_OFFSET UNITYSDK_OFFSET(0x190EEED0)
#define RPG_GAMECORE_VE_RTBATTLESKILLPARAMBYCHARACTERID__CTOR_OFFSET UNITYSDK_OFFSET(0x190EEF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtBattleSkillParamByCharacterID_TypeDefinitionIndex = 23272;

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

		static ::System::Void Method_3_B97A48CB5EACBF2E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtBattleSkillParamByCharacterID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtBattleSkillParamByCharacterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLESKILLPARAMBYCHARACTERID_METHOD_3_B97A48CB5EACBF2E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7C25BD28B3A8E07F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtBattleSkillParamByCharacterID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtBattleSkillParamByCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLESKILLPARAMBYCHARACTERID_METHOD_3_7C25BD28B3A8E07F_OFFSET))(a1, a2);
		}
	};
}
