#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_197CC3E8889A3449;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_TIMELINECONTROLGAMEWORLDLEVELGRID__CTOR_OFFSET UNITYSDK_OFFSET(0x1C594570)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int TimelineControlGameWorldLevelGrid_TypeDefinitionIndex = 40351;

	class TimelineControlGameWorldLevelGrid : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_2_197CC3E8889A3449*>* Actors; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_TIMELINECONTROLGAMEWORLDLEVELGRID__CTOR_OFFSET))(this);
		}
	};
}
