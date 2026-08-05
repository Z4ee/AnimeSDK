#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkEnvironment_AkEnvironment_CompareByPriority.h"

class AkEnvironment;

#define AKENVIRONMENT_AKENVIRONMENT_COMPAREBYSELECTIONALGORITHM_COMPARE_OFFSET UNITYSDK_OFFSET(0x1FA96470)
#define AKENVIRONMENT_AKENVIRONMENT_COMPAREBYSELECTIONALGORITHM__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA965E0)

inline static constexpr unsigned int AkEnvironment_AkEnvironment_CompareBySelectionAlgorithm_TypeDefinitionIndex = 33777;

class AkEnvironment_AkEnvironment_CompareBySelectionAlgorithm : public ::AkEnvironment_AkEnvironment_CompareByPriority
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENVIRONMENT_AKENVIRONMENT_COMPAREBYSELECTIONALGORITHM__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::AkEnvironment* a, ::AkEnvironment* b)
	{
		return ((::System::Int32(*)(::PVOID, ::AkEnvironment*, ::AkEnvironment*))((::PBYTE)hIl2Cpp + AKENVIRONMENT_AKENVIRONMENT_COMPAREBYSELECTIONALGORITHM_COMPARE_OFFSET))(this, a, b);
	}
};
