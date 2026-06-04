#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkEnvironment_AkEnvironment_CompareByPriority.h"

class AkEnvironment;

#define AKENVIRONMENT_AKENVIRONMENT_COMPAREBYSELECTIONALGORITHM_COMPARE_OFFSET UNITYSDK_OFFSET(0x1B42F990)
#define AKENVIRONMENT_AKENVIRONMENT_COMPAREBYSELECTIONALGORITHM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B42F8F0)
#define AKENVIRONMENT_AKENVIRONMENT_COMPAREBYSELECTIONALGORITHM___IFIXBASEPROXY_COMPARE_OFFSET UNITYSDK_OFFSET(0x1B42FAC0)

inline static constexpr unsigned int AkEnvironment_AkEnvironment_CompareBySelectionAlgorithm_TypeDefinitionIndex = 41301;

class AkEnvironment_AkEnvironment_CompareBySelectionAlgorithm : public ::AkEnvironment_AkEnvironment_CompareByPriority
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENVIRONMENT_AKENVIRONMENT_COMPAREBYSELECTIONALGORITHM__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::AkEnvironment* a1, ::AkEnvironment* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::AkEnvironment*, ::AkEnvironment*))((::PBYTE)hIl2Cpp + AKENVIRONMENT_AKENVIRONMENT_COMPAREBYSELECTIONALGORITHM_COMPARE_OFFSET))(this, a1, a2);
	}

	::System::Int32 __iFixBaseProxy_Compare(::AkEnvironment* a1, ::AkEnvironment* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::AkEnvironment*, ::AkEnvironment*))((::PBYTE)hIl2Cpp + AKENVIRONMENT_AKENVIRONMENT_COMPAREBYSELECTIONALGORITHM___IFIXBASEPROXY_COMPARE_OFFSET))(this, a1, a2);
	}
};
