#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4478D9BE5DE845F2_Struct_2_54204874289A1CF5.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_4478D9BE5DE845F2_METHOD_1_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0x16FE53D0)
#define CLASS_1_4478D9BE5DE845F2_METHOD_1_07280B24DFAC0CA9_OFFSET UNITYSDK_OFFSET(0x16FE5770)
#define CLASS_1_4478D9BE5DE845F2_METHOD_1_0B0DD67091F4D43D_OFFSET UNITYSDK_OFFSET(0x16FE5FF0)
#define CLASS_1_4478D9BE5DE845F2_METHOD_1_101C36FE4099F51A_OFFSET UNITYSDK_OFFSET(0x16FE6140)
#define CLASS_1_4478D9BE5DE845F2_METHOD_1_5955F8725DB1B33D_OFFSET UNITYSDK_OFFSET(0x16FE5F50)
#define CLASS_1_4478D9BE5DE845F2_METHOD_1_D87A7D8243E04FD7_OFFSET UNITYSDK_OFFSET(0x16FE52D0)
#define CLASS_1_4478D9BE5DE845F2__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE5270)

inline static constexpr unsigned int Class_1_4478D9BE5DE845F2_TypeDefinitionIndex = 90720;

class Class_1_4478D9BE5DE845F2 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_2 = 0xFFFFFF03; // 0x0
	// static const ::System::Int32 Field_1_1 = 0xFFFFFF04; // 0x0
	// static const ::System::Int32 Field_1_0 = 0xFFFFFF05; // 0x0
	// static const ::System::UInt32 Field_1_7 = 0xB; // 0x0
	::Il2CppArray<::Class_1_4478D9BE5DE845F2_Struct_2_54204874289A1CF5>* Field_1_5; // 0x10
	::System::Action_2<::System::Int32, ::UnityEngine::Vector2>* Field_1_10; // 0x18
	::Il2CppArray<::Class_1_4478D9BE5DE845F2_Struct_2_54204874289A1CF5>* Field_1_4; // 0x20
	::System::Action_2<::System::Int32, ::UnityEngine::Vector2>* Field_1_9; // 0x28
	::System::Action_2<::System::Int32, ::UnityEngine::Vector2>* Field_1_11; // 0x30
	::System::Boolean Field_1_6; // 0x38
	::System::Boolean Field_1_8; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4478D9BE5DE845F2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D87A7D8243E04FD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4478D9BE5DE845F2_METHOD_1_D87A7D8243E04FD7_OFFSET))(this);
	}

	::System::Void Method_1_06A2B758FCB8A24E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4478D9BE5DE845F2_METHOD_1_06A2B758FCB8A24E_OFFSET))(this);
	}

	::System::Void Method_1_07280B24DFAC0CA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4478D9BE5DE845F2_METHOD_1_07280B24DFAC0CA9_OFFSET))(this);
	}

	::System::Boolean Method_1_101C36FE4099F51A(::System::Int32 a1, ::Class_1_4478D9BE5DE845F2_Struct_2_54204874289A1CF5& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_1_4478D9BE5DE845F2_Struct_2_54204874289A1CF5&))((::PBYTE)hIl2Cpp + CLASS_1_4478D9BE5DE845F2_METHOD_1_101C36FE4099F51A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0B0DD67091F4D43D(::System::Int32 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_4478D9BE5DE845F2_METHOD_1_0B0DD67091F4D43D_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector2 Method_1_5955F8725DB1B33D(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_4478D9BE5DE845F2_METHOD_1_5955F8725DB1B33D_OFFSET))(this, a1);
	}
};
