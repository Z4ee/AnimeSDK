#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_TABLECOLUMNNAMEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C021B90)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int TableColumnNameAttribute_TypeDefinitionIndex = 7234;

	class TableColumnNameAttribute : public ::System::Attribute
	{
	public:
		::System::String* Name; // 0x10
		::System::String* Tooltip; // 0x18

		::System::Void _ctor(::System::String* name, ::System::String* tooltip)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TABLECOLUMNNAMEATTRIBUTE__CTOR_OFFSET))(this, name, tooltip);
		}
	};
}
