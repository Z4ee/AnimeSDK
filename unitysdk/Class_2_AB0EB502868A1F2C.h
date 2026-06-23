#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_59.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_248.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_AB0EB502868A1F2C_METHOD_2_4D4E2974111868D1_OFFSET UNITYSDK_OFFSET(0x13676270)
#define CLASS_2_AB0EB502868A1F2C__CTOR_OFFSET UNITYSDK_OFFSET(0x13676020)

inline static constexpr unsigned int Class_2_AB0EB502868A1F2C_TypeDefinitionIndex = 9586;

class Class_2_AB0EB502868A1F2C : public ::Class_1_5DA2E7556103D5A3_59
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>* Field_2_0; // 0xE8
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>* Field_2_1; // 0xF0
	::UnityEngine::Vector2 Field_2_2; // 0xF8

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_248 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_248, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_AB0EB502868A1F2C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>* Method_2_4D4E2974111868D1(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_AB0EB502868A1F2C_METHOD_2_4D4E2974111868D1_OFFSET))(this, a1);
	}
};
