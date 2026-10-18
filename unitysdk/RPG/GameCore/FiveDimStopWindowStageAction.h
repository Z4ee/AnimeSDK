#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSTOPWINDOWSTAGEACTION_METHOD_4_3913A967171A03CE_OFFSET UNITYSDK_OFFSET(0x1D6DF310)
#define RPG_GAMECORE_FIVEDIMSTOPWINDOWSTAGEACTION_METHOD_4_52F47A2A9B750FFF_OFFSET UNITYSDK_OFFSET(0x1D6DF390)
#define RPG_GAMECORE_FIVEDIMSTOPWINDOWSTAGEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DF380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStopWindowStageAction_TypeDefinitionIndex = 18723;

	class FiveDimStopWindowStageAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPWINDOWSTAGEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3913A967171A03CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStopWindowStageAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStopWindowStageAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPWINDOWSTAGEACTION_METHOD_4_3913A967171A03CE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_52F47A2A9B750FFF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStopWindowStageAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStopWindowStageAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPWINDOWSTAGEACTION_METHOD_4_52F47A2A9B750FFF_OFFSET))(a1, a2);
		}
	};
}
