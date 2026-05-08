#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Code/Logic/Data/ScriptObject/Level/MoveType.h"
#include "unitysdk/System/Object.h"

namespace Code::Logic::Data::ScriptObject::Level { class MoveCoordinate; }
namespace System { class String; }

#define CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_PATTERNTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x107ACC20)

namespace Code::Logic::Data::ScriptObject::Level
{
	inline static constexpr unsigned int PatternTimeline_TypeDefinitionIndex = 70640;

	class PatternTimeline : public ::System::Object
	{
	public:
		::System::Int32 instanceId; // 0x10
		::System::String* patternRefName; // 0x18
		::Il2CppArray<::System::Int32>* dependOnList; // 0x20
		::System::Single startTime; // 0x28
		::System::Boolean hasEndTime; // 0x2C
		::System::Single endTime; // 0x30
		::System::Int32 layerOrder; // 0x34
		::System::Int32 coordinateX; // 0x38
		::System::Int32 coordinateY; // 0x3C
		::Code::Logic::Data::ScriptObject::Level::MoveType moveType; // 0x40
		::System::Single moveTime; // 0x44
		::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::MoveCoordinate*>* moveCoordinateList; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_PATTERNTIMELINE__CTOR_OFFSET))(this);
		}
	};
}
