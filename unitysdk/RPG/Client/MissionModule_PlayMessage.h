#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MISSIONMODULE_PLAYMESSAGE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1522D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionModule_PlayMessage_TypeDefinitionIndex = 66185;

	struct alignas(8) MissionModule_PlayMessage
	{
		::System::Collections::Generic::List_1<::System::UInt32>* MessageSectionList; // 0x10

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_PLAYMESSAGE_CLEAR_OFFSET))(this);
		}
	};
}
