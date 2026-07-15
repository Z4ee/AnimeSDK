#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASSKILLTAG_METHOD_4_278586C0C4B38724_OFFSET UNITYSDK_OFFSET(0x1A8C9120)
#define RPG_GAMECORE_BYHASSKILLTAG_METHOD_4_8F9DDDBE1E7CE1DF_OFFSET UNITYSDK_OFFSET(0x1A8C91C0)
#define RPG_GAMECORE_BYHASSKILLTAG_METHOD_4_AA30717B47EB372B_OFFSET UNITYSDK_OFFSET(0x1A8C93A0)
#define RPG_GAMECORE_BYHASSKILLTAG_METHOD_4_EBB32D5F1DF7985A_OFFSET UNITYSDK_OFFSET(0x1A8C9400)
#define RPG_GAMECORE_BYHASSKILLTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8C9180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasSkillTag_TypeDefinitionIndex = 22203;

	class ByHasSkillTag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::JsonEnum* Tag; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSKILLTAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_278586C0C4B38724(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasSkillTag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasSkillTag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSKILLTAG_METHOD_4_278586C0C4B38724_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8F9DDDBE1E7CE1DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasSkillTag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasSkillTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSKILLTAG_METHOD_4_8F9DDDBE1E7CE1DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AA30717B47EB372B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSkillTag*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSkillTag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSKILLTAG_METHOD_4_AA30717B47EB372B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EBB32D5F1DF7985A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSkillTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSkillTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSKILLTAG_METHOD_4_EBB32D5F1DF7985A_OFFSET))(a1, a2);
		}
	};
}
