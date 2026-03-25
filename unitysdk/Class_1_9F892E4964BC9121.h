#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityElationAvatarData; }

#define CLASS_1_9F892E4964BC9121_METHOD_1_12E6382168FB3F60_OFFSET UNITYSDK_OFFSET(0x116606E0)
#define CLASS_1_9F892E4964BC9121_METHOD_1_224E25FC30CD7C07_OFFSET UNITYSDK_OFFSET(0x11660750)
#define CLASS_1_9F892E4964BC9121_METHOD_1_2E24DB09E58C849E_OFFSET UNITYSDK_OFFSET(0x11660940)
#define CLASS_1_9F892E4964BC9121_METHOD_1_7B9CA857F85C788E_OFFSET UNITYSDK_OFFSET(0x116608B0)

inline static constexpr unsigned int Class_1_9F892E4964BC9121_TypeDefinitionIndex = 49908;

class Class_1_9F892E4964BC9121 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x3; // 0x0

	static ::System::Int32 Method_1_12E6382168FB3F60(::System::Boolean a1, ::System::UInt32 a2)
	{
		return ((::System::Int32(*)(::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9F892E4964BC9121_METHOD_1_12E6382168FB3F60_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_224E25FC30CD7C07(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9F892E4964BC9121_METHOD_1_224E25FC30CD7C07_OFFSET))(a1);
	}

	static ::RPG::Client::ActivityElationAvatarData* Method_1_7B9CA857F85C788E(::System::UInt32 a1)
	{
		return ((::RPG::Client::ActivityElationAvatarData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9F892E4964BC9121_METHOD_1_7B9CA857F85C788E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_2E24DB09E58C849E(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9F892E4964BC9121_METHOD_1_2E24DB09E58C849E_OFFSET))(a1);
	}
};
