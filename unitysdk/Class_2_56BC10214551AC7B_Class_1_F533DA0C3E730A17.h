#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_56BC10214551AC7B_CLASS_1_F533DA0C3E730A17__CTOR_OFFSET UNITYSDK_OFFSET(0x11D74290)

inline static constexpr unsigned int Class_2_56BC10214551AC7B_Class_1_F533DA0C3E730A17_TypeDefinitionIndex = 84007;

class Class_2_56BC10214551AC7B_Class_1_F533DA0C3E730A17 : public ::System::Object
{
public:
	static ::System::Int64* StaticGet_Field_1_0()
	{
		return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(Class_2_56BC10214551AC7B_Class_1_F533DA0C3E730A17_TypeDefinitionIndex)->GetStaticField(0x127B0);
	}
	::System::Action* Field_1_3; // 0x10
	::System::Int64 Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Boolean Field_1_4; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_CLASS_1_F533DA0C3E730A17__CTOR_OFFSET))(this);
	}
};
