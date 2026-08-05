#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_183906D8F39CB6ED__CTOR_OFFSET UNITYSDK_OFFSET(0x11184060)

inline static constexpr unsigned int Class_1_183906D8F39CB6ED_TypeDefinitionIndex = 77156;

class Class_1_183906D8F39CB6ED : public ::System::Object
{
public:
	::System::String* Field_1_7; // 0x10
	::System::Single Field_1_0; // 0x18
	::System::Boolean Field_1_1; // 0x1C

	::System::Void _ctor(::System::Boolean a1, ::System::Single a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_183906D8F39CB6ED__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
