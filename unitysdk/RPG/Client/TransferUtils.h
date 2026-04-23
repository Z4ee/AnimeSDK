#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_TRANSFERUTILS_TRANSFERCHECK_OFFSET UNITYSDK_OFFSET(0xB36C270)

namespace RPG::Client
{
	inline static constexpr unsigned int TransferUtils_TypeDefinitionIndex = 62858;

	class TransferUtils : public ::System::Object
	{
	public:
		static ::System::Void TransferCheck(::System::Action* callback, ::System::UInt32 storyLineID, ::System::UInt32 contentID, ::System::Boolean isToInOnlinePlayRoom)
		{
			return ((::System::Void(*)(::System::Action*, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERUTILS_TRANSFERCHECK_OFFSET))(callback, storyLineID, contentID, isToInOnlinePlayRoom);
		}
	};
}
