#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSETANIMPARAMEVENTACTION_METHOD_3_8BA344D15FC920A9_OFFSET UNITYSDK_OFFSET(0x1D877AD0)
#define RPG_GAMECORE_FIVEDIMSETANIMPARAMEVENTACTION_METHOD_3_A0349A2EE6FA9B10_OFFSET UNITYSDK_OFFSET(0x1D877B10)
#define RPG_GAMECORE_FIVEDIMSETANIMPARAMEVENTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D877B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetAnimParamEventAction_TypeDefinitionIndex = 18436;

	class FiveDimSetAnimParamEventAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean SyncToEffects; // 0x10
		::System::String* ParameterName; // 0x18
		::RPG::GameCore::AnimatorParameterType ParameterType; // 0x20
		::System::Boolean BoolValue; // 0x24
		::System::Single FloatValue; // 0x28
		::System::Int32 IntValue; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMPARAMEVENTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8BA344D15FC920A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetAnimParamEventAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetAnimParamEventAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMPARAMEVENTACTION_METHOD_3_8BA344D15FC920A9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A0349A2EE6FA9B10(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetAnimParamEventAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetAnimParamEventAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMPARAMEVENTACTION_METHOD_3_A0349A2EE6FA9B10_OFFSET))(a1, a2);
		}
	};
}
