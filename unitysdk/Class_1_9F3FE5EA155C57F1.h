#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AlleyOrderData; }
namespace RPG::Client { class AlleySpecialOrderData; }

#define CLASS_1_9F3FE5EA155C57F1_METHOD_1_3D9D9265CBD52BAF_OFFSET UNITYSDK_OFFSET(0x16D8B5C0)
#define CLASS_1_9F3FE5EA155C57F1_METHOD_1_9BE815D0499DA929_OFFSET UNITYSDK_OFFSET(0x16D8B650)

inline static constexpr unsigned int Class_1_9F3FE5EA155C57F1_TypeDefinitionIndex = 59507;

class Class_1_9F3FE5EA155C57F1 : public ::System::Object
{
public:
	static ::RPG::Client::AlleyOrderData* Method_1_3D9D9265CBD52BAF(::System::UInt32 a1)
	{
		return ((::RPG::Client::AlleyOrderData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9F3FE5EA155C57F1_METHOD_1_3D9D9265CBD52BAF_OFFSET))(a1);
	}

	static ::RPG::Client::AlleySpecialOrderData* Method_1_9BE815D0499DA929(::System::UInt32 a1)
	{
		return ((::RPG::Client::AlleySpecialOrderData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9F3FE5EA155C57F1_METHOD_1_9BE815D0499DA929_OFFSET))(a1);
	}
};
