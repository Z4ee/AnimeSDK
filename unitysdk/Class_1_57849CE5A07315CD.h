#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_57849CE5A07315CD_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x14370CD0)
#define CLASS_1_57849CE5A07315CD_METHOD_1_BC62B9FB87FD6A48_OFFSET UNITYSDK_OFFSET(0x14370CE0)
#define CLASS_1_57849CE5A07315CD__CTOR_OFFSET UNITYSDK_OFFSET(0x14370CC0)

inline static constexpr unsigned int Class_1_57849CE5A07315CD_TypeDefinitionIndex = 56165;

class Class_1_57849CE5A07315CD : public ::System::Object
{
public:
	::System::Object* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_57849CE5A07315CD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_57849CE5A07315CD_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Object* Method_1_BC62B9FB87FD6A48()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_57849CE5A07315CD_METHOD_1_BC62B9FB87FD6A48_OFFSET))(this);
	}
};
