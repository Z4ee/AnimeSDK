#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Code::Logic::Data::ScriptObject::Level { class Layer; }
namespace Code::Logic::Data::ScriptObject::Level { class PatternTimeline; }

#define CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_BEATMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x13CD7470)

namespace Code::Logic::Data::ScriptObject::Level
{
	inline static constexpr unsigned int BeatMap_TypeDefinitionIndex = 81814;

	class BeatMap : public ::System::Object
	{
	public:
		::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::Layer*>* layerList; // 0x10
		::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::PatternTimeline*>* patternTimelineList; // 0x18
		::System::Single endTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_BEATMAP__CTOR_OFFSET))(this);
		}
	};
}
