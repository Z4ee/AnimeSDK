#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOGICANIMEVENTTIMELINETRACKGROUP_METHOD_2_AF32FB866E4AEDA0_OFFSET UNITYSDK_OFFSET(0x198AF360)
#define RPG_GAMECORE_LOGICANIMEVENTTIMELINETRACKGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x198AF3A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LogicAnimEventTimelineTrackGroup_TypeDefinitionIndex = 15484;

	class LogicAnimEventTimelineTrackGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOGICANIMEVENTTIMELINETRACKGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_AF32FB866E4AEDA0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LogicAnimEventTimelineTrackGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LogicAnimEventTimelineTrackGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOGICANIMEVENTTIMELINETRACKGROUP_METHOD_2_AF32FB866E4AEDA0_OFFSET))(a1, a2);
		}
	};
}
