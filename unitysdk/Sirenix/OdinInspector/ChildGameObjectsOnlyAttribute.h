#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_CHILDGAMEOBJECTSONLYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C01F620)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int ChildGameObjectsOnlyAttribute_TypeDefinitionIndex = 7135;

	class ChildGameObjectsOnlyAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean IncludeSelf; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_CHILDGAMEOBJECTSONLYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
