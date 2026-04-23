#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Context_1.h"

class Class_2_3ABA989E5AECB261;
namespace Entitas { template <typename T> class IMatcher_1; }

#define CLASS_2_8C608625ABC8C4FA_2_GETCORESTATETREEMATCHER_OFFSET UNITYSDK_OFFSET(0x17C200C0)
#define CLASS_2_8C608625ABC8C4FA_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17C1FE90)

inline static constexpr unsigned int Class_2_8C608625ABC8C4FA_2_TypeDefinitionIndex = 34512;

class Class_2_8C608625ABC8C4FA_2 : public ::Entitas::Context_1<::Class_2_3ABA989E5AECB261*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C608625ABC8C4FA_2__CTOR_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_3ABA989E5AECB261*>* GetCoreStateTreeMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_3ABA989E5AECB261*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C608625ABC8C4FA_2_GETCORESTATETREEMATCHER_OFFSET))(this);
	}
};
