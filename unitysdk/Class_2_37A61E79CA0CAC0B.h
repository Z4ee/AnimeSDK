#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_37A61E79CA0CAC0B_Enum_3_C7FA715312C9BC86.h"
#include "unitysdk/Enum_3_C946B24DC860B817.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class FieldInfo; }

#define CLASS_2_37A61E79CA0CAC0B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x13A1A5B0)
#define CLASS_2_37A61E79CA0CAC0B__CTOR_2_OFFSET UNITYSDK_OFFSET(0x13A1A5C0)
#define CLASS_2_37A61E79CA0CAC0B__CTOR_OFFSET UNITYSDK_OFFSET(0x13A1A590)

inline static constexpr unsigned int Class_2_37A61E79CA0CAC0B_TypeDefinitionIndex = 71530;

class Class_2_37A61E79CA0CAC0B : public ::System::Attribute
{
public:
	::System::Reflection::FieldInfo* Field_2_3; // 0x10
	::System::Reflection::FieldInfo* Field_2_4; // 0x18
	::Il2CppArray<::Enum_3_C946B24DC860B817>* Field_2_5; // 0x20
	::System::Boolean Field_2_2; // 0x28
	::Class_2_37A61E79CA0CAC0B_Enum_3_C7FA715312C9BC86 Field_2_6; // 0x2C
	::System::Single Field_2_0; // 0x30
	::System::Single Field_2_1; // 0x34

	::System::Void _ctor(::System::Single a1, ::System::Single a2, ::Class_2_37A61E79CA0CAC0B_Enum_3_C7FA715312C9BC86 a3, ::Il2CppArray<::Enum_3_C946B24DC860B817>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::Class_2_37A61E79CA0CAC0B_Enum_3_C7FA715312C9BC86, ::Il2CppArray<::Enum_3_C946B24DC860B817>*))((::PBYTE)hIl2Cpp + CLASS_2_37A61E79CA0CAC0B__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _ctor_1(::Il2CppArray<::Enum_3_C946B24DC860B817>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Enum_3_C946B24DC860B817>*))((::PBYTE)hIl2Cpp + CLASS_2_37A61E79CA0CAC0B__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::System::Type* a1, ::System::String* a2, ::System::String* a3, ::Class_2_37A61E79CA0CAC0B_Enum_3_C7FA715312C9BC86 a4, ::Il2CppArray<::Enum_3_C946B24DC860B817>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::System::String*, ::Class_2_37A61E79CA0CAC0B_Enum_3_C7FA715312C9BC86, ::Il2CppArray<::Enum_3_C946B24DC860B817>*))((::PBYTE)hIl2Cpp + CLASS_2_37A61E79CA0CAC0B__CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
