#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_APPLICATIONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BB95040)
#define SYSTEM_APPLICATIONEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BB950B0)
#define SYSTEM_APPLICATIONEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1BB95120)
#define SYSTEM_APPLICATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB94FA0)

namespace System
{
	inline static constexpr unsigned int ApplicationException_TypeDefinitionIndex = 191;

	class ApplicationException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPLICATIONEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_APPLICATIONEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_APPLICATIONEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_APPLICATIONEXCEPTION__CTOR_3_OFFSET))(this, a1, a2);
		}
	};
}
