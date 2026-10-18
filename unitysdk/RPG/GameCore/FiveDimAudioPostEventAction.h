#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMAUDIOPOSTEVENTACTION_METHOD_4_3966C3065FF325D1_OFFSET UNITYSDK_OFFSET(0x1D681E00)
#define RPG_GAMECORE_FIVEDIMAUDIOPOSTEVENTACTION_METHOD_4_6C892C5AEBE35354_OFFSET UNITYSDK_OFFSET(0x1D681E40)
#define RPG_GAMECORE_FIVEDIMAUDIOPOSTEVENTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D681E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAudioPostEventAction_TypeDefinitionIndex = 18718;

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

		static ::System::Void Method_4_3966C3065FF325D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAudioPostEventAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAudioPostEventAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAUDIOPOSTEVENTACTION_METHOD_4_3966C3065FF325D1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6C892C5AEBE35354(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAudioPostEventAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAudioPostEventAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAUDIOPOSTEVENTACTION_METHOD_4_6C892C5AEBE35354_OFFSET))(a1, a2);
		}
	};
}
