#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_SERIALIZATION_ODINSERIALIZEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E483330)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int OdinSerializeAttribute_TypeDefinitionIndex = 7517;

	class OdinSerializeAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_ODINSERIALIZEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
