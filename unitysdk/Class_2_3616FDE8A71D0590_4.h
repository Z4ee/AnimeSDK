#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Context_1.h"

class Class_2_465A9E6CC2B0EF21;
namespace Entitas { template <typename T> class IMatcher_1; }

#define CLASS_2_3616FDE8A71D0590_4_GETLITTLEGAMECONFIGMATCHER_OFFSET UNITYSDK_OFFSET(0x15414140)
#define CLASS_2_3616FDE8A71D0590_4_GETPHYSICS2DMOVEMATCHER_OFFSET UNITYSDK_OFFSET(0x154141E0)
#define CLASS_2_3616FDE8A71D0590_4_GETPHYSICS2DRIGIDBODYMATCHER_OFFSET UNITYSDK_OFFSET(0x15414280)
#define CLASS_2_3616FDE8A71D0590_4_GETREPLICATEDMATCHER_OFFSET UNITYSDK_OFFSET(0x15414320)
#define CLASS_2_3616FDE8A71D0590_4_GETTRANSFORMMATCHER_OFFSET UNITYSDK_OFFSET(0x154143C0)
#define CLASS_2_3616FDE8A71D0590_4__CTOR_OFFSET UNITYSDK_OFFSET(0x15414460)

inline static constexpr unsigned int Class_2_3616FDE8A71D0590_4_TypeDefinitionIndex = 36344;

class Class_2_3616FDE8A71D0590_4 : public ::Entitas::Context_1<::Class_2_465A9E6CC2B0EF21*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_4__CTOR_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_465A9E6CC2B0EF21*>* GetLittleGameConfigMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_465A9E6CC2B0EF21*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_4_GETLITTLEGAMECONFIGMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_465A9E6CC2B0EF21*>* GetPhysics2DMoveMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_465A9E6CC2B0EF21*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_4_GETPHYSICS2DMOVEMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_465A9E6CC2B0EF21*>* GetPhysics2DRigidBodyMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_465A9E6CC2B0EF21*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_4_GETPHYSICS2DRIGIDBODYMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_465A9E6CC2B0EF21*>* GetReplicatedMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_465A9E6CC2B0EF21*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_4_GETREPLICATEDMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_465A9E6CC2B0EF21*>* GetTransformMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_465A9E6CC2B0EF21*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_4_GETTRANSFORMMATCHER_OFFSET))(this);
	}
};
