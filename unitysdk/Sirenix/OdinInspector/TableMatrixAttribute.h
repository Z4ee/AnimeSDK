#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_TABLEMATRIXATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E32B0A0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int TableMatrixAttribute_TypeDefinitionIndex = 7368;

	class TableMatrixAttribute : public ::System::Attribute
	{
	public:
		::System::String* HorizontalTitle; // 0x10
		::System::String* DrawElementMethod; // 0x18
		::System::String* VerticalTitle; // 0x20
		::System::Boolean ResizableColumns; // 0x28
		::System::Boolean RespectIndentLevel; // 0x29
		::System::Boolean SquareCells; // 0x2A
		::System::Boolean HideColumnIndices; // 0x2B
		::System::Int32 RowHeight; // 0x2C
		::System::Boolean HideRowIndices; // 0x30
		::System::Boolean Transpose; // 0x31
		::System::Boolean IsReadOnly; // 0x32

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TABLEMATRIXATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
