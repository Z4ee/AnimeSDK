#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Context_1.h"

class Class_2_1D7B82CFD3ED1219_2;
namespace Entitas { template <typename T> class IMatcher_1; }

#define CLASS_2_3616FDE8A71D0590_4_GETLITTLEGAMECONFIGMATCHER_OFFSET UNITYSDK_OFFSET(0x18A01790)
#define CLASS_2_3616FDE8A71D0590_4_GETPREDICATEMATCHER_OFFSET UNITYSDK_OFFSET(0x18A01830)
#define CLASS_2_3616FDE8A71D0590_4_GETREPLICATEDMATCHER_OFFSET UNITYSDK_OFFSET(0x18A018D0)
#define CLASS_2_3616FDE8A71D0590_4_GETTRANSFORMMATCHER_OFFSET UNITYSDK_OFFSET(0x18A01970)
#define CLASS_2_3616FDE8A71D0590_4__CTOR_OFFSET UNITYSDK_OFFSET(0x189DCEE0)

inline static constexpr unsigned int Class_2_3616FDE8A71D0590_4_TypeDefinitionIndex = 34809;

class Class_2_3616FDE8A71D0590_4 : public ::Entitas::Context_1<::Class_2_1D7B82CFD3ED1219_2*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_4__CTOR_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_1D7B82CFD3ED1219_2*>* GetLittleGameConfigMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_1D7B82CFD3ED1219_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_4_GETLITTLEGAMECONFIGMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_1D7B82CFD3ED1219_2*>* GetPredicateMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_1D7B82CFD3ED1219_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_4_GETPREDICATEMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_1D7B82CFD3ED1219_2*>* GetReplicatedMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_1D7B82CFD3ED1219_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_4_GETREPLICATEDMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_1D7B82CFD3ED1219_2*>* GetTransformMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_1D7B82CFD3ED1219_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3616FDE8A71D0590_4_GETTRANSFORMMATCHER_OFFSET))(this);
	}
};
