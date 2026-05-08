#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_955D79091BFF8D4F;

#define CLASS_3_80012FE282D692CD_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xB4FC820)
#define CLASS_3_80012FE282D692CD_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xB4FCA10)
#define CLASS_3_80012FE282D692CD_METHOD_3_C32CC33BF0371575_OFFSET UNITYSDK_OFFSET(0xB4FC980)
#define CLASS_3_80012FE282D692CD_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xB4FC900)
#define CLASS_3_80012FE282D692CD_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xB4FC7A0)
#define CLASS_3_80012FE282D692CD__CCTOR_OFFSET UNITYSDK_OFFSET(0xB4FC870)
#define CLASS_3_80012FE282D692CD__CTOR_OFFSET UNITYSDK_OFFSET(0xB4FC8F0)

inline static constexpr unsigned int Class_3_80012FE282D692CD_TypeDefinitionIndex = 47806;

class Class_3_80012FE282D692CD : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_6 = 0x1; // 0x0
	::Class_1_955D79091BFF8D4F* Field_3_5; // 0x48
	::UnityEngine::Vector3 Field_3_0; // 0x50
	::System::Boolean Field_3_3; // 0x5C
	::System::Boolean Field_3_4; // 0x5D
	::UnityEngine::Quaternion Field_3_1; // 0x60
	::UnityEngine::Vector3 Field_3_2; // 0x70

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_80012FE282D692CD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_80012FE282D692CD__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_80012FE282D692CD_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_80012FE282D692CD_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_80012FE282D692CD* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_80012FE282D692CD*(*)())((::PBYTE)hIl2Cpp + CLASS_3_80012FE282D692CD_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_C32CC33BF0371575(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_80012FE282D692CD_METHOD_3_C32CC33BF0371575_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_80012FE282D692CD_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
