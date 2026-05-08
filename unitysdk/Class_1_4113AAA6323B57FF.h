#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4113AAA6323B57FF_Struct_2_54204874289A1CF5.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_4113AAA6323B57FF_METHOD_1_101C36FE4099F51A_OFFSET UNITYSDK_OFFSET(0xEA76050)
#define CLASS_1_4113AAA6323B57FF_METHOD_1_277F8930086803D1_OFFSET UNITYSDK_OFFSET(0xEA76950)
#define CLASS_1_4113AAA6323B57FF_METHOD_1_5955F8725DB1B33D_OFFSET UNITYSDK_OFFSET(0xEA75EB0)
#define CLASS_1_4113AAA6323B57FF_METHOD_1_8DC652D916C182B2_OFFSET UNITYSDK_OFFSET(0xEA76150)
#define CLASS_1_4113AAA6323B57FF_METHOD_1_9EC72608480C48E8_OFFSET UNITYSDK_OFFSET(0xEA75D50)
#define CLASS_1_4113AAA6323B57FF_METHOD_1_D87A7D8243E04FD7_OFFSET UNITYSDK_OFFSET(0xEA75F50)
#define CLASS_1_4113AAA6323B57FF__CTOR_OFFSET UNITYSDK_OFFSET(0xEA75CF0)

inline static constexpr unsigned int Class_1_4113AAA6323B57FF_TypeDefinitionIndex = 75803;

class Class_1_4113AAA6323B57FF : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0xFFFFFF03; // 0x0
	// static const ::System::Int32 Field_1_1 = 0xFFFFFF04; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xFFFFFF05; // 0x0
	// static const ::System::UInt32 Field_1_3 = 0xB; // 0x0
	::Il2CppArray<::Class_1_4113AAA6323B57FF_Struct_2_54204874289A1CF5>* Field_1_6; // 0x10
	::System::Action_2<::System::Int32, ::UnityEngine::Vector2>* Field_1_9; // 0x18
	::System::Action_2<::System::Int32, ::UnityEngine::Vector2>* Field_1_7; // 0x20
	::Il2CppArray<::Class_1_4113AAA6323B57FF_Struct_2_54204874289A1CF5>* Field_1_5; // 0x28
	::System::Action_2<::System::Int32, ::UnityEngine::Vector2>* Field_1_8; // 0x30
	::System::Boolean Field_1_4; // 0x38
	::System::Boolean Field_1_10; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4113AAA6323B57FF__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_9EC72608480C48E8(::System::Int32 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_4113AAA6323B57FF_METHOD_1_9EC72608480C48E8_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector2 Method_1_5955F8725DB1B33D(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_4113AAA6323B57FF_METHOD_1_5955F8725DB1B33D_OFFSET))(this, a1);
	}

	::System::Void Method_1_D87A7D8243E04FD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4113AAA6323B57FF_METHOD_1_D87A7D8243E04FD7_OFFSET))(this);
	}

	::System::Boolean Method_1_101C36FE4099F51A(::System::Int32 a1, ::Class_1_4113AAA6323B57FF_Struct_2_54204874289A1CF5& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_1_4113AAA6323B57FF_Struct_2_54204874289A1CF5&))((::PBYTE)hIl2Cpp + CLASS_1_4113AAA6323B57FF_METHOD_1_101C36FE4099F51A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8DC652D916C182B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4113AAA6323B57FF_METHOD_1_8DC652D916C182B2_OFFSET))(this);
	}

	::System::Void Method_1_277F8930086803D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4113AAA6323B57FF_METHOD_1_277F8930086803D1_OFFSET))(this);
	}
};
