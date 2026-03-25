#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TimeRewindCustomPathNodeType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_TIMEREWINDCUSTOMPATHNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xA5AE590)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindCustomPathNode_TypeDefinitionIndex = 51811;

	class TimeRewindCustomPathNode : public ::System::Object
	{
	public:
		::System::String* StateName; // 0x10
		::RPG::Client::TimeRewindCustomPathNodeType NodeType; // 0x18
		::System::Boolean EnableRedo; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCUSTOMPATHNODE__CTOR_OFFSET))(this);
		}
	};
}
