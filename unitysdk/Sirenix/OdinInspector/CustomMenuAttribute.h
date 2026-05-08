#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_CUSTOMMENUATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C01F690)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int CustomMenuAttribute_TypeDefinitionIndex = 7139;

	class CustomMenuAttribute : public ::System::Attribute
	{
	public:
		::System::String* MenuCallBackIdentifier; // 0x10
		::System::String* MenuName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_CUSTOMMENUATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
