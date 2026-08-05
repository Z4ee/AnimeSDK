#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LITJSON_WRITERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A6620)

namespace LitJson
{
	inline static constexpr unsigned int WriterContext_TypeDefinitionIndex = 7895;

	class WriterContext : public ::System::Object
	{
	public:
		::System::Int32 Padding; // 0x10
		::System::Int32 Count; // 0x14
		::System::Boolean InArray; // 0x18
		::System::Boolean ExpectingValue; // 0x19
		::System::Boolean InObject; // 0x1A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_WRITERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
