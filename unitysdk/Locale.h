#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define LOCALE_GETTEXT_OFFSET UNITYSDK_OFFSET(0x161302C0)

inline static constexpr unsigned int Locale_TypeDefinitionIndex = 2244;

class Locale : public ::System::Object
{
public:
	static ::System::String* GetText(::System::String* msg)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + LOCALE_GETTEXT_OFFSET))(msg);
	}
};
