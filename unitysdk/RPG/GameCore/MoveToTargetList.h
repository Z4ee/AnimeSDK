#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AnimationMoveRange; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_MOVETOTARGETLIST_METHOD_3_513BE0D63C05C07A_OFFSET UNITYSDK_OFFSET(0x1B1D05C0)
#define RPG_GAMECORE_MOVETOTARGETLIST_METHOD_3_9F563A4666989320_OFFSET UNITYSDK_OFFSET(0x1B1D0300)
#define RPG_GAMECORE_MOVETOTARGETLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1D0470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MoveToTargetList_TypeDefinitionIndex = 21651;

	class MoveToTargetList : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AnimStateLogicType AnimLogicState; // 0x20
		::System::String* AnimStateName; // 0x28
		::RPG::GameCore::DynamicFloat* NormalizedTimeStart; // 0x30
		::RPG::GameCore::DynamicFloat* NormalizedTimeEnd; // 0x38
		::RPG::GameCore::DynamicFloat* NormalizedTransitionDuration; // 0x40
		::RPG::GameCore::DynamicFloat* NormalizedTimeWait; // 0x48
		::Il2CppArray<::RPG::GameCore::AnimationMoveRange*>* MovingRangeList; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVETOTARGETLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9F563A4666989320(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MoveToTargetList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MoveToTargetList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVETOTARGETLIST_METHOD_3_9F563A4666989320_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_513BE0D63C05C07A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MoveToTargetList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MoveToTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVETOTARGETLIST_METHOD_3_513BE0D63C05C07A_OFFSET))(a1, a2);
		}
	};
}
