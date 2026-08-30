#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DirectDeliveryNoticeToastConfig; }

#define CLASS_1_AF4E8D80303C6E57_METHOD_1_361C4137281743A7_OFFSET UNITYSDK_OFFSET(0x18DEE560)

inline static constexpr unsigned int Class_1_AF4E8D80303C6E57_TypeDefinitionIndex = 63642;

class Class_1_AF4E8D80303C6E57 : public ::System::Object
{
public:
	static ::RPG::Client::DirectDeliveryNoticeToastConfig* Method_1_361C4137281743A7(::System::UInt32 a1)
	{
		return ((::RPG::Client::DirectDeliveryNoticeToastConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AF4E8D80303C6E57_METHOD_1_361C4137281743A7_OFFSET))(a1);
	}
};
