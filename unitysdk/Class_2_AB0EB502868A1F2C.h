#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_48.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_137.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_AB0EB502868A1F2C_METHOD_2_81FEFD1B22CE37A2_OFFSET UNITYSDK_OFFSET(0x1BBE19C0)
#define CLASS_2_AB0EB502868A1F2C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBE17A0)

inline static constexpr unsigned int Class_2_AB0EB502868A1F2C_TypeDefinitionIndex = 13054;

class Class_2_AB0EB502868A1F2C : public ::Class_1_5DA2E7556103D5A3_48
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>* Field_2_1; // 0xE0
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>* Field_2_0; // 0xE8
	::UnityEngine::Vector2 Field_2_7; // 0xF0

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_137 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_137, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_AB0EB502868A1F2C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_81FEFD1B22CE37A2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB0EB502868A1F2C_METHOD_2_81FEFD1B22CE37A2_OFFSET))(this);
	}
};
