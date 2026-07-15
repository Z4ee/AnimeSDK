#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PhotoGraphIdentifyState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PHOTOGRAPHIDENTIFYSTATECHANGEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x17F57290)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphIdentifyStateChangeParam_TypeDefinitionIndex = 66298;

	class PhotoGraphIdentifyStateChangeParam : public ::System::Object
	{
	public:
		::RPG::Client::TextID CustomTip; // 0x10
		::System::Int32 TipPriority; // 0x20
		::RPG::Client::PhotoGraphIdentifyState IdentifyState; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHIDENTIFYSTATECHANGEPARAM__CTOR_OFFSET))(this);
		}
	};
}
