#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_14861C437A9CC43A_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x3C52650)
#define STRUCT_2_14861C437A9CC43A_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C52D10)
#define STRUCT_2_14861C437A9CC43A_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C52CB0)
#define STRUCT_2_14861C437A9CC43A_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C52CA0)
#define STRUCT_2_14861C437A9CC43A_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EC3C280)
#define STRUCT_2_14861C437A9CC43A_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1EC3C260)
#define STRUCT_2_14861C437A9CC43A_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3C52BC0)
#define STRUCT_2_14861C437A9CC43A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C52BB0)
#define STRUCT_2_14861C437A9CC43A__CTOR_OFFSET UNITYSDK_OFFSET(0x94B0)

inline static constexpr unsigned int Struct_2_14861C437A9CC43A_TypeDefinitionIndex = 44189;

struct alignas(8) Struct_2_14861C437A9CC43A
{
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* IMDLGFPMPEK; // 0x10

	::System::Void _ctor(::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + STRUCT_2_14861C437A9CC43A__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_14861C437A9CC43A_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_14861C437A9CC43A_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_14861C437A9CC43A a1, ::Struct_2_14861C437A9CC43A a2)
	{
		return ((::System::Boolean(*)(::Struct_2_14861C437A9CC43A, ::Struct_2_14861C437A9CC43A))((::PBYTE)hIl2Cpp + STRUCT_2_14861C437A9CC43A_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_14861C437A9CC43A a1, ::Struct_2_14861C437A9CC43A a2)
	{
		return ((::System::Boolean(*)(::Struct_2_14861C437A9CC43A, ::Struct_2_14861C437A9CC43A))((::PBYTE)hIl2Cpp + STRUCT_2_14861C437A9CC43A_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_14861C437A9CC43A_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_14861C437A9CC43A_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_14861C437A9CC43A a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_14861C437A9CC43A))((::PBYTE)hIl2Cpp + STRUCT_2_14861C437A9CC43A_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>*&))((::PBYTE)hIl2Cpp + STRUCT_2_14861C437A9CC43A_DECONSTRUCT_OFFSET))(this, a1);
	}
};
