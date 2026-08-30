#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Context_1.h"

class Class_2_AEE59ED8DADEC1A1;
namespace Entitas { template <typename T> class IMatcher_1; }

#define CLASS_2_3616FDE8A71D0590_GETCLIENTPROXYMATCHER_OFFSET UNITYSDK_OFFSET(0x1623E560)
#define CLASS_2_3616FDE8A71D0590__CTOR_OFFSET UNITYSDK_OFFSET(0x1623E600)

inline static constexpr unsigned int Class_2_3616FDE8A71D0590_TypeDefinitionIndex = 36338;

class Class_2_3616FDE8A71D0590 : public ::Entitas::Context_1<::Class_2_AEE59ED8DADEC1A1*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590__CTOR_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_AEE59ED8DADEC1A1*>* GetClientProxyMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_AEE59ED8DADEC1A1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_GETCLIENTPROXYMATCHER_OFFSET))(this);
	}
};
