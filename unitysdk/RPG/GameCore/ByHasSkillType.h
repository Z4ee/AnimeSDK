#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASSKILLTYPE_METHOD_4_863D2864306790BB_OFFSET UNITYSDK_OFFSET(0x1954FF90)
#define RPG_GAMECORE_BYHASSKILLTYPE_METHOD_4_B78A542B0CBA36A4_OFFSET UNITYSDK_OFFSET(0x1954FEF0)
#define RPG_GAMECORE_BYHASSKILLTYPE_METHOD_4_C016AB906C6F264A_OFFSET UNITYSDK_OFFSET(0x1954FD20)
#define RPG_GAMECORE_BYHASSKILLTYPE_METHOD_4_EDA76B9D90772CAD_OFFSET UNITYSDK_OFFSET(0x1954FC00)
#define RPG_GAMECORE_BYHASSKILLTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1954FCA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasSkillType_TypeDefinitionIndex = 21776;

	class ByHasSkillType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::SkillType SkillType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSKILLTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EDA76B9D90772CAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasSkillType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasSkillType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSKILLTYPE_METHOD_4_EDA76B9D90772CAD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C016AB906C6F264A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasSkillType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSKILLTYPE_METHOD_4_C016AB906C6F264A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B78A542B0CBA36A4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSkillType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSkillType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSKILLTYPE_METHOD_4_B78A542B0CBA36A4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_863D2864306790BB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSkillType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSKILLTYPE_METHOD_4_863D2864306790BB_OFFSET))(a1, a2);
		}
	};
}
