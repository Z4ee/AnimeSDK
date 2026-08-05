#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_TABLEMATRIXATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F772410)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int TableMatrixAttribute_TypeDefinitionIndex = 7372;

	class TableMatrixAttribute : public ::System::Attribute
	{
	public:
		::System::String* VerticalTitle; // 0x10
		::System::String* HorizontalTitle; // 0x18
		::System::String* DrawElementMethod; // 0x20
		::System::Boolean RespectIndentLevel; // 0x28
		::System::Boolean ResizableColumns; // 0x29
		::System::Boolean IsReadOnly; // 0x2A
		::System::Boolean SquareCells; // 0x2B
		::System::Boolean HideRowIndices; // 0x2C
		::System::Boolean Transpose; // 0x2D
		::System::Boolean HideColumnIndices; // 0x2E
		::System::Int32 RowHeight; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TABLEMATRIXATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
