#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_CLSCOMPLIANTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x177E7B00)

namespace System
{
	inline static constexpr unsigned int CLSCompliantAttribute_TypeDefinitionIndex = 212;

	class CLSCompliantAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean m_compliant; // 0x10

		::System::Void _ctor(::System::Boolean isCompliant)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CLSCOMPLIANTATTRIBUTE__CTOR_OFFSET))(this, isCompliant);
		}
	};
}
