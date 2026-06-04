#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Context_1.h"

class Class_2_1D7B82CFD3ED1219_1;
namespace Entitas { template <typename T> class IMatcher_1; }

#define CLASS_2_3616FDE8A71D0590_3_GETCLIENTPROXYMATCHER_OFFSET UNITYSDK_OFFSET(0x18A17DB0)
#define CLASS_2_3616FDE8A71D0590_3_GETCORESTATETREEMATCHER_OFFSET UNITYSDK_OFFSET(0x18A17E50)
#define CLASS_2_3616FDE8A71D0590_3_GETLITTLEGAMECONFIGMATCHER_OFFSET UNITYSDK_OFFSET(0x18A17BD0)
#define CLASS_2_3616FDE8A71D0590_3_GETPREDICATEMATCHER_OFFSET UNITYSDK_OFFSET(0x18A17C70)
#define CLASS_2_3616FDE8A71D0590_3_GETREPLICATEDMATCHER_OFFSET UNITYSDK_OFFSET(0x18A17D10)
#define CLASS_2_3616FDE8A71D0590_3_GETTRANSFORMMATCHER_OFFSET UNITYSDK_OFFSET(0x18A17EF0)
#define CLASS_2_3616FDE8A71D0590_3__CTOR_OFFSET UNITYSDK_OFFSET(0x18A17F90)

inline static constexpr unsigned int Class_2_3616FDE8A71D0590_3_TypeDefinitionIndex = 34807;

class Class_2_3616FDE8A71D0590_3 : public ::Entitas::Context_1<::Class_2_1D7B82CFD3ED1219_1*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_3__CTOR_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_1D7B82CFD3ED1219_1*>* GetLittleGameConfigMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_1D7B82CFD3ED1219_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_3_GETLITTLEGAMECONFIGMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_1D7B82CFD3ED1219_1*>* GetPredicateMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_1D7B82CFD3ED1219_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_3_GETPREDICATEMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_1D7B82CFD3ED1219_1*>* GetReplicatedMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_1D7B82CFD3ED1219_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_3_GETREPLICATEDMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_1D7B82CFD3ED1219_1*>* GetClientProxyMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_1D7B82CFD3ED1219_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_3_GETCLIENTPROXYMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_1D7B82CFD3ED1219_1*>* GetCoreStateTreeMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_1D7B82CFD3ED1219_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_3_GETCORESTATETREEMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_1D7B82CFD3ED1219_1*>* GetTransformMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_1D7B82CFD3ED1219_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_3_GETTRANSFORMMATCHER_OFFSET))(this);
	}
};
