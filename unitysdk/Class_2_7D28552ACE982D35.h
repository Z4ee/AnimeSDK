#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_7D28552ACE982D35_METHOD_2_476D909666927669_OFFSET UNITYSDK_OFFSET(0x1199A410)
#define CLASS_2_7D28552ACE982D35__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1199A300)
#define CLASS_2_7D28552ACE982D35__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1199A590)
#define CLASS_2_7D28552ACE982D35__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1199A700)
#define CLASS_2_7D28552ACE982D35__CTOR_OFFSET UNITYSDK_OFFSET(0x1199A2E0)

inline static constexpr unsigned int Class_2_7D28552ACE982D35_TypeDefinitionIndex = 67796;

class Class_2_7D28552ACE982D35 : public ::System::Attribute
{
public:
	::Il2CppArray<::System::Single>* Field_2_3; // 0x10
	::Il2CppArray<::System::String*>* Field_2_4; // 0x18
	::Il2CppArray<::System::Single>* Field_2_2; // 0x20
	::System::Single Field_2_0; // 0x28
	::System::Boolean Field_2_5; // 0x2C
	::System::Single Field_2_1; // 0x30

	::System::Void _ctor(::System::Single a1, ::System::Single a2, ::Il2CppArray<::System::String*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_7D28552ACE982D35__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::Il2CppArray<::System::String*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_7D28552ACE982D35__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void _ctor_2(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::Il2CppArray<::System::String*>* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_7D28552ACE982D35__CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void _ctor_3(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::Il2CppArray<::System::String*>* a9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_7D28552ACE982D35__CTOR_3_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::Il2CppArray<::System::String*>* Method_2_476D909666927669(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7D28552ACE982D35_METHOD_2_476D909666927669_OFFSET))(this, a1, a2);
	}
};
