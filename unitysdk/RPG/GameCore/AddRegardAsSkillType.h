#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADDREGARDASSKILLTYPE_METHOD_3_008167DC10171BE7_OFFSET UNITYSDK_OFFSET(0x1D6A4960)
#define RPG_GAMECORE_ADDREGARDASSKILLTYPE_METHOD_3_9EF3E80A4AF71696_OFFSET UNITYSDK_OFFSET(0x1D6A4920)
#define RPG_GAMECORE_ADDREGARDASSKILLTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A4950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddRegardAsSkillType_TypeDefinitionIndex = 23396;

	class AddRegardAsSkillType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::SkillType OriginalSkillType; // 0x20
		::RPG::GameCore::SkillType RegardSkillType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDREGARDASSKILLTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9EF3E80A4AF71696(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddRegardAsSkillType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddRegardAsSkillType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDREGARDASSKILLTYPE_METHOD_3_9EF3E80A4AF71696_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_008167DC10171BE7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddRegardAsSkillType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddRegardAsSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDREGARDASSKILLTYPE_METHOD_3_008167DC10171BE7_OFFSET))(a1, a2);
		}
	};
}
