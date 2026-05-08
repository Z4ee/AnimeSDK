#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkEnvironment;

#define AKENVIRONMENT_AKENVIRONMENT_COMPAREBYPRIORITY_COMPARE_OFFSET UNITYSDK_OFFSET(0x1C372A00)
#define AKENVIRONMENT_AKENVIRONMENT_COMPAREBYPRIORITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C372AF0)

inline static constexpr unsigned int AkEnvironment_AkEnvironment_CompareByPriority_TypeDefinitionIndex = 31589;

class AkEnvironment_AkEnvironment_CompareByPriority : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENVIRONMENT_AKENVIRONMENT_COMPAREBYPRIORITY__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::AkEnvironment* a, ::AkEnvironment* b)
	{
		return ((::System::Int32(*)(::PVOID, ::AkEnvironment*, ::AkEnvironment*))((::PBYTE)hIl2Cpp + AKENVIRONMENT_AKENVIRONMENT_COMPAREBYPRIORITY_COMPARE_OFFSET))(this, a, b);
	}
};
