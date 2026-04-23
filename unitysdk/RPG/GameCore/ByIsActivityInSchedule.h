#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISACTIVITYINSCHEDULE_METHOD_4_B5873BCBBC977E26_OFFSET UNITYSDK_OFFSET(0x1874D800)
#define RPG_GAMECORE_BYISACTIVITYINSCHEDULE_METHOD_4_F6D63E59267DFFA4_OFFSET UNITYSDK_OFFSET(0x1874D8D0)
#define RPG_GAMECORE_BYISACTIVITYINSCHEDULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1874D880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsActivityInSchedule_TypeDefinitionIndex = 19942;

	class ByIsActivityInSchedule : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 ActivityPanelID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISACTIVITYINSCHEDULE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B5873BCBBC977E26(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsActivityInSchedule*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsActivityInSchedule*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISACTIVITYINSCHEDULE_METHOD_4_B5873BCBBC977E26_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F6D63E59267DFFA4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsActivityInSchedule* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsActivityInSchedule*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISACTIVITYINSCHEDULE_METHOD_4_F6D63E59267DFFA4_OFFSET))(a1, a2);
		}
	};
}
