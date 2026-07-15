#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETIMMEDIATEACTION_METHOD_3_1C03A23E84D32AE6_OFFSET UNITYSDK_OFFSET(0x1C5FD0A0)
#define RPG_GAMECORE_SETIMMEDIATEACTION_METHOD_3_4151398365890025_OFFSET UNITYSDK_OFFSET(0x1C5FD0E0)
#define RPG_GAMECORE_SETIMMEDIATEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FD0D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetImmediateAction_TypeDefinitionIndex = 21884;

	class SetImmediateAction : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIMMEDIATEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1C03A23E84D32AE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetImmediateAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetImmediateAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIMMEDIATEACTION_METHOD_3_1C03A23E84D32AE6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4151398365890025(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetImmediateAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetImmediateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIMMEDIATEACTION_METHOD_3_4151398365890025_OFFSET))(a1, a2);
		}
	};
}
