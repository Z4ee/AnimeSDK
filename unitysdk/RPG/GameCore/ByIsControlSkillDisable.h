#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISCONTROLSKILLDISABLE_METHOD_4_3060DC98F6B883AF_OFFSET UNITYSDK_OFFSET(0x1CD99CC0)
#define RPG_GAMECORE_BYISCONTROLSKILLDISABLE_METHOD_4_414BF58EFE0D7A2C_OFFSET UNITYSDK_OFFSET(0x1CD999F0)
#define RPG_GAMECORE_BYISCONTROLSKILLDISABLE_METHOD_4_88A29348FB66A32A_OFFSET UNITYSDK_OFFSET(0x1CD99C60)
#define RPG_GAMECORE_BYISCONTROLSKILLDISABLE_METHOD_4_90228BB364D04029_OFFSET UNITYSDK_OFFSET(0x1CD99A90)
#define RPG_GAMECORE_BYISCONTROLSKILLDISABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD99A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsControlSkillDisable_TypeDefinitionIndex = 22759;

	class ByIsControlSkillDisable : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::ControlSkillType ControlSkillType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTROLSKILLDISABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_414BF58EFE0D7A2C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsControlSkillDisable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsControlSkillDisable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTROLSKILLDISABLE_METHOD_4_414BF58EFE0D7A2C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_90228BB364D04029(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsControlSkillDisable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsControlSkillDisable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTROLSKILLDISABLE_METHOD_4_90228BB364D04029_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_88A29348FB66A32A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsControlSkillDisable*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsControlSkillDisable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTROLSKILLDISABLE_METHOD_4_88A29348FB66A32A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3060DC98F6B883AF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsControlSkillDisable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsControlSkillDisable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTROLSKILLDISABLE_METHOD_4_3060DC98F6B883AF_OFFSET))(a1, a2);
		}
	};
}
