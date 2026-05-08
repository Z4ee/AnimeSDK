#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_1_D976BC8B485169A1_METHOD_1_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x119106D0)
#define CLASS_1_D976BC8B485169A1_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x119107F0)
#define CLASS_1_D976BC8B485169A1_METHOD_1_6E520D7D4D494BBE_OFFSET UNITYSDK_OFFSET(0x11910830)
#define CLASS_1_D976BC8B485169A1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11910900)
#define CLASS_1_D976BC8B485169A1_METHOD_1_E0E982B55CC933EC_OFFSET UNITYSDK_OFFSET(0x119102C0)
#define CLASS_1_D976BC8B485169A1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11910000)
#define CLASS_1_D976BC8B485169A1__CTOR_OFFSET UNITYSDK_OFFSET(0x11910230)

inline static constexpr unsigned int Class_1_D976BC8B485169A1_TypeDefinitionIndex = 44860;

class Class_1_D976BC8B485169A1 : public ::System::Object
{
public:
	::System::String* Field_1_21; // 0x10
	::Il2CppArray<::System::Boolean>* Field_1_18; // 0x18
	::Il2CppArray<::System::Boolean>* Field_1_19; // 0x20
	::Il2CppArray<::System::Boolean>* Field_1_17; // 0x28
	::Il2CppArray<::System::Boolean>* Field_1_20; // 0x30
	::UnityEngine::Vector3 Field_1_4; // 0x38
	::System::Single Field_1_7; // 0x44
	::System::Boolean Field_1_16; // 0x48
	::System::Boolean Field_1_13; // 0x49
	::System::Byte Field_1_10; // 0x4A
	::System::Boolean Field_1_24; // 0x4B
	::System::Boolean Field_1_14; // 0x4C
	::System::Boolean Field_1_8; // 0x4D
	::System::Boolean Field_1_15; // 0x4E
	::System::Boolean Field_1_11; // 0x4F
	::UnityEngine::Vector2 Field_1_6; // 0x50
	::System::Single Field_1_0; // 0x58
	::UnityEngine::Vector3 Field_1_12; // 0x5C
	::System::Boolean Field_1_23; // 0x68
	::System::Boolean Field_1_9; // 0x69
	::System::Boolean Field_1_5; // 0x6A
	::System::Boolean Field_1_1; // 0x6B
	::System::Single Field_1_3; // 0x6C
	::UnityEngine::Vector3 Field_1_2; // 0x70
	::System::Int32 Field_1_22; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D976BC8B485169A1__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D976BC8B485169A1_TOSTRING_OFFSET))(this);
	}

	::Class_1_D976BC8B485169A1* Method_1_E0E982B55CC933EC(::Class_1_D976BC8B485169A1* a1)
	{
		return ((::Class_1_D976BC8B485169A1*(*)(::PVOID, ::Class_1_D976BC8B485169A1*))((::PBYTE)hIl2Cpp + CLASS_1_D976BC8B485169A1_METHOD_1_E0E982B55CC933EC_OFFSET))(this, a1);
	}

	::System::Void Method_1_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D976BC8B485169A1_METHOD_1_0868EF727040C390_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D976BC8B485169A1_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_1_6E520D7D4D494BBE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D976BC8B485169A1_METHOD_1_6E520D7D4D494BBE_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D976BC8B485169A1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
