#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_ARRAYSPEC_APPEND_OFFSET UNITYSDK_OFFSET(0x1BBA0230)
#define SYSTEM_ARRAYSPEC_RESOLVE_OFFSET UNITYSDK_OFFSET(0x1BBA0080)
#define SYSTEM_ARRAYSPEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BBA03A0)
#define SYSTEM_ARRAYSPEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBA0070)

namespace System
{
	inline static constexpr unsigned int ArraySpec_TypeDefinitionIndex = 445;

	class ArraySpec : public ::System::Object
	{
	public:
		::System::Int32 dimensions; // 0x10
		::System::Boolean bound; // 0x14

		::System::Void _ctor(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSPEC__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Type* Resolve(::System::Type* a1)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSPEC_RESOLVE_OFFSET))(this, a1);
		}

		::System::Text::StringBuilder* Append(::System::Text::StringBuilder* a1)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSPEC_APPEND_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSPEC_TOSTRING_OFFSET))(this);
		}
	};
}
