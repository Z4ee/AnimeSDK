#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYHASSKILLTAG_METHOD_4_06F82458C8E55C56_OFFSET UNITYSDK_OFFSET(0x170249E0)
#define RPG_GAMECORE_BYHASSKILLTAG_METHOD_4_8F9DDDBE1E7CE1DF_OFFSET UNITYSDK_OFFSET(0x17024B00)
#define RPG_GAMECORE_BYHASSKILLTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x17024A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasSkillTag_TypeDefinitionIndex = 21237;

	class ByHasSkillTag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::JsonEnum* Tag; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSKILLTAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_06F82458C8E55C56(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasSkillTag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasSkillTag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSKILLTAG_METHOD_4_06F82458C8E55C56_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8F9DDDBE1E7CE1DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasSkillTag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasSkillTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSKILLTAG_METHOD_4_8F9DDDBE1E7CE1DF_OFFSET))(a1, a2);
		}
	};
}
