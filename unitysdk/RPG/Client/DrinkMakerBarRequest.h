#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_34;
namespace RPG::GameCore { class DrinkMakerRequestRow; }

#define RPG_CLIENT_DRINKMAKERBARREQUEST_CREATE_OFFSET UNITYSDK_OFFSET(0x1B8E4120)
#define RPG_CLIENT_DRINKMAKERBARREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8E9330)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBarRequest_TypeDefinitionIndex = 63649;

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

		static ::RPG::Client::DrinkMakerBarRequest* Create(::Class_1_21C7581DFE99F091_34* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::DrinkMakerBarRequest*(*)(::Class_1_21C7581DFE99F091_34*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARREQUEST_CREATE_OFFSET))(a1, a2);
		}
	};
}
