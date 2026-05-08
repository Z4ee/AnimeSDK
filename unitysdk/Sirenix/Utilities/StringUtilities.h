#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SIRENIX_UTILITIES_STRINGUTILITIES_FASTENDSWITH_OFFSET UNITYSDK_OFFSET(0x1BADCAE0)
#define SIRENIX_UTILITIES_STRINGUTILITIES_NICIFYBYTESIZE_OFFSET UNITYSDK_OFFSET(0x1BADC710)
#define SIRENIX_UTILITIES_STRINGUTILITIES_NUMBERAWARESTRINGCOMPARE_OFFSET UNITYSDK_OFFSET(0x1BADCBF0)

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int StringUtilities_TypeDefinitionIndex = 6468;

	class StringUtilities : public ::System::Object
	{
	public:
		static ::System::String* NicifyByteSize(::System::Int32 bytes, ::System::Int32 decimals)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_STRINGUTILITIES_NICIFYBYTESIZE_OFFSET))(bytes, decimals);
		}

		static ::System::Boolean FastEndsWith(::System::String* str, ::System::String* endsWith)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_STRINGUTILITIES_FASTENDSWITH_OFFSET))(str, endsWith);
		}

		static ::System::Int32 NumberAwareStringCompare(::System::String* a, ::System::String* b, ::System::Boolean ignoreLeadingZeroes, ::System::Boolean ignoreWhiteSpace, ::System::Boolean ignoreCase)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_STRINGUTILITIES_NUMBERAWARESTRINGCOMPARE_OFFSET))(a, b, ignoreLeadingZeroes, ignoreWhiteSpace, ignoreCase);
		}
	};
}
