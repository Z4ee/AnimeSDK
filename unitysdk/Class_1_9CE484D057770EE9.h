#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenWorkData; }

#define CLASS_1_9CE484D057770EE9_METHOD_1_1FA9DAC68CA7B4B9_OFFSET UNITYSDK_OFFSET(0x1673D780)

inline static constexpr unsigned int Class_1_9CE484D057770EE9_TypeDefinitionIndex = 72003;

class Class_1_9CE484D057770EE9 : public ::System::Object
{
public:
	static ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* Method_1_1FA9DAC68CA7B4B9(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*(*)(::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CE484D057770EE9_METHOD_1_1FA9DAC68CA7B4B9_OFFSET))(a1, a2, a3, a4, a5);
	}
};
