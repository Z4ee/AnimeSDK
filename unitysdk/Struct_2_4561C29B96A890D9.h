#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_204C453CC79AE4E0_1;
class Class_3_C3F0E3B5AB5977AE_7;
namespace System { class String; }

#define STRUCT_2_4561C29B96A890D9_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x800C40)
#define STRUCT_2_4561C29B96A890D9_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x800CC0)
#define STRUCT_2_4561C29B96A890D9_METHOD_2_486AF1E6C0038D4C_OFFSET UNITYSDK_OFFSET(0x4E9AE0)
#define STRUCT_2_4561C29B96A890D9_METHOD_2_A4B7290BDA4364FA_OFFSET UNITYSDK_OFFSET(0x800D10)
#define STRUCT_2_4561C29B96A890D9_METHOD_2_FF798D152DDA9A15_OFFSET UNITYSDK_OFFSET(0x800CB0)

inline static constexpr unsigned int Struct_2_4561C29B96A890D9_TypeDefinitionIndex = 60559;

struct alignas(8) Struct_2_4561C29B96A890D9
{
	::System::String* Field_2_2; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::Int32 Field_2_0; // 0x20
	::System::Int32 Field_2_7; // 0x24
	::System::Int32 Field_2_6; // 0x28
	::System::String* Field_2_5; // 0x30
	::System::Boolean Field_2_4; // 0x38
	::System::Int32 Field_2_11; // 0x3C
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_10; // 0x40
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_9; // 0x50
	::UnityEngine::Vector2 Field_2_8; // 0x60
	::Class_3_C3F0E3B5AB5977AE_7* Field_2_15; // 0x68

	::System::Boolean Method_2_2A6B87C525933554(::Class_1_204C453CC79AE4E0_1*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_204C453CC79AE4E0_1*&))((::PBYTE)hIl2Cpp + STRUCT_2_4561C29B96A890D9_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_2_486AF1E6C0038D4C()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4561C29B96A890D9_METHOD_2_486AF1E6C0038D4C_OFFSET))(this);
	}

	::System::Void Method_2_FF798D152DDA9A15(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + STRUCT_2_4561C29B96A890D9_METHOD_2_FF798D152DDA9A15_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4561C29B96A890D9_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::String* Method_2_A4B7290BDA4364FA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4561C29B96A890D9_METHOD_2_A4B7290BDA4364FA_OFFSET))(this);
	}
};
