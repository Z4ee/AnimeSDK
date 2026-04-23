#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Context_1.h"

class Class_2_1BB8CA1042AACD99;
namespace Entitas { template <typename T> class IMatcher_1; }

#define CLASS_2_8C608625ABC8C4FA_1_GETCLIENTPROXYMATCHER_OFFSET UNITYSDK_OFFSET(0x17D0CC10)
#define CLASS_2_8C608625ABC8C4FA_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17D0CCD0)

inline static constexpr unsigned int Class_2_8C608625ABC8C4FA_1_TypeDefinitionIndex = 34522;

class Class_2_8C608625ABC8C4FA_1 : public ::Entitas::Context_1<::Class_2_1BB8CA1042AACD99*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C608625ABC8C4FA_1__CTOR_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_1BB8CA1042AACD99*>* GetClientProxyMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_1BB8CA1042AACD99*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C608625ABC8C4FA_1_GETCLIENTPROXYMATCHER_OFFSET))(this);
	}
};
