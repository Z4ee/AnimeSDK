#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Context_1.h"

class Class_2_C097D1ED3AEF29E9_1;
namespace Entitas { template <typename T> class IMatcher_1; }

#define CLASS_2_3616FDE8A71D0590_3_GETLITTLEGAMECONFIGMATCHER_OFFSET UNITYSDK_OFFSET(0x17B87160)
#define CLASS_2_3616FDE8A71D0590_3_GETPREDICATEMATCHER_OFFSET UNITYSDK_OFFSET(0x17B87200)
#define CLASS_2_3616FDE8A71D0590_3_GETREPLICATEDMATCHER_OFFSET UNITYSDK_OFFSET(0x17B872A0)
#define CLASS_2_3616FDE8A71D0590_3_GETTRANSFORMMATCHER_OFFSET UNITYSDK_OFFSET(0x17B87340)
#define CLASS_2_3616FDE8A71D0590_3__CTOR_OFFSET UNITYSDK_OFFSET(0x17B873E0)

inline static constexpr unsigned int Class_2_3616FDE8A71D0590_3_TypeDefinitionIndex = 35481;

class Class_2_3616FDE8A71D0590_3 : public ::Entitas::Context_1<::Class_2_C097D1ED3AEF29E9_1*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_3__CTOR_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_C097D1ED3AEF29E9_1*>* GetLittleGameConfigMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_C097D1ED3AEF29E9_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_3_GETLITTLEGAMECONFIGMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_C097D1ED3AEF29E9_1*>* GetPredicateMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_C097D1ED3AEF29E9_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_3_GETPREDICATEMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_C097D1ED3AEF29E9_1*>* GetReplicatedMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_C097D1ED3AEF29E9_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_3_GETREPLICATEDMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_C097D1ED3AEF29E9_1*>* GetTransformMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_C097D1ED3AEF29E9_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_3_GETTRANSFORMMATCHER_OFFSET))(this);
	}
};
