#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_2AB52985650A641C_Class_1_B8A20FEC1912A1AD;

#define CLASS_2_2AB52985650A641C_CLASS_1_8898A4115685765C_COMPARE_OFFSET UNITYSDK_OFFSET(0x1194ADA0)
#define CLASS_2_2AB52985650A641C_CLASS_1_8898A4115685765C_METHOD_1_90A9D3FC07AADABC_OFFSET UNITYSDK_OFFSET(0x1194AC90)
#define CLASS_2_2AB52985650A641C_CLASS_1_8898A4115685765C__CTOR_OFFSET UNITYSDK_OFFSET(0x11947550)

inline static constexpr unsigned int Class_2_2AB52985650A641C_Class_1_8898A4115685765C_TypeDefinitionIndex = 52533;

class Class_2_2AB52985650A641C_Class_1_8898A4115685765C : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AB52985650A641C_CLASS_1_8898A4115685765C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_90A9D3FC07AADABC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_2AB52985650A641C_CLASS_1_8898A4115685765C_METHOD_1_90A9D3FC07AADABC_OFFSET))(this, a1, a2);
	}

	::System::Int32 Compare(::Class_2_2AB52985650A641C_Class_1_B8A20FEC1912A1AD* a1, ::Class_2_2AB52985650A641C_Class_1_B8A20FEC1912A1AD* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_2AB52985650A641C_Class_1_B8A20FEC1912A1AD*, ::Class_2_2AB52985650A641C_Class_1_B8A20FEC1912A1AD*))((::PBYTE)hIl2Cpp + CLASS_2_2AB52985650A641C_CLASS_1_8898A4115685765C_COMPARE_OFFSET))(this, a1, a2);
	}
};
