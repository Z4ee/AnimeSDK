#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PhotoGraphIdentifyState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PHOTOGRAPHIDENTIFYSTATECHANGEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xAC6C880)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphIdentifyStateChangeParam_TypeDefinitionIndex = 63975;

	class PhotoGraphIdentifyStateChangeParam : public ::System::Object
	{
	public:
		::System::Int32 TipPriority; // 0x10
		::RPG::Client::PhotoGraphIdentifyState IdentifyState; // 0x14
		::RPG::Client::TextID CustomTip; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHIDENTIFYSTATECHANGEPARAM__CTOR_OFFSET))(this);
		}
	};
}
