#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_HIDEINTABLESDYNAMICATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C01FF30)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int HideInTablesDynamicAttribute_TypeDefinitionIndex = 7180;

	class HideInTablesDynamicAttribute : public ::System::Attribute
	{
	public:
		::System::String* Condition; // 0x10

		::System::Void _ctor(::System::String* condition)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_HIDEINTABLESDYNAMICATTRIBUTE__CTOR_OFFSET))(this, condition);
		}
	};
}
