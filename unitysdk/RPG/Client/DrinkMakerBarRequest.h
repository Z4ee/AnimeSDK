#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_27;
namespace RPG::GameCore { class DrinkMakerRequestRow; }

#define RPG_CLIENT_DRINKMAKERBARREQUEST_CREATE_OFFSET UNITYSDK_OFFSET(0xA17A9F0)
#define RPG_CLIENT_DRINKMAKERBARREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0xA17F380)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBarRequest_TypeDefinitionIndex = 58582;

	class DrinkMakerBarRequest : public ::System::Object
	{
	public:
		::RPG::GameCore::DrinkMakerRequestRow* Row; // 0x10
		::System::UInt32 GainTip; // 0x18
		::System::UInt32 RequestID; // 0x1C
		::System::Boolean IsSuccess; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARREQUEST__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DrinkMakerBarRequest* Create(::Class_1_21C7581DFE99F091_27* data, ::System::UInt32 actualGainTip)
		{
			return ((::RPG::Client::DrinkMakerBarRequest*(*)(::Class_1_21C7581DFE99F091_27*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARREQUEST_CREATE_OFFSET))(data, actualGainTip);
		}
	};
}
