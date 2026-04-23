#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Context_1.h"

class Class_2_6313984181A582D7_1;
namespace Entitas { template <typename T> class IMatcher_1; }

#define CLASS_2_8C608625ABC8C4FA_3_GETCLIENTPROXYMATCHER_OFFSET UNITYSDK_OFFSET(0x17C1D7D0)
#define CLASS_2_8C608625ABC8C4FA_3_GETCORESTATETREEMATCHER_OFFSET UNITYSDK_OFFSET(0x17C1D890)
#define CLASS_2_8C608625ABC8C4FA_3_GETLITTLEGAMECONFIGMATCHER_OFFSET UNITYSDK_OFFSET(0x17C1D590)
#define CLASS_2_8C608625ABC8C4FA_3_GETPREDICATEMATCHER_OFFSET UNITYSDK_OFFSET(0x17C1D650)
#define CLASS_2_8C608625ABC8C4FA_3_GETREPLICATEDMATCHER_OFFSET UNITYSDK_OFFSET(0x17C1D710)
#define CLASS_2_8C608625ABC8C4FA_3_GETTRANSFORMMATCHER_OFFSET UNITYSDK_OFFSET(0x17C1D950)
#define CLASS_2_8C608625ABC8C4FA_3__CTOR_OFFSET UNITYSDK_OFFSET(0x17C1DA10)

inline static constexpr unsigned int Class_2_8C608625ABC8C4FA_3_TypeDefinitionIndex = 34524;

class Class_2_8C608625ABC8C4FA_3 : public ::Entitas::Context_1<::Class_2_6313984181A582D7_1*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C608625ABC8C4FA_3__CTOR_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_6313984181A582D7_1*>* GetLittleGameConfigMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_6313984181A582D7_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C608625ABC8C4FA_3_GETLITTLEGAMECONFIGMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_6313984181A582D7_1*>* GetPredicateMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_6313984181A582D7_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C608625ABC8C4FA_3_GETPREDICATEMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_6313984181A582D7_1*>* GetReplicatedMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_6313984181A582D7_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C608625ABC8C4FA_3_GETREPLICATEDMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_6313984181A582D7_1*>* GetClientProxyMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_6313984181A582D7_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C608625ABC8C4FA_3_GETCLIENTPROXYMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_6313984181A582D7_1*>* GetCoreStateTreeMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_6313984181A582D7_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C608625ABC8C4FA_3_GETCORESTATETREEMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_6313984181A582D7_1*>* GetTransformMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_6313984181A582D7_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C608625ABC8C4FA_3_GETTRANSFORMMATCHER_OFFSET))(this);
	}
};
