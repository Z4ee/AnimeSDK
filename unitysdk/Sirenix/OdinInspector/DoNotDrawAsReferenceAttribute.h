#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_DONOTDRAWASREFERENCEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C01F830)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int DoNotDrawAsReferenceAttribute_TypeDefinitionIndex = 7155;

	class DoNotDrawAsReferenceAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_DONOTDRAWASREFERENCEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
