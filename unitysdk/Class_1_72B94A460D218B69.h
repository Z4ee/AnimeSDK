#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2ACAE3B8E89364F1.h"
#include "unitysdk/Foundation/Function/FixedPolynomial.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"

#define CLASS_1_72B94A460D218B69_METHOD_1_13B9C21509FE6822_1_OFFSET UNITYSDK_OFFSET(0x169E28F0)
#define CLASS_1_72B94A460D218B69_METHOD_1_13B9C21509FE6822_2_OFFSET UNITYSDK_OFFSET(0x169E2A20)
#define CLASS_1_72B94A460D218B69_METHOD_1_13B9C21509FE6822_OFFSET UNITYSDK_OFFSET(0x169E2480)
#define CLASS_1_72B94A460D218B69_METHOD_1_95ED367AFB732545_1_OFFSET UNITYSDK_OFFSET(0x169E2B50)
#define CLASS_1_72B94A460D218B69_METHOD_1_95ED367AFB732545_OFFSET UNITYSDK_OFFSET(0x169E2810)
#define CLASS_1_72B94A460D218B69_METHOD_1_A05107165F869B55_OFFSET UNITYSDK_OFFSET(0x169E2870)
#define CLASS_1_72B94A460D218B69_METHOD_1_C2CE586A1937E616_OFFSET UNITYSDK_OFFSET(0x169E25B0)
#define CLASS_1_72B94A460D218B69__CCTOR_OFFSET UNITYSDK_OFFSET(0x169E1FD0)

inline static constexpr unsigned int Class_1_72B94A460D218B69_TypeDefinitionIndex = 72208;

class Class_1_72B94A460D218B69 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_72B94A460D218B69_TypeDefinitionIndex)->GetStaticField(0xC590);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_72B94A460D218B69_TypeDefinitionIndex)->GetStaticField(0xC594);
	}
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_72B94A460D218B69_TypeDefinitionIndex)->GetStaticField(0xC598);
	}
	// static const ::System::Single Field_1_0; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_72B94A460D218B69__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_13B9C21509FE6822(::Enum_3_2ACAE3B8E89364F1 a1)
	{
		return ((::System::Int32(*)(::Enum_3_2ACAE3B8E89364F1))((::PBYTE)hIl2Cpp + CLASS_1_72B94A460D218B69_METHOD_1_13B9C21509FE6822_OFFSET))(a1);
	}

	static ::Foundation::Function::FixedPolynomial Method_1_C2CE586A1937E616(::System::Single a1, ::System::Single a2)
	{
		return ((::Foundation::Function::FixedPolynomial(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_72B94A460D218B69_METHOD_1_C2CE586A1937E616_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_95ED367AFB732545(::UnityEngine::Keyframe& a1)
	{
		return ((::System::Single(*)(::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + CLASS_1_72B94A460D218B69_METHOD_1_95ED367AFB732545_OFFSET))(a1);
	}

	static ::Enum_3_2ACAE3B8E89364F1 Method_1_A05107165F869B55(::UnityEngine::Keyframe& a1, ::UnityEngine::Keyframe& a2)
	{
		return ((::Enum_3_2ACAE3B8E89364F1(*)(::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + CLASS_1_72B94A460D218B69_METHOD_1_A05107165F869B55_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_13B9C21509FE6822_1(::Enum_3_2ACAE3B8E89364F1 a1)
	{
		return ((::System::Int32(*)(::Enum_3_2ACAE3B8E89364F1))((::PBYTE)hIl2Cpp + CLASS_1_72B94A460D218B69_METHOD_1_13B9C21509FE6822_1_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_13B9C21509FE6822_2(::Enum_3_2ACAE3B8E89364F1 a1)
	{
		return ((::System::Int32(*)(::Enum_3_2ACAE3B8E89364F1))((::PBYTE)hIl2Cpp + CLASS_1_72B94A460D218B69_METHOD_1_13B9C21509FE6822_2_OFFSET))(a1);
	}

	static ::System::Single Method_1_95ED367AFB732545_1(::UnityEngine::Keyframe& a1)
	{
		return ((::System::Single(*)(::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + CLASS_1_72B94A460D218B69_METHOD_1_95ED367AFB732545_1_OFFSET))(a1);
	}
};
