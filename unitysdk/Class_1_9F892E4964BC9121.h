#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityElationAvatarData; }

#define CLASS_1_9F892E4964BC9121_METHOD_1_12E6382168FB3F60_OFFSET UNITYSDK_OFFSET(0x19A993C0)
#define CLASS_1_9F892E4964BC9121_METHOD_1_6F40E839310294F4_OFFSET UNITYSDK_OFFSET(0x19A995D0)
#define CLASS_1_9F892E4964BC9121_METHOD_1_8E0548D751F7FB0A_OFFSET UNITYSDK_OFFSET(0x19A99430)
#define CLASS_1_9F892E4964BC9121_METHOD_1_BEE5AA578B929D3B_OFFSET UNITYSDK_OFFSET(0x19A99690)

inline static constexpr unsigned int Class_1_9F892E4964BC9121_TypeDefinitionIndex = 61607;

class Class_1_9F892E4964BC9121 : public ::System::Object
{
public:
	// static const ::System::Int32 GIPCDAPNIOD = 0x3; // 0x0

	static ::System::Int32 Method_1_12E6382168FB3F60(::System::Boolean a1, ::System::UInt32 a2)
	{
		return ((::System::Int32(*)(::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9F892E4964BC9121_METHOD_1_12E6382168FB3F60_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_8E0548D751F7FB0A(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9F892E4964BC9121_METHOD_1_8E0548D751F7FB0A_OFFSET))(a1);
	}

	static ::RPG::Client::ActivityElationAvatarData* Method_1_6F40E839310294F4(::System::UInt32 a1)
	{
		return ((::RPG::Client::ActivityElationAvatarData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9F892E4964BC9121_METHOD_1_6F40E839310294F4_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_BEE5AA578B929D3B(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9F892E4964BC9121_METHOD_1_BEE5AA578B929D3B_OFFSET))(a1);
	}
};
