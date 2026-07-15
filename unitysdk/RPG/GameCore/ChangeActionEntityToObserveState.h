#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHANGEACTIONENTITYTOOBSERVESTATE_METHOD_3_46587AD3AC4429D7_OFFSET UNITYSDK_OFFSET(0x1B716FD0)
#define RPG_GAMECORE_CHANGEACTIONENTITYTOOBSERVESTATE_METHOD_3_BC24A27B696C4540_OFFSET UNITYSDK_OFFSET(0x1B716F80)
#define RPG_GAMECORE_CHANGEACTIONENTITYTOOBSERVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B716FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeActionEntityToObserveState_TypeDefinitionIndex = 22610;

	class ChangeActionEntityToObserveState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* StateName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEACTIONENTITYTOOBSERVESTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BC24A27B696C4540(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeActionEntityToObserveState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeActionEntityToObserveState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEACTIONENTITYTOOBSERVESTATE_METHOD_3_BC24A27B696C4540_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_46587AD3AC4429D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeActionEntityToObserveState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeActionEntityToObserveState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEACTIONENTITYTOOBSERVESTATE_METHOD_3_46587AD3AC4429D7_OFFSET))(a1, a2);
		}
	};
}
