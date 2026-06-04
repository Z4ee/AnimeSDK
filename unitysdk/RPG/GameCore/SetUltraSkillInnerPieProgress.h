#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETULTRASKILLINNERPIEPROGRESS_METHOD_3_2D10EBDC37491616_OFFSET UNITYSDK_OFFSET(0x19C65FE0)
#define RPG_GAMECORE_SETULTRASKILLINNERPIEPROGRESS_METHOD_3_A8672192B956908A_OFFSET UNITYSDK_OFFSET(0x19C660B0)
#define RPG_GAMECORE_SETULTRASKILLINNERPIEPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x19C66060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetUltraSkillInnerPieProgress_TypeDefinitionIndex = 21887;

	class SetUltraSkillInnerPieProgress : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* CurrentCount; // 0x20
		::RPG::GameCore::DynamicFloat* MaxCount; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETULTRASKILLINNERPIEPROGRESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2D10EBDC37491616(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetUltraSkillInnerPieProgress*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetUltraSkillInnerPieProgress*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETULTRASKILLINNERPIEPROGRESS_METHOD_3_2D10EBDC37491616_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A8672192B956908A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetUltraSkillInnerPieProgress* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetUltraSkillInnerPieProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETULTRASKILLINNERPIEPROGRESS_METHOD_3_A8672192B956908A_OFFSET))(a1, a2);
		}
	};
}
