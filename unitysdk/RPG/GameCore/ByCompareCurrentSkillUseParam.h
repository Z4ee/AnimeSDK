#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECURRENTSKILLUSEPARAM_METHOD_4_0519072CE1116C19_OFFSET UNITYSDK_OFFSET(0x19CDADB0)
#define RPG_GAMECORE_BYCOMPARECURRENTSKILLUSEPARAM_METHOD_4_40583F1EBFA0A5A6_OFFSET UNITYSDK_OFFSET(0x19CDAD80)
#define RPG_GAMECORE_BYCOMPARECURRENTSKILLUSEPARAM_METHOD_4_4A5FC7350B47F9C0_OFFSET UNITYSDK_OFFSET(0x19CDAB50)
#define RPG_GAMECORE_BYCOMPARECURRENTSKILLUSEPARAM_METHOD_4_E10A1F890BC682ED_OFFSET UNITYSDK_OFFSET(0x19CDAB90)
#define RPG_GAMECORE_BYCOMPARECURRENTSKILLUSEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x19CDAB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareCurrentSkillUseParam_TypeDefinitionIndex = 21741;

	class ByCompareCurrentSkillUseParam : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTSKILLUSEPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4A5FC7350B47F9C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCurrentSkillUseParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCurrentSkillUseParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTSKILLUSEPARAM_METHOD_4_4A5FC7350B47F9C0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E10A1F890BC682ED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCurrentSkillUseParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCurrentSkillUseParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTSKILLUSEPARAM_METHOD_4_E10A1F890BC682ED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_40583F1EBFA0A5A6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentSkillUseParam*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentSkillUseParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTSKILLUSEPARAM_METHOD_4_40583F1EBFA0A5A6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0519072CE1116C19(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentSkillUseParam* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentSkillUseParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTSKILLUSEPARAM_METHOD_4_0519072CE1116C19_OFFSET))(a1, a2);
		}
	};
}
