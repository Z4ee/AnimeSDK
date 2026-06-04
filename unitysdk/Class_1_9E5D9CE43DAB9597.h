#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DirectDeliveryNoticeToastConfig; }

#define CLASS_1_9E5D9CE43DAB9597_METHOD_1_EBDF4EDA3529A5E0_OFFSET UNITYSDK_OFFSET(0x13C85430)

inline static constexpr unsigned int Class_1_9E5D9CE43DAB9597_TypeDefinitionIndex = 59505;

class Class_1_9E5D9CE43DAB9597 : public ::System::Object
{
public:
	static ::RPG::Client::DirectDeliveryNoticeToastConfig* Method_1_EBDF4EDA3529A5E0(::System::UInt32 a1)
	{
		return ((::RPG::Client::DirectDeliveryNoticeToastConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9E5D9CE43DAB9597_METHOD_1_EBDF4EDA3529A5E0_OFFSET))(a1);
	}
};
