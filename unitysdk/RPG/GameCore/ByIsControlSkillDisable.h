#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISCONTROLSKILLDISABLE_METHOD_4_161D06C2680BB7B2_OFFSET UNITYSDK_OFFSET(0x1955E260)
#define RPG_GAMECORE_BYISCONTROLSKILLDISABLE_METHOD_4_4294C6B0F5A0E125_OFFSET UNITYSDK_OFFSET(0x1955E1C0)
#define RPG_GAMECORE_BYISCONTROLSKILLDISABLE_METHOD_4_631F97F6FAF0D41A_OFFSET UNITYSDK_OFFSET(0x1955DED0)
#define RPG_GAMECORE_BYISCONTROLSKILLDISABLE_METHOD_4_90228BB364D04029_OFFSET UNITYSDK_OFFSET(0x1955DFF0)
#define RPG_GAMECORE_BYISCONTROLSKILLDISABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1955DF70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsControlSkillDisable_TypeDefinitionIndex = 21764;

	class ByIsControlSkillDisable : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::ControlSkillType ControlSkillType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTROLSKILLDISABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_631F97F6FAF0D41A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsControlSkillDisable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsControlSkillDisable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTROLSKILLDISABLE_METHOD_4_631F97F6FAF0D41A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_90228BB364D04029(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsControlSkillDisable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsControlSkillDisable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTROLSKILLDISABLE_METHOD_4_90228BB364D04029_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4294C6B0F5A0E125(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsControlSkillDisable*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsControlSkillDisable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTROLSKILLDISABLE_METHOD_4_4294C6B0F5A0E125_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_161D06C2680BB7B2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsControlSkillDisable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsControlSkillDisable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTROLSKILLDISABLE_METHOD_4_161D06C2680BB7B2_OFFSET))(a1, a2);
		}
	};
}
