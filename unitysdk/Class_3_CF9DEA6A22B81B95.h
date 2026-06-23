#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_3_CF9DEA6A22B81B95_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13E330F0)
#define CLASS_3_CF9DEA6A22B81B95_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x13E33250)
#define CLASS_3_CF9DEA6A22B81B95_METHOD_3_C32CC33BF0371575_OFFSET UNITYSDK_OFFSET(0x13E332E0)
#define CLASS_3_CF9DEA6A22B81B95_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x13E331D0)
#define CLASS_3_CF9DEA6A22B81B95_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13E33080)
#define CLASS_3_CF9DEA6A22B81B95__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E33140)
#define CLASS_3_CF9DEA6A22B81B95__CTOR_OFFSET UNITYSDK_OFFSET(0x13E331C0)

inline static constexpr unsigned int Class_3_CF9DEA6A22B81B95_TypeDefinitionIndex = 61700;

class Class_3_CF9DEA6A22B81B95 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_3 = 0x30; // 0x0
	::UnityEngine::Bounds Field_3_2; // 0x48
	::UnityEngine::Quaternion Field_3_1; // 0x60
	::UnityEngine::Vector3 Field_3_0; // 0x70

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_CF9DEA6A22B81B95__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CF9DEA6A22B81B95__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CF9DEA6A22B81B95_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CF9DEA6A22B81B95_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_CF9DEA6A22B81B95* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_CF9DEA6A22B81B95*(*)())((::PBYTE)hIl2Cpp + CLASS_3_CF9DEA6A22B81B95_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CF9DEA6A22B81B95_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_C32CC33BF0371575(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_CF9DEA6A22B81B95_METHOD_3_C32CC33BF0371575_OFFSET))(this, a1, a2);
	}
};
