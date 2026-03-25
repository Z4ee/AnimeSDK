#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_945ACFB1FEBC7A2C_20;
namespace System { class String; }

#define CLASS_1_582251EF6392A222__CTOR_OFFSET UNITYSDK_OFFSET(0x11119820)

inline static constexpr unsigned int Class_1_582251EF6392A222_TypeDefinitionIndex = 58369;

class Class_1_582251EF6392A222 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Il2CppArray<::Class_1_945ACFB1FEBC7A2C_20*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_582251EF6392A222__CTOR_OFFSET))(this);
	}
};
