#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_98274A1A3981A020.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_2_E26E10E7BA5B72C6_METHOD_2_10FFF5D129383396_OFFSET UNITYSDK_OFFSET(0x179BE3C0)
#define CLASS_2_E26E10E7BA5B72C6_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x179BE3B0)
#define CLASS_2_E26E10E7BA5B72C6_METHOD_2_413F493333BF3391_OFFSET UNITYSDK_OFFSET(0x179BE3A0)
#define CLASS_2_E26E10E7BA5B72C6_METHOD_2_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x179BE3D0)
#define CLASS_2_E26E10E7BA5B72C6_METHOD_2_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x179BE420)
#define CLASS_2_E26E10E7BA5B72C6_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x179BE3E0)
#define CLASS_2_E26E10E7BA5B72C6_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x179BE3F0)
#define CLASS_2_E26E10E7BA5B72C6_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x179BE430)
#define CLASS_2_E26E10E7BA5B72C6_METHOD_2_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x179BE410)
#define CLASS_2_E26E10E7BA5B72C6_METHOD_2_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x179BE400)
#define CLASS_2_E26E10E7BA5B72C6__CTOR_OFFSET UNITYSDK_OFFSET(0x179BE360)

inline static constexpr unsigned int Class_2_E26E10E7BA5B72C6_TypeDefinitionIndex = 57486;

class Class_2_E26E10E7BA5B72C6 : public ::Class_1_98274A1A3981A020
{
public:
	::System::String* Field_2_2; // 0x18
	::System::Single Field_2_3; // 0x20
	::System::Single Field_2_4; // 0x24
	::UnityEngine::Quaternion Field_2_1; // 0x28
	::UnityEngine::Vector3 Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E26E10E7BA5B72C6__CTOR_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_2_413F493333BF3391()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E26E10E7BA5B72C6_METHOD_2_413F493333BF3391_OFFSET))(this);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E26E10E7BA5B72C6_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_2_10FFF5D129383396(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_E26E10E7BA5B72C6_METHOD_2_10FFF5D129383396_OFFSET))(this, a1);
	}

	::System::Void Method_2_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_E26E10E7BA5B72C6_METHOD_2_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E26E10E7BA5B72C6_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E26E10E7BA5B72C6_METHOD_2_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E26E10E7BA5B72C6_METHOD_2_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7F1AECA7CFF8AAD_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E26E10E7BA5B72C6_METHOD_2_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
	}

	::System::Single Method_2_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E26E10E7BA5B72C6_METHOD_2_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E26E10E7BA5B72C6_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}
};
