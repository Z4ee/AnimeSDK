#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MESSAGEPACK_MESSAGEPACKOBJECTATTRIBUTE_GET_ALLOWPRIVATE_OFFSET UNITYSDK_OFFSET(0x1731C060)
#define MESSAGEPACK_MESSAGEPACKOBJECTATTRIBUTE_GET_KEYASPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1731C040)
#define MESSAGEPACK_MESSAGEPACKOBJECTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1731C050)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackObjectAttribute_TypeDefinitionIndex = 6578;

	class MessagePackObjectAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean _AllowPrivate_k__BackingField; // 0x10
		::System::Boolean _KeyAsPropertyName_k__BackingField; // 0x11

		::System::Void _ctor(::System::Boolean keyAsPropertyName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKOBJECTATTRIBUTE__CTOR_OFFSET))(this, keyAsPropertyName);
		}

		::System::Boolean get_KeyAsPropertyName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKOBJECTATTRIBUTE_GET_KEYASPROPERTYNAME_OFFSET))(this);
		}

		::System::Boolean get_AllowPrivate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKOBJECTATTRIBUTE_GET_ALLOWPRIVATE_OFFSET))(this);
		}
	};
}
