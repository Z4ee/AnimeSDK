#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Context_1.h"

class Class_2_21AD365C113DC484;
namespace Entitas { template <typename T> class IMatcher_1; }

#define CLASS_2_3616FDE8A71D0590_1_GETCORESTATETREEMATCHER_OFFSET UNITYSDK_OFFSET(0x1976AD30)
#define CLASS_2_3616FDE8A71D0590_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1976AAD0)

inline static constexpr unsigned int Class_2_3616FDE8A71D0590_1_TypeDefinitionIndex = 36326;

class Class_2_3616FDE8A71D0590_1 : public ::Entitas::Context_1<::Class_2_21AD365C113DC484*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_1__CTOR_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_21AD365C113DC484*>* GetCoreStateTreeMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_21AD365C113DC484*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_1_GETCORESTATETREEMATCHER_OFFSET))(this);
	}
};
