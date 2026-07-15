#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MODIFYCOOLDOWN_METHOD_3_81E244CB03357C2C_OFFSET UNITYSDK_OFFSET(0x1B1A5140)
#define RPG_GAMECORE_MODIFYCOOLDOWN_METHOD_3_9D0365CDCBFEB991_OFFSET UNITYSDK_OFFSET(0x1B1A5100)
#define RPG_GAMECORE_MODIFYCOOLDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1A5130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyCoolDown_TypeDefinitionIndex = 21784;

	class ModifyCoolDown : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Int32 SkillIndex; // 0x20
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x24
		::System::Int32 ModifyValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYCOOLDOWN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9D0365CDCBFEB991(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyCoolDown*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyCoolDown*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYCOOLDOWN_METHOD_3_9D0365CDCBFEB991_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_81E244CB03357C2C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyCoolDown* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyCoolDown*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYCOOLDOWN_METHOD_3_81E244CB03357C2C_OFFSET))(a1, a2);
		}
	};
}
