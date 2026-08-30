#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_CLSCOMPLIANTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBA7930)

namespace System
{
	inline static constexpr unsigned int CLSCompliantAttribute_TypeDefinitionIndex = 211;

	class CLSCompliantAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean m_compliant; // 0x10

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CLSCOMPLIANTATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
