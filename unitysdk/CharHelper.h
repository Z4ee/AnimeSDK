#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CHARHELPER_GETCHAR_OFFSET UNITYSDK_OFFSET(0x133E7D20)
#define CHARHELPER_ISNUMBERCHARBYINDEX_OFFSET UNITYSDK_OFFSET(0x133E7DF0)
#define CHARHELPER_ISNUMBER_OFFSET UNITYSDK_OFFSET(0x133E7F40)

inline static constexpr unsigned int CharHelper_TypeDefinitionIndex = 79227;

class CharHelper : public ::System::Object
{
public:
	static ::System::Boolean GetChar(::System::String* origin, ::System::Int32 charIndex, ::System::Char& result)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Char&))((::PBYTE)hIl2Cpp + CHARHELPER_GETCHAR_OFFSET))(origin, charIndex, result);
	}

	static ::System::Boolean IsNumberCharByIndex(::System::String* origin, ::System::Int32 index)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CHARHELPER_ISNUMBERCHARBYINDEX_OFFSET))(origin, index);
	}

	static ::System::Boolean IsNumber(::System::Char character)
	{
		return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + CHARHELPER_ISNUMBER_OFFSET))(character);
	}
};
