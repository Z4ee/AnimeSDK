#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/Segment3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_79D7C06928D0E5CA_METHOD_1_22807C4D65E83951_OFFSET UNITYSDK_OFFSET(0x13A41790)
#define CLASS_1_79D7C06928D0E5CA_METHOD_1_413F493333BF3391_OFFSET UNITYSDK_OFFSET(0x13A419E0)
#define CLASS_1_79D7C06928D0E5CA_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x13A41990)
#define CLASS_1_79D7C06928D0E5CA_METHOD_1_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0x13A419A0)
#define CLASS_1_79D7C06928D0E5CA_METHOD_1_5323F2DF46A044DA_3_OFFSET UNITYSDK_OFFSET(0x13A419B0)
#define CLASS_1_79D7C06928D0E5CA_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x13A41980)
#define CLASS_1_79D7C06928D0E5CA_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x13A419C0)
#define CLASS_1_79D7C06928D0E5CA_METHOD_1_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0x13A41930)
#define CLASS_1_79D7C06928D0E5CA_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x13A418E0)
#define CLASS_1_79D7C06928D0E5CA__CTOR_OFFSET UNITYSDK_OFFSET(0x13A41740)

inline static constexpr unsigned int Class_1_79D7C06928D0E5CA_TypeDefinitionIndex = 38536;

class Class_1_79D7C06928D0E5CA : public ::System::Object
{
public:
	::UnityEngine::Quaternion Field_1_1; // 0x10
	::UnityEngine::Vector3 Field_1_0; // 0x20
	::System::Single Field_1_3; // 0x2C
	::System::Single Field_1_2; // 0x30
	::System::Single Field_1_4; // 0x34
	::System::Single Field_1_5; // 0x38

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_79D7C06928D0E5CA__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_22807C4D65E83951(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_79D7C06928D0E5CA_METHOD_1_22807C4D65E83951_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79D7C06928D0E5CA_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79D7C06928D0E5CA_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79D7C06928D0E5CA_METHOD_1_5323F2DF46A044DA_2_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79D7C06928D0E5CA_METHOD_1_5323F2DF46A044DA_3_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79D7C06928D0E5CA_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79D7C06928D0E5CA_METHOD_1_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79D7C06928D0E5CA_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_413F493333BF3391()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79D7C06928D0E5CA_METHOD_1_413F493333BF3391_OFFSET))(this);
	}
};
