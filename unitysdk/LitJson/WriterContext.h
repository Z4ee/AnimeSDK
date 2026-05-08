#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LITJSON_WRITERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18040090)

namespace LitJson
{
	inline static constexpr unsigned int WriterContext_TypeDefinitionIndex = 8182;

	class WriterContext : public ::System::Object
	{
	public:
		::System::Int32 Padding; // 0x10
		::System::Boolean ExpectingValue; // 0x14
		::System::Boolean InArray; // 0x15
		::System::Boolean InObject; // 0x16
		::System::Int32 Count; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_WRITERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
