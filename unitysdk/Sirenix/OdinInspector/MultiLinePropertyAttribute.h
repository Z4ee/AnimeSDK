#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_MULTILINEPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E329A50)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int MultiLinePropertyAttribute_TypeDefinitionIndex = 7330;

	class MultiLinePropertyAttribute : public ::System::Attribute
	{
	public:
		::System::Int32 Lines; // 0x10

		::System::Void _ctor(::System::Int32 lines)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_MULTILINEPROPERTYATTRIBUTE__CTOR_OFFSET))(this, lines);
		}
	};
}
