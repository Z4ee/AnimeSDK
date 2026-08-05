#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_2_99A6B66ACB90C91B;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class String; }

#define STRUCT_2_821B2DFE9E04B137_METHOD_2_0C44FB644D25C1C2_OFFSET UNITYSDK_OFFSET(0x873100)
#define STRUCT_2_821B2DFE9E04B137_METHOD_2_9C3D8ED2211D368B_OFFSET UNITYSDK_OFFSET(0x873040)
#define STRUCT_2_821B2DFE9E04B137_METHOD_2_FD761DD64026AB0A_OFFSET UNITYSDK_OFFSET(0x873160)
#define STRUCT_2_821B2DFE9E04B137__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C5FE10)

inline static constexpr unsigned int Struct_2_821B2DFE9E04B137_TypeDefinitionIndex = 58937;

struct alignas(8) Struct_2_821B2DFE9E04B137
{
	static ::System::String** StaticGet_Field_2_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_821B2DFE9E04B137_TypeDefinitionIndex)->GetStaticField(0x39300);
	}
	::System::Boolean Field_2_1; // 0x10
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_2_0; // 0x18
	::Class_2_99A6B66ACB90C91B* Field_2_7; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_821B2DFE9E04B137__CCTOR_OFFSET))();
	}

	/*
	::Cysharp::Threading::Tasks::UniTask Method_2_9C3D8ED2211D368B(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + STRUCT_2_821B2DFE9E04B137_METHOD_2_9C3D8ED2211D368B_OFFSET))(this, a1);
	}
	*/

	::System::Void Method_2_0C44FB644D25C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_821B2DFE9E04B137_METHOD_2_0C44FB644D25C1C2_OFFSET))(this);
	}

	/*
	::Cysharp::Threading::Tasks::UniTask Method_2_FD761DD64026AB0A(::System::String* a1, ::System::Threading::CancellationToken a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::String*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + STRUCT_2_821B2DFE9E04B137_METHOD_2_FD761DD64026AB0A_OFFSET))(this, a1, a2);
	}
	*/
};
