#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_WRAPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E32BC20)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int WrapAttribute_TypeDefinitionIndex = 7385;

	class WrapAttribute : public ::System::Attribute
	{
	public:
		::System::Double Min; // 0x10
		::System::Double Max; // 0x18

		::System::Void _ctor(::System::Double min, ::System::Double max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_WRAPATTRIBUTE__CTOR_OFFSET))(this, min, max);
		}
	};
}
