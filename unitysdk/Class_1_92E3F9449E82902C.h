#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DirectDeliveryNoticeToastConfig; }

#define CLASS_1_92E3F9449E82902C_METHOD_1_82BCC03B9F0230B7_OFFSET UNITYSDK_OFFSET(0xE464000)

inline static constexpr unsigned int Class_1_92E3F9449E82902C_TypeDefinitionIndex = 51627;

class Class_1_92E3F9449E82902C : public ::System::Object
{
public:
	static ::RPG::Client::DirectDeliveryNoticeToastConfig* Method_1_82BCC03B9F0230B7(::System::UInt32 a1)
	{
		return ((::RPG::Client::DirectDeliveryNoticeToastConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_92E3F9449E82902C_METHOD_1_82BCC03B9F0230B7_OFFSET))(a1);
	}
};
