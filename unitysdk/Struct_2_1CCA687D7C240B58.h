#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_412;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_1CCA687D7C240B58_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x2305FF0)
#define STRUCT_2_1CCA687D7C240B58_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C52250)
#define STRUCT_2_1CCA687D7C240B58_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C521E0)
#define STRUCT_2_1CCA687D7C240B58_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C521D0)
#define STRUCT_2_1CCA687D7C240B58_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EC66400)
#define STRUCT_2_1CCA687D7C240B58_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1EC663D0)
#define STRUCT_2_1CCA687D7C240B58_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3C52040)
#define STRUCT_2_1CCA687D7C240B58_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C52030)
#define STRUCT_2_1CCA687D7C240B58__CTOR_OFFSET UNITYSDK_OFFSET(0x3C52020)

inline static constexpr unsigned int Struct_2_1CCA687D7C240B58_TypeDefinitionIndex = 44223;

struct alignas(8) Struct_2_1CCA687D7C240B58
{
	::Class_0_16E4307DCC419505_412* DPGGHOHAEMJ; // 0x10
	::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* GFEEGKHHFHH; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_412* a1, ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_412*, ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + STRUCT_2_1CCA687D7C240B58__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1CCA687D7C240B58_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_1CCA687D7C240B58_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_1CCA687D7C240B58 a1, ::Struct_2_1CCA687D7C240B58 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_1CCA687D7C240B58, ::Struct_2_1CCA687D7C240B58))((::PBYTE)hIl2Cpp + STRUCT_2_1CCA687D7C240B58_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_1CCA687D7C240B58 a1, ::Struct_2_1CCA687D7C240B58 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_1CCA687D7C240B58, ::Struct_2_1CCA687D7C240B58))((::PBYTE)hIl2Cpp + STRUCT_2_1CCA687D7C240B58_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1CCA687D7C240B58_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_1CCA687D7C240B58_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_1CCA687D7C240B58 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_1CCA687D7C240B58))((::PBYTE)hIl2Cpp + STRUCT_2_1CCA687D7C240B58_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::Class_0_16E4307DCC419505_412*& a1, ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_412*&, ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*&))((::PBYTE)hIl2Cpp + STRUCT_2_1CCA687D7C240B58_DECONSTRUCT_OFFSET))(this, a1, a2);
	}
};
