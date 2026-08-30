#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMAUDIOSETSTATEACTION_METHOD_3_0949D313F9E5217D_OFFSET UNITYSDK_OFFSET(0x1D0A1A90)
#define RPG_GAMECORE_FIVEDIMAUDIOSETSTATEACTION_METHOD_3_850906A3FFBAFA7A_OFFSET UNITYSDK_OFFSET(0x1D0A1A50)
#define RPG_GAMECORE_FIVEDIMAUDIOSETSTATEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A1A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAudioSetStateAction_TypeDefinitionIndex = 18510;

	class FiveDimAudioSetStateAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* StateGroup; // 0x10
		::System::String* State; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAUDIOSETSTATEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_850906A3FFBAFA7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAudioSetStateAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAudioSetStateAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAUDIOSETSTATEACTION_METHOD_3_850906A3FFBAFA7A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0949D313F9E5217D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAudioSetStateAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAudioSetStateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAUDIOSETSTATEACTION_METHOD_3_0949D313F9E5217D_OFFSET))(a1, a2);
		}
	};
}
