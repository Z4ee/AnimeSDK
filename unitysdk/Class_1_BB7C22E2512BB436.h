#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_BB7C22E2512BB436_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x176A0670)
#define CLASS_1_BB7C22E2512BB436_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x176A0660)
#define CLASS_1_BB7C22E2512BB436_METHOD_1_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x176A0690)
#define CLASS_1_BB7C22E2512BB436_METHOD_1_BC62B9FB87FD6A48_OFFSET UNITYSDK_OFFSET(0x176A0680)
#define CLASS_1_BB7C22E2512BB436__CTOR_OFFSET UNITYSDK_OFFSET(0x176A0650)

inline static constexpr unsigned int Class_1_BB7C22E2512BB436_TypeDefinitionIndex = 68471;

class Class_1_BB7C22E2512BB436 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::System::Object* Field_1_0; // 0x18
	::System::String* Field_1_1; // 0x20

	::System::Void _ctor(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BB7C22E2512BB436__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB7C22E2512BB436_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB7C22E2512BB436_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Object* Method_1_BC62B9FB87FD6A48()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB7C22E2512BB436_METHOD_1_BC62B9FB87FD6A48_OFFSET))(this);
	}

	::System::Void Method_1_B072873681D4192B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BB7C22E2512BB436_METHOD_1_B072873681D4192B_OFFSET))(this, a1);
	}
};
