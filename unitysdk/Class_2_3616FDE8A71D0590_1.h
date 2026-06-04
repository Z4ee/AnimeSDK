#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Context_1.h"

class Class_2_AEE59ED8DADEC1A1;
namespace Entitas { template <typename T> class IMatcher_1; }

#define CLASS_2_3616FDE8A71D0590_1_GETCLIENTPROXYMATCHER_OFFSET UNITYSDK_OFFSET(0x18990880)
#define CLASS_2_3616FDE8A71D0590_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18990920)

inline static constexpr unsigned int Class_2_3616FDE8A71D0590_1_TypeDefinitionIndex = 34805;

class Class_2_3616FDE8A71D0590_1 : public ::Entitas::Context_1<::Class_2_AEE59ED8DADEC1A1*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_1__CTOR_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_AEE59ED8DADEC1A1*>* GetClientProxyMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_AEE59ED8DADEC1A1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_1_GETCLIENTPROXYMATCHER_OFFSET))(this);
	}
};
