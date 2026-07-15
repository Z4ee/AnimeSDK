#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Context_1.h"

class Class_2_C097D1ED3AEF29E9;
namespace Entitas { template <typename T> class IMatcher_1; }

#define CLASS_2_3616FDE8A71D0590_2_GETCLIENTPROXYMATCHER_OFFSET UNITYSDK_OFFSET(0x17BA65E0)
#define CLASS_2_3616FDE8A71D0590_2_GETCORESTATETREEMATCHER_OFFSET UNITYSDK_OFFSET(0x17BA6680)
#define CLASS_2_3616FDE8A71D0590_2_GETLITTLEGAMECONFIGMATCHER_OFFSET UNITYSDK_OFFSET(0x17BA6400)
#define CLASS_2_3616FDE8A71D0590_2_GETPREDICATEMATCHER_OFFSET UNITYSDK_OFFSET(0x17BA64A0)
#define CLASS_2_3616FDE8A71D0590_2_GETREPLICATEDMATCHER_OFFSET UNITYSDK_OFFSET(0x17BA6540)
#define CLASS_2_3616FDE8A71D0590_2_GETTRANSFORMMATCHER_OFFSET UNITYSDK_OFFSET(0x17BA6720)
#define CLASS_2_3616FDE8A71D0590_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17BA67C0)

inline static constexpr unsigned int Class_2_3616FDE8A71D0590_2_TypeDefinitionIndex = 35479;

class Class_2_3616FDE8A71D0590_2 : public ::Entitas::Context_1<::Class_2_C097D1ED3AEF29E9*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_2__CTOR_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_C097D1ED3AEF29E9*>* GetLittleGameConfigMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_C097D1ED3AEF29E9*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_2_GETLITTLEGAMECONFIGMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_C097D1ED3AEF29E9*>* GetPredicateMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_C097D1ED3AEF29E9*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_2_GETPREDICATEMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_C097D1ED3AEF29E9*>* GetReplicatedMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_C097D1ED3AEF29E9*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_2_GETREPLICATEDMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_C097D1ED3AEF29E9*>* GetClientProxyMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_C097D1ED3AEF29E9*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_2_GETCLIENTPROXYMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_C097D1ED3AEF29E9*>* GetCoreStateTreeMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_C097D1ED3AEF29E9*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_2_GETCORESTATETREEMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_C097D1ED3AEF29E9*>* GetTransformMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_C097D1ED3AEF29E9*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_2_GETTRANSFORMMATCHER_OFFSET))(this);
	}
};
