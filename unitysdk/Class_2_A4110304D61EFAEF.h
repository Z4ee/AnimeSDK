#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A4110304D61EFAEF_Enum_3_C7FA715312C9BC86.h"
#include "unitysdk/Enum_3_C946B24DC860B817.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class FieldInfo; }

#define CLASS_2_A4110304D61EFAEF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x13E28370)
#define CLASS_2_A4110304D61EFAEF__CTOR_2_OFFSET UNITYSDK_OFFSET(0x13E28380)
#define CLASS_2_A4110304D61EFAEF__CTOR_OFFSET UNITYSDK_OFFSET(0x13E28350)

inline static constexpr unsigned int Class_2_A4110304D61EFAEF_TypeDefinitionIndex = 42959;

class Class_2_A4110304D61EFAEF : public ::System::Attribute
{
public:
	::Il2CppArray<::Enum_3_C946B24DC860B817>* Field_2_4; // 0x10
	::System::Reflection::FieldInfo* Field_2_5; // 0x18
	::System::Reflection::FieldInfo* Field_2_6; // 0x20
	::Class_2_A4110304D61EFAEF_Enum_3_C7FA715312C9BC86 Field_2_11; // 0x28
	::System::Single Field_2_1; // 0x2C
	::System::Single Field_2_0; // 0x30
	::System::Boolean Field_2_7; // 0x34

	::System::Void _ctor(::System::Single a1, ::System::Single a2, ::Class_2_A4110304D61EFAEF_Enum_3_C7FA715312C9BC86 a3, ::Il2CppArray<::Enum_3_C946B24DC860B817>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::Class_2_A4110304D61EFAEF_Enum_3_C7FA715312C9BC86, ::Il2CppArray<::Enum_3_C946B24DC860B817>*))((::PBYTE)hIl2Cpp + CLASS_2_A4110304D61EFAEF__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _ctor_1(::Il2CppArray<::Enum_3_C946B24DC860B817>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Enum_3_C946B24DC860B817>*))((::PBYTE)hIl2Cpp + CLASS_2_A4110304D61EFAEF__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::System::Type* a1, ::System::String* a2, ::System::String* a3, ::Class_2_A4110304D61EFAEF_Enum_3_C7FA715312C9BC86 a4, ::Il2CppArray<::Enum_3_C946B24DC860B817>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::System::String*, ::Class_2_A4110304D61EFAEF_Enum_3_C7FA715312C9BC86, ::Il2CppArray<::Enum_3_C946B24DC860B817>*))((::PBYTE)hIl2Cpp + CLASS_2_A4110304D61EFAEF__CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
