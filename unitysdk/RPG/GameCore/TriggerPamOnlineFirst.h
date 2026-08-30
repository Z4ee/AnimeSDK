#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERPAMONLINEFIRST_METHOD_3_2B54955ABC203EEE_OFFSET UNITYSDK_OFFSET(0x1D292230)
#define RPG_GAMECORE_TRIGGERPAMONLINEFIRST_METHOD_3_A5001001DC08996B_OFFSET UNITYSDK_OFFSET(0x1D292160)
#define RPG_GAMECORE_TRIGGERPAMONLINEFIRST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D292220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerPamOnlineFirst_TypeDefinitionIndex = 19792;

	class TriggerPamOnlineFirst : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMONLINEFIRST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A5001001DC08996B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerPamOnlineFirst*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerPamOnlineFirst*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMONLINEFIRST_METHOD_3_A5001001DC08996B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2B54955ABC203EEE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerPamOnlineFirst* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerPamOnlineFirst*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMONLINEFIRST_METHOD_3_2B54955ABC203EEE_OFFSET))(a1, a2);
		}
	};
}
