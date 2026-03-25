#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_MUSICRHYTHMNOTIFYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9DD3C00)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmNotifyInfo_TypeDefinitionIndex = 48752;

	class MusicRhythmNotifyInfo : public ::System::Object
	{
	public:
		::System::Single Duration; // 0x10
		::System::Int32 Count; // 0x14
		::UnityEngine::Vector3 ScreenPos; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMNOTIFYINFO__CTOR_OFFSET))(this);
		}
	};
}
