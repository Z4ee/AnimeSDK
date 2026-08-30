#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeV2StarTargetData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2EC3A5163E0CD5F4_METHOD_1_4969EE8205E9C6AD_OFFSET UNITYSDK_OFFSET(0xB53E080)
#define CLASS_1_2EC3A5163E0CD5F4_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0xB53DD70)
#define CLASS_1_2EC3A5163E0CD5F4_METHOD_1_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0xB53DDE0)
#define CLASS_1_2EC3A5163E0CD5F4__CTOR_OFFSET UNITYSDK_OFFSET(0xB53DDD0)

inline static constexpr unsigned int Class_1_2EC3A5163E0CD5F4_TypeDefinitionIndex = 66075;

class Class_1_2EC3A5163E0CD5F4 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MatchThreeV2StarTargetData*>* DPHNABJHCFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EC3A5163E0CD5F4__CTOR_OFFSET))(this);
	}

	static ::Class_1_2EC3A5163E0CD5F4* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_2EC3A5163E0CD5F4*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2EC3A5163E0CD5F4_METHOD_1_9B39F7D7C1FF70D6_OFFSET))();
	}

	::System::Void Method_1_ACE888BF6F5BC5FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EC3A5163E0CD5F4_METHOD_1_ACE888BF6F5BC5FD_OFFSET))(this);
	}

	::RPG::Client::MatchThreeV2StarTargetData* Method_1_4969EE8205E9C6AD(::System::UInt32 a1)
	{
		return ((::RPG::Client::MatchThreeV2StarTargetData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2EC3A5163E0CD5F4_METHOD_1_4969EE8205E9C6AD_OFFSET))(this, a1);
	}
};
