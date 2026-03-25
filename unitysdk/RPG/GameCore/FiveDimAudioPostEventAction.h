#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMAUDIOPOSTEVENTACTION_METHOD_3_21244081DC4664B7_OFFSET UNITYSDK_OFFSET(0x171DE170)
#define RPG_GAMECORE_FIVEDIMAUDIOPOSTEVENTACTION_METHOD_3_E859BA6BF51BF0EE_OFFSET UNITYSDK_OFFSET(0x171DE100)
#define RPG_GAMECORE_FIVEDIMAUDIOPOSTEVENTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x171DE150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAudioPostEventAction_TypeDefinitionIndex = 17180;

	class FiveDimAudioPostEventAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IgnoreInitEvent; // 0x10
		::System::Boolean IsGlobal; // 0x11
		::System::String* EventName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAUDIOPOSTEVENTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E859BA6BF51BF0EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAudioPostEventAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAudioPostEventAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAUDIOPOSTEVENTACTION_METHOD_3_E859BA6BF51BF0EE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_21244081DC4664B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAudioPostEventAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAudioPostEventAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAUDIOPOSTEVENTACTION_METHOD_3_21244081DC4664B7_OFFSET))(a1, a2);
		}
	};
}
