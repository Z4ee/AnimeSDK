#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMAUDIOPOSTEVENTACTION_METHOD_3_21244081DC4664B7_OFFSET UNITYSDK_OFFSET(0x1E0E1EA0)
#define RPG_GAMECORE_FIVEDIMAUDIOPOSTEVENTACTION_METHOD_3_EE94E50636A88F16_OFFSET UNITYSDK_OFFSET(0x1E0E1E60)
#define RPG_GAMECORE_FIVEDIMAUDIOPOSTEVENTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E1E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAudioPostEventAction_TypeDefinitionIndex = 18508;

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

		static ::System::Void Method_3_EE94E50636A88F16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAudioPostEventAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAudioPostEventAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAUDIOPOSTEVENTACTION_METHOD_3_EE94E50636A88F16_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_21244081DC4664B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAudioPostEventAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAudioPostEventAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAUDIOPOSTEVENTACTION_METHOD_3_21244081DC4664B7_OFFSET))(a1, a2);
		}
	};
}
