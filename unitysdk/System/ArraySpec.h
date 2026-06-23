#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_ARRAYSPEC_APPEND_OFFSET UNITYSDK_OFFSET(0x1C6EB8B0)
#define SYSTEM_ARRAYSPEC_RESOLVE_OFFSET UNITYSDK_OFFSET(0x1C6EB830)
#define SYSTEM_ARRAYSPEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C6EB9E0)
#define SYSTEM_ARRAYSPEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6EB820)

namespace System
{
	inline static constexpr unsigned int ArraySpec_TypeDefinitionIndex = 430;

	class ArraySpec : public ::System::Object
	{
	public:
		::System::Int32 dimensions; // 0x10
		::System::Boolean bound; // 0x14

		::System::Void _ctor(::System::Int32 dimensions, ::System::Boolean bound)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSPEC__CTOR_OFFSET))(this, dimensions, bound);
		}

		::System::Type* Resolve(::System::Type* type)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSPEC_RESOLVE_OFFSET))(this, type);
		}

		::System::Text::StringBuilder* Append(::System::Text::StringBuilder* sb)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSPEC_APPEND_OFFSET))(this, sb);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSPEC_TOSTRING_OFFSET))(this);
		}
	};
}
