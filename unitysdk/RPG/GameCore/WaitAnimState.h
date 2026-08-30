#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_WAITANIMSTATE_METHOD_3_41CF56D5635BB8FE_OFFSET UNITYSDK_OFFSET(0x1DEB3770)
#define RPG_GAMECORE_WAITANIMSTATE_METHOD_3_CF43FB2AE5BA5005_OFFSET UNITYSDK_OFFSET(0x1DEB3850)
#define RPG_GAMECORE_WAITANIMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB37F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitAnimState_TypeDefinitionIndex = 22619;

	class WaitAnimState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* AnimStateName; // 0x20
		::RPG::GameCore::DynamicFloat* NormalizedTimeEnd; // 0x28
		::System::Boolean SkipWhenStateChange; // 0x30
		::System::Boolean IgnoreStateChangeCheck; // 0x31
		::System::Boolean WaitForFrameEnd; // 0x32
		::System::Boolean SyncVCameraTime; // 0x33

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANIMSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_41CF56D5635BB8FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitAnimState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitAnimState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANIMSTATE_METHOD_3_41CF56D5635BB8FE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CF43FB2AE5BA5005(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitAnimState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANIMSTATE_METHOD_3_CF43FB2AE5BA5005_OFFSET))(a1, a2);
		}
	};
}
