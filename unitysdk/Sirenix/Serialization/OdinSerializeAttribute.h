#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_SERIALIZATION_ODINSERIALIZEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8C9AF0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int OdinSerializeAttribute_TypeDefinitionIndex = 7521;

	class OdinSerializeAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_ODINSERIALIZEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
