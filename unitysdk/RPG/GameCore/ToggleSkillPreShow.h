#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/SkillUIPreShowType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TOGGLESKILLPRESHOW_METHOD_3_A00ABE02AA907430_OFFSET UNITYSDK_OFFSET(0x1788AD20)
#define RPG_GAMECORE_TOGGLESKILLPRESHOW_METHOD_3_EB845428B4FD048B_OFFSET UNITYSDK_OFFSET(0x178A2540)
#define RPG_GAMECORE_TOGGLESKILLPRESHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1788ACF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ToggleSkillPreShow_TypeDefinitionIndex = 21935;

	class ToggleSkillPreShow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::Il2CppArray<::RPG::GameCore::SkillType>* AllowSkillType; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::RPG::GameCore::DynamicFloat* ChangeValue; // 0x30
		::RPG::GameCore::SkillUIPreShowType PreShowType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLESKILLPRESHOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EB845428B4FD048B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ToggleSkillPreShow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToggleSkillPreShow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLESKILLPRESHOW_METHOD_3_EB845428B4FD048B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A00ABE02AA907430(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ToggleSkillPreShow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToggleSkillPreShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLESKILLPRESHOW_METHOD_3_A00ABE02AA907430_OFFSET))(a1, a2);
		}
	};
}
