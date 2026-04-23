#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERADDITIVEANIMSTATE_METHOD_3_5B6C3639E9E970D3_OFFSET UNITYSDK_OFFSET(0x190BBE90)
#define RPG_GAMECORE_TRIGGERADDITIVEANIMSTATE_METHOD_3_76058CEF25BFD97B_OFFSET UNITYSDK_OFFSET(0x190BBFC0)
#define RPG_GAMECORE_TRIGGERADDITIVEANIMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x190BBED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerAdditiveAnimState_TypeDefinitionIndex = 21789;

	class TriggerAdditiveAnimState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Int32 LayerIndex; // 0x20
		::System::String* AnimStateName; // 0x28
		::RPG::GameCore::DynamicFloat* NormalizedTimeStart; // 0x30
		::RPG::GameCore::DynamicFloat* NormalizedTransitionDuration; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERADDITIVEANIMSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5B6C3639E9E970D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerAdditiveAnimState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerAdditiveAnimState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERADDITIVEANIMSTATE_METHOD_3_5B6C3639E9E970D3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_76058CEF25BFD97B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerAdditiveAnimState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerAdditiveAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERADDITIVEANIMSTATE_METHOD_3_76058CEF25BFD97B_OFFSET))(a1, a2);
		}
	};
}
