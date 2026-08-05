#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_DDA9D20273489848.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_1008.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D84BBF82F88195B5_METHOD_2_0B4FD863809427D9_OFFSET UNITYSDK_OFFSET(0x1BB88920)
#define CLASS_2_D84BBF82F88195B5_METHOD_2_922F90144AF14F38_OFFSET UNITYSDK_OFFSET(0x1BB886F0)
#define CLASS_2_D84BBF82F88195B5__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB88670)

inline static constexpr unsigned int Class_2_D84BBF82F88195B5_TypeDefinitionIndex = 14820;

class Class_2_D84BBF82F88195B5 : public ::Class_1_DDA9D20273489848
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_2_0; // 0x40

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_1008 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_1008, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_D84BBF82F88195B5__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_922F90144AF14F38(::System::String* a1, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*))((::PBYTE)hIl2Cpp + CLASS_2_D84BBF82F88195B5_METHOD_2_922F90144AF14F38_OFFSET))(a1, a2);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Method_2_0B4FD863809427D9()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D84BBF82F88195B5_METHOD_2_0B4FD863809427D9_OFFSET))(this);
	}
};
