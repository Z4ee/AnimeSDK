#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_INDENTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F770890)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int IndentAttribute_TypeDefinitionIndex = 7322;

	class IndentAttribute : public ::System::Attribute
	{
	public:
		::System::Int32 IndentLevel; // 0x10

		::System::Void _ctor(::System::Int32 indentLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_INDENTATTRIBUTE__CTOR_OFFSET))(this, indentLevel);
		}
	};
}
