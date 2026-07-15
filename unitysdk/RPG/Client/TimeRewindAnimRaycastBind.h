#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AnimRayCastBindType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_TIMEREWINDANIMRAYCASTBIND__CTOR_OFFSET UNITYSDK_OFFSET(0x19495440)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindAnimRaycastBind_TypeDefinitionIndex = 58117;

	class TimeRewindAnimRaycastBind : public ::System::Object
	{
	public:
		::RPG::Client::AnimRayCastBindType Type; // 0x10
		::System::String* AnimName; // 0x18
		::System::Single NormalizedStart; // 0x20
		::System::Single NormalizedEnd; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDANIMRAYCASTBIND__CTOR_OFFSET))(this);
		}
	};
}
