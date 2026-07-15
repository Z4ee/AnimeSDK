#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASSKILLTYPE_METHOD_4_0B13F8C95833161B_OFFSET UNITYSDK_OFFSET(0x1A8C98F0)
#define RPG_GAMECORE_BYHASSKILLTYPE_METHOD_4_85889E9738F6162B_OFFSET UNITYSDK_OFFSET(0x1A8C9B60)
#define RPG_GAMECORE_BYHASSKILLTYPE_METHOD_4_C016AB906C6F264A_OFFSET UNITYSDK_OFFSET(0x1A8C9990)
#define RPG_GAMECORE_BYHASSKILLTYPE_METHOD_4_C70B5A7B0F02775A_OFFSET UNITYSDK_OFFSET(0x1A8C9BC0)
#define RPG_GAMECORE_BYHASSKILLTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8C9950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasSkillType_TypeDefinitionIndex = 22202;

	class ByHasSkillType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::SkillType SkillType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSKILLTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0B13F8C95833161B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasSkillType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasSkillType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSKILLTYPE_METHOD_4_0B13F8C95833161B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C016AB906C6F264A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasSkillType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSKILLTYPE_METHOD_4_C016AB906C6F264A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_85889E9738F6162B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSkillType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSkillType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSKILLTYPE_METHOD_4_85889E9738F6162B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C70B5A7B0F02775A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSkillType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSKILLTYPE_METHOD_4_C70B5A7B0F02775A_OFFSET))(a1, a2);
		}
	};
}
