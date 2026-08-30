#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Context_1.h"

class Class_2_C097D1ED3AEF29E9_1;
namespace Entitas { template <typename T> class IMatcher_1; }

#define CLASS_2_3616FDE8A71D0590_3_GETLITTLEGAMECONFIGMATCHER_OFFSET UNITYSDK_OFFSET(0x1974A150)
#define CLASS_2_3616FDE8A71D0590_3_GETPREDICATEMATCHER_OFFSET UNITYSDK_OFFSET(0x1974A1F0)
#define CLASS_2_3616FDE8A71D0590_3_GETREPLICATEDMATCHER_OFFSET UNITYSDK_OFFSET(0x1974A290)
#define CLASS_2_3616FDE8A71D0590_3_GETTRANSFORMMATCHER_OFFSET UNITYSDK_OFFSET(0x1974A330)
#define CLASS_2_3616FDE8A71D0590_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1974A3D0)

inline static constexpr unsigned int Class_2_3616FDE8A71D0590_3_TypeDefinitionIndex = 36342;

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
