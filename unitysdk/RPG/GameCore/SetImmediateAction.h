#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETIMMEDIATEACTION_METHOD_3_4151398365890025_OFFSET UNITYSDK_OFFSET(0x19C521A0)
#define RPG_GAMECORE_SETIMMEDIATEACTION_METHOD_3_D856E43DA79D43B4_OFFSET UNITYSDK_OFFSET(0x19C52120)
#define RPG_GAMECORE_SETIMMEDIATEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19C52170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetImmediateAction_TypeDefinitionIndex = 21464;

	class SetImmediateAction : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIMMEDIATEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D856E43DA79D43B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetImmediateAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetImmediateAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIMMEDIATEACTION_METHOD_3_D856E43DA79D43B4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4151398365890025(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetImmediateAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetImmediateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIMMEDIATEACTION_METHOD_3_4151398365890025_OFFSET))(a1, a2);
		}
	};
}
