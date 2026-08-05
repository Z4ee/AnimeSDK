#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_1_548BC150801F9181_METHOD_1_05891E8E87C14559_OFFSET UNITYSDK_OFFSET(0x109BBCC0)
#define CLASS_1_548BC150801F9181_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x109BBBF0)
#define CLASS_1_548BC150801F9181_METHOD_1_4A9A016DED73BF7C_OFFSET UNITYSDK_OFFSET(0x109BB0E0)
#define CLASS_1_548BC150801F9181_METHOD_1_A40475C44AA8CEAB_OFFSET UNITYSDK_OFFSET(0x109BB700)
#define CLASS_1_548BC150801F9181_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x109BBC30)
#define CLASS_1_548BC150801F9181_TOSTRING_OFFSET UNITYSDK_OFFSET(0x109BAE20)
#define CLASS_1_548BC150801F9181__CTOR_OFFSET UNITYSDK_OFFSET(0x109BB050)

inline static constexpr unsigned int Class_1_548BC150801F9181_TypeDefinitionIndex = 70205;

class Class_1_548BC150801F9181 : public ::System::Object
{
public:
	::Il2CppArray<::System::Boolean>* Field_1_17; // 0x10
	::System::String* Field_1_21; // 0x18
	::Il2CppArray<::System::Boolean>* Field_1_22; // 0x20
	::Il2CppArray<::System::Boolean>* Field_1_23; // 0x28
	::Il2CppArray<::System::Boolean>* Field_1_16; // 0x30
	::System::Single Field_1_2; // 0x38
	::System::Single Field_1_11; // 0x3C
	::System::Boolean Field_1_13; // 0x40
	::System::Boolean Field_1_10; // 0x41
	::System::Byte Field_1_8; // 0x42
	::System::Boolean Field_1_19; // 0x43
	::System::Boolean Field_1_5; // 0x44
	::System::Boolean Field_1_15; // 0x45
	::System::Boolean Field_1_9; // 0x46
	::System::Boolean Field_1_12; // 0x47
	::UnityEngine::Vector3 Field_1_14; // 0x48
	::UnityEngine::Vector3 Field_1_6; // 0x54
	::System::Int32 Field_1_20; // 0x60
	::System::Single Field_1_7; // 0x64
	::System::Boolean Field_1_18; // 0x68
	::System::Boolean Field_1_1; // 0x69
	::System::Boolean Field_1_26; // 0x6A
	::System::Boolean Field_1_27; // 0x6B
	::UnityEngine::Vector2 Field_1_4; // 0x6C
	::UnityEngine::Vector3 Field_1_0; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_548BC150801F9181__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_548BC150801F9181_TOSTRING_OFFSET))(this);
	}

	::Class_1_548BC150801F9181* Method_1_4A9A016DED73BF7C(::Class_1_548BC150801F9181* a1)
	{
		return ((::Class_1_548BC150801F9181*(*)(::PVOID, ::Class_1_548BC150801F9181*))((::PBYTE)hIl2Cpp + CLASS_1_548BC150801F9181_METHOD_1_4A9A016DED73BF7C_OFFSET))(this, a1);
	}

	::System::Void Method_1_A40475C44AA8CEAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_548BC150801F9181_METHOD_1_A40475C44AA8CEAB_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_548BC150801F9181_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_548BC150801F9181_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_05891E8E87C14559(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_548BC150801F9181_METHOD_1_05891E8E87C14559_OFFSET))(this, a1);
	}
};
