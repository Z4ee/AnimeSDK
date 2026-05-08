#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_GROUPRELATIVEORDERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C01FBE0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int GroupRelativeOrderAttribute_TypeDefinitionIndex = 7211;

	class GroupRelativeOrderAttribute : public ::System::Attribute
	{
	public:
		::System::Single Order; // 0x10

		::System::Void _ctor(::System::Single order)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_GROUPRELATIVEORDERATTRIBUTE__CTOR_OFFSET))(this, order);
		}
	};
}
