#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_WAITPROPANIMSTATE_METHOD_3_80465FCE267AFBA7_OFFSET UNITYSDK_OFFSET(0x179007D0)
#define RPG_GAMECORE_WAITPROPANIMSTATE_METHOD_3_C2F768EDFE0A2FA5_OFFSET UNITYSDK_OFFSET(0x17900850)
#define RPG_GAMECORE_WAITPROPANIMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17900820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPropAnimState_TypeDefinitionIndex = 19003;

	class WaitPropAnimState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* AnimState; // 0x20
		::RPG::GameCore::DynamicFloat* NormalizedTime; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ForwardCallback; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* BackwardCallback; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPANIMSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_80465FCE267AFBA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPropAnimState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPropAnimState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPANIMSTATE_METHOD_3_80465FCE267AFBA7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C2F768EDFE0A2FA5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPropAnimState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPropAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPANIMSTATE_METHOD_3_C2F768EDFE0A2FA5_OFFSET))(a1, a2);
		}
	};
}
