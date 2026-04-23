#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElementLayer.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_MUSICVISUALIZATION_CUEEVENT_CUEEVENTNAMELOOKUP__CTOR_1_OFFSET UNITYSDK_OFFSET(0xAB2E640)
#define RPG_CLIENT_MUSICVISUALIZATION_CUEEVENT_CUEEVENTNAMELOOKUP__CTOR_OFFSET UNITYSDK_OFFSET(0xAB2E650)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicVisualization_CueEvent_CueEventNameLookUp_TypeDefinitionIndex = 65294;

	class MusicVisualization_CueEvent_CueEventNameLookUp : public ::System::Object
	{
	public:
		::System::String* CueEventName; // 0x10
		::System::Int32 Value0; // 0x18
		::RPG::Client::ElementLayer ElementLayers; // 0x1C
		::System::Boolean SetState; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_CUEEVENT_CUEEVENTNAMELOOKUP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Int32 a2, ::RPG::Client::ElementLayer a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::RPG::Client::ElementLayer))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_CUEEVENT_CUEEVENTNAMELOOKUP__CTOR_1_OFFSET))(this, a1, a2, a3);
		}
	};
}
