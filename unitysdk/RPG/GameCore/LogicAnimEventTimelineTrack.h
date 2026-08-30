#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOGICANIMEVENTTIMELINETRACK_METHOD_2_6AB470FED6114195_OFFSET UNITYSDK_OFFSET(0x1D213420)
#define RPG_GAMECORE_LOGICANIMEVENTTIMELINETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D213460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LogicAnimEventTimelineTrack_TypeDefinitionIndex = 16123;

	class LogicAnimEventTimelineTrack : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOGICANIMEVENTTIMELINETRACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6AB470FED6114195(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LogicAnimEventTimelineTrack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LogicAnimEventTimelineTrack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOGICANIMEVENTTIMELINETRACK_METHOD_2_6AB470FED6114195_OFFSET))(a1, a2);
		}
	};
}
