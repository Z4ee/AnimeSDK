#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }

#define NERDBANK_STREAMS_REQUIRES_ARGUMENT_1_OFFSET UNITYSDK_OFFSET(0x1DB32110)
#define NERDBANK_STREAMS_REQUIRES_ARGUMENT_2_OFFSET UNITYSDK_OFFSET(0x1DB32190)
#define NERDBANK_STREAMS_REQUIRES_ARGUMENT_3_OFFSET UNITYSDK_OFFSET(0x1DB32210)
#define NERDBANK_STREAMS_REQUIRES_ARGUMENT_OFFSET UNITYSDK_OFFSET(0x1DB320A0)
#define NERDBANK_STREAMS_REQUIRES_FAILRANGE_OFFSET UNITYSDK_OFFSET(0x1DB32000)
#define NERDBANK_STREAMS_REQUIRES_RANGE_OFFSET UNITYSDK_OFFSET(0x1DB31FE0)

namespace Nerdbank::Streams
{
	inline static constexpr unsigned int Requires_TypeDefinitionIndex = 31228;

	class Requires : public ::System::Object
	{
	public:
		static ::System::Void Range(::System::Boolean condition, ::System::String* parameterName, ::System::String* message)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NERDBANK_STREAMS_REQUIRES_RANGE_OFFSET))(condition, parameterName, message);
		}

		static ::System::Exception* FailRange(::System::String* parameterName, ::System::String* message)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NERDBANK_STREAMS_REQUIRES_FAILRANGE_OFFSET))(parameterName, message);
		}

		static ::System::Void Argument(::System::Boolean condition, ::System::String* parameterName, ::System::String* message)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NERDBANK_STREAMS_REQUIRES_ARGUMENT_OFFSET))(condition, parameterName, message);
		}

		static ::System::Void Argument_1(::System::Boolean condition, ::System::String* parameterName, ::System::String* message, ::System::Object* arg1)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + NERDBANK_STREAMS_REQUIRES_ARGUMENT_1_OFFSET))(condition, parameterName, message, arg1);
		}

		static ::System::Void Argument_2(::System::Boolean condition, ::System::String* parameterName, ::System::String* message, ::System::Object* arg1, ::System::Object* arg2)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NERDBANK_STREAMS_REQUIRES_ARGUMENT_2_OFFSET))(condition, parameterName, message, arg1, arg2);
		}

		static ::System::Void Argument_3(::System::Boolean condition, ::System::String* parameterName, ::System::String* message, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NERDBANK_STREAMS_REQUIRES_ARGUMENT_3_OFFSET))(condition, parameterName, message, args);
		}
	};
}
