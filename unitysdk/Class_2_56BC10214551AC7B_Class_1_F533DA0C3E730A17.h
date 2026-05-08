#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_56BC10214551AC7B_CLASS_1_F533DA0C3E730A17__CTOR_OFFSET UNITYSDK_OFFSET(0xEAA6940)

inline static constexpr unsigned int Class_2_56BC10214551AC7B_Class_1_F533DA0C3E730A17_TypeDefinitionIndex = 60972;

class Class_2_56BC10214551AC7B_Class_1_F533DA0C3E730A17 : public ::System::Object
{
public:
	static ::System::Int64* StaticGet_Field_1_0()
	{
		return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(Class_2_56BC10214551AC7B_Class_1_F533DA0C3E730A17_TypeDefinitionIndex)->GetStaticField(0xE7E0);
	}
	::System::Action* Field_1_3; // 0x10
	::System::Boolean Field_1_4; // 0x18
	::System::Single Field_1_2; // 0x1C
	::System::Int64 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_CLASS_1_F533DA0C3E730A17__CTOR_OFFSET))(this);
	}
};
