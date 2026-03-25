#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CLEARREGARDASSKILLTYPE_METHOD_3_27A4522EA1559D01_OFFSET UNITYSDK_OFFSET(0x170B3370)
#define RPG_GAMECORE_CLEARREGARDASSKILLTYPE_METHOD_3_E0178B6D0EBA6C6D_OFFSET UNITYSDK_OFFSET(0x170B32F0)
#define RPG_GAMECORE_CLEARREGARDASSKILLTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x170B3340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearRegardAsSkillType_TypeDefinitionIndex = 21919;

	class ClearRegardAsSkillType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::SkillType OriginalSkillType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARREGARDASSKILLTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E0178B6D0EBA6C6D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearRegardAsSkillType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearRegardAsSkillType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARREGARDASSKILLTYPE_METHOD_3_E0178B6D0EBA6C6D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_27A4522EA1559D01(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearRegardAsSkillType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearRegardAsSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARREGARDASSKILLTYPE_METHOD_3_27A4522EA1559D01_OFFSET))(a1, a2);
		}
	};
}
