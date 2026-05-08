#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_TABLECOLUMNWIDTHATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C021BA0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int TableColumnWidthAttribute_TypeDefinitionIndex = 7235;

	class TableColumnWidthAttribute : public ::System::Attribute
	{
	public:
		::System::Int32 Width; // 0x10
		::System::Boolean Resizable; // 0x14

		::System::Void _ctor(::System::Int32 width, ::System::Boolean resizable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TABLECOLUMNWIDTHATTRIBUTE__CTOR_OFFSET))(this, width, resizable);
		}
	};
}
