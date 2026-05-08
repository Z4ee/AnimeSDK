#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define SIRENIX_ODININSPECTOR_EXPANDSTATEFOLLOWERATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C01F900)
#define SIRENIX_ODININSPECTOR_EXPANDSTATEFOLLOWERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C01F8F0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int ExpandStateFollowerAttribute_TypeDefinitionIndex = 7164;

	class ExpandStateFollowerAttribute : public ::System::Attribute
	{
	public:
		::System::Type* ParentType; // 0x10

		::System::Void _ctor(::System::Type* parentType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_EXPANDSTATEFOLLOWERATTRIBUTE__CTOR_OFFSET))(this, parentType);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_EXPANDSTATEFOLLOWERATTRIBUTE__CTOR_1_OFFSET))(this);
		}
	};
}
