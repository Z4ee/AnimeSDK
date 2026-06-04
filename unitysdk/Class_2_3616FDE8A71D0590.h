#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Context_1.h"

class Class_2_1D7B82CFD3ED1219;
namespace Entitas { template <typename T> class IMatcher_1; }

#define CLASS_2_3616FDE8A71D0590_GETLITTLEGAMECONFIGMATCHER_OFFSET UNITYSDK_OFFSET(0x18AFBA40)
#define CLASS_2_3616FDE8A71D0590_GETREPLICATEDMATCHER_OFFSET UNITYSDK_OFFSET(0x18AFBAE0)
#define CLASS_2_3616FDE8A71D0590_GETTRANSFORMMATCHER_OFFSET UNITYSDK_OFFSET(0x18AFBB80)
#define CLASS_2_3616FDE8A71D0590__CTOR_OFFSET UNITYSDK_OFFSET(0x18AFBC20)

inline static constexpr unsigned int Class_2_3616FDE8A71D0590_TypeDefinitionIndex = 34811;

class Class_2_3616FDE8A71D0590 : public ::Entitas::Context_1<::Class_2_1D7B82CFD3ED1219*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590__CTOR_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_1D7B82CFD3ED1219*>* GetLittleGameConfigMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_1D7B82CFD3ED1219*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_GETLITTLEGAMECONFIGMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_1D7B82CFD3ED1219*>* GetReplicatedMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_1D7B82CFD3ED1219*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_GETREPLICATEDMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_1D7B82CFD3ED1219*>* GetTransformMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_1D7B82CFD3ED1219*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_GETTRANSFORMMATCHER_OFFSET))(this);
	}
};
