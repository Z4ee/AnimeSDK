#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_54AE1C44DE8123D2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_TIMELINECONTROLGAMEWORLDLEVELGRID__CTOR_OFFSET UNITYSDK_OFFSET(0x16850F30)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int TimelineControlGameWorldLevelGrid_TypeDefinitionIndex = 32984;

	class TimelineControlGameWorldLevelGrid : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_2_54AE1C44DE8123D2*>* Actors; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_TIMELINECONTROLGAMEWORLDLEVELGRID__CTOR_OFFSET))(this);
		}
	};
}
