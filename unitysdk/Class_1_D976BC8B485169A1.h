#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_1_D976BC8B485169A1_METHOD_1_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x159E0A50)
#define CLASS_1_D976BC8B485169A1_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x159E0B70)
#define CLASS_1_D976BC8B485169A1_METHOD_1_6E520D7D4D494BBE_OFFSET UNITYSDK_OFFSET(0x159E08F0)
#define CLASS_1_D976BC8B485169A1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x159E09C0)
#define CLASS_1_D976BC8B485169A1_METHOD_1_E0E982B55CC933EC_OFFSET UNITYSDK_OFFSET(0x159E04E0)
#define CLASS_1_D976BC8B485169A1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x159E0220)
#define CLASS_1_D976BC8B485169A1__CTOR_OFFSET UNITYSDK_OFFSET(0x159E0450)

inline static constexpr unsigned int Class_1_D976BC8B485169A1_TypeDefinitionIndex = 74228;

class Class_1_D976BC8B485169A1 : public ::System::Object
{
public:
	::Il2CppArray<::System::Boolean>* Field_1_18; // 0x10
	::Il2CppArray<::System::Boolean>* Field_1_20; // 0x18
	::Il2CppArray<::System::Boolean>* Field_1_19; // 0x20
	::Il2CppArray<::System::Boolean>* Field_1_17; // 0x28
	::System::String* Field_1_21; // 0x30
	::System::Int32 Field_1_22; // 0x38
	::System::Single Field_1_7; // 0x3C
	::System::Boolean Field_1_24; // 0x40
	::System::Boolean Field_1_9; // 0x41
	::System::Byte Field_1_10; // 0x42
	::System::Boolean Field_1_14; // 0x43
	::System::Boolean Field_1_5; // 0x44
	::System::Boolean Field_1_16; // 0x45
	::System::Boolean Field_1_23; // 0x46
	::System::Boolean Field_1_15; // 0x47
	::UnityEngine::Vector3 Field_1_2; // 0x48
	::UnityEngine::Vector3 Field_1_4; // 0x54
	::UnityEngine::Vector3 Field_1_12; // 0x60
	::System::Single Field_1_3; // 0x6C
	::System::Single Field_1_0; // 0x70
	::UnityEngine::Vector2 Field_1_6; // 0x74
	::System::Boolean Field_1_13; // 0x7C
	::System::Boolean Field_1_1; // 0x7D
	::System::Boolean Field_1_8; // 0x7E
	::System::Boolean Field_1_11; // 0x7F

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

	::System::Void Method_1_6E520D7D4D494BBE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D976BC8B485169A1_METHOD_1_6E520D7D4D494BBE_OFFSET))(this, a1);
	}

	::System::Void Method_1_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D976BC8B485169A1_METHOD_1_0868EF727040C390_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D976BC8B485169A1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D976BC8B485169A1_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
