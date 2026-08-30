#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapDataKey; }

#define CLASS_1_C22334175E07070F_METHOD_1_96D9428150C4A40C_OFFSET UNITYSDK_OFFSET(0x1810C7F0)
#define CLASS_1_C22334175E07070F_METHOD_1_C37E6B60D4672ECB_OFFSET UNITYSDK_OFFSET(0x1810CA90)
#define CLASS_1_C22334175E07070F_METHOD_1_FB748AC62E94685C_OFFSET UNITYSDK_OFFSET(0x1810C780)

inline static constexpr unsigned int Class_1_C22334175E07070F_TypeDefinitionIndex = 63004;

class Class_1_C22334175E07070F : public ::System::Object
{
public:
	static ::System::Boolean Method_1_FB748AC62E94685C(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C22334175E07070F_METHOD_1_FB748AC62E94685C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C37E6B60D4672ECB(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C22334175E07070F_METHOD_1_C37E6B60D4672ECB_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_96D9428150C4A40C(::RPG::Client::MapDataKey* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::MapDataKey*))((::PBYTE)hIl2Cpp + CLASS_1_C22334175E07070F_METHOD_1_96D9428150C4A40C_OFFSET))(a1);
	}
};
