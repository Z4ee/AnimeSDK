#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define CLASS_2_10F36ED07657179A__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFCDA70)

inline static constexpr unsigned int Class_2_10F36ED07657179A_TypeDefinitionIndex = 43994;

class Class_2_10F36ED07657179A : public ::System::Exception
{
public:
	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Exception* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_10F36ED07657179A__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
