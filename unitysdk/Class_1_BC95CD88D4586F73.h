#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_BC95CD88D4586F73__CTOR_OFFSET UNITYSDK_OFFSET(0x12DA0E10)

inline static constexpr unsigned int Class_1_BC95CD88D4586F73_TypeDefinitionIndex = 54314;

class Class_1_BC95CD88D4586F73 : public ::System::Object
{
public:
	::System::String* Field_1_7; // 0x10
	::System::String* Field_1_0; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BC95CD88D4586F73__CTOR_OFFSET))(this, a1, a2);
	}
};
