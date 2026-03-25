#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_26;
namespace RPG::GameCore { class DrinkMakerRequestRow; }

#define RPG_CLIENT_DRINKMAKERBARREQUEST_CREATE_OFFSET UNITYSDK_OFFSET(0x94A7F20)
#define RPG_CLIENT_DRINKMAKERBARREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x94AC860)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBarRequest_TypeDefinitionIndex = 51634;

	class DrinkMakerBarRequest : public ::System::Object
	{
	public:
		::RPG::GameCore::DrinkMakerRequestRow* Row; // 0x10
		::System::UInt32 RequestID; // 0x18
		::System::UInt32 GainTip; // 0x1C
		::System::Boolean IsSuccess; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARREQUEST__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DrinkMakerBarRequest* Create(::Class_1_4CF8088A158DCE25_26* data, ::System::UInt32 actualGainTip)
		{
			return ((::RPG::Client::DrinkMakerBarRequest*(*)(::Class_1_4CF8088A158DCE25_26*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARREQUEST_CREATE_OFFSET))(data, actualGainTip);
		}
	};
}
