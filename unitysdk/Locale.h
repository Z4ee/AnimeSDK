#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define LOCALE_GETTEXT_1_OFFSET UNITYSDK_OFFSET(0x1BD80B40)
#define LOCALE_GETTEXT_OFFSET UNITYSDK_OFFSET(0x1BD80B30)
#define LOCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD80B20)

inline static constexpr unsigned int Locale_TypeDefinitionIndex = 2260;

class Locale : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALE__CTOR_OFFSET))(this);
	}

	static ::System::String* GetText(::System::String* msg)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + LOCALE_GETTEXT_OFFSET))(msg);
	}

	static ::System::String* GetText_1(::System::String* fmt, ::Il2CppArray<::System::Object*>* args)
	{
		return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + LOCALE_GETTEXT_1_OFFSET))(fmt, args);
	}
};
