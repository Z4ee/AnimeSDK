#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TimeRewindCapsuleDirection.h"
#include "unitysdk/RPG/Client/TimeRewindRaycastType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPG_CLIENT_TIMEREWINDRAYCASTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1787FE30)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindRaycastInfo_TypeDefinitionIndex = 58115;

	class TimeRewindRaycastInfo : public ::System::Object
	{
	public:
		::RPG::Client::TimeRewindRaycastType RaycastType; // 0x10
		::System::String* AttachPointName; // 0x18
		::UnityEngine::Vector3 Center; // 0x20
		::System::Single Radius; // 0x2C
		::UnityEngine::Vector3 Size; // 0x30
		::System::Single Height; // 0x3C
		::RPG::Client::TimeRewindCapsuleDirection Direction; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDRAYCASTINFO__CTOR_OFFSET))(this);
		}
	};
}
