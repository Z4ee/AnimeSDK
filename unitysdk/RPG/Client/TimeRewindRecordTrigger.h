#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_TIMEREWINDRECORDTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xE200F00)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindRecordTrigger_TypeDefinitionIndex = 68828;

	class TimeRewindRecordTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDRECORDTRIGGER__CTOR_OFFSET))(this);
		}
	};
}
