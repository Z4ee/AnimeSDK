#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_36;
namespace RPG::GameCore { class DrinkMakerRequestRow; }

#define RPG_CLIENT_DRINKMAKERBARREQUEST_CREATE_OFFSET UNITYSDK_OFFSET(0xCCD6090)
#define RPG_CLIENT_DRINKMAKERBARREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0xCCD6160)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBarRequest_TypeDefinitionIndex = 63587;

	class DrinkMakerBarRequest : public ::System::Object
	{
	public:
		::RPG::GameCore::DrinkMakerRequestRow* Row; // 0x10
		::System::Boolean IsSuccess; // 0x18
		::System::UInt32 RequestID; // 0x1C
		::System::UInt32 GainTip; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARREQUEST__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DrinkMakerBarRequest* Create(::Class_1_21C7581DFE99F091_36* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::DrinkMakerBarRequest*(*)(::Class_1_21C7581DFE99F091_36*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARREQUEST_CREATE_OFFSET))(a1, a2);
		}
	};
}
