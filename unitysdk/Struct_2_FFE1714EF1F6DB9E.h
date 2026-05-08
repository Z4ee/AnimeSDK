#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_204C453CC79AE4E0;
namespace System { class String; }

#define STRUCT_2_FFE1714EF1F6DB9E_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x787900)
#define STRUCT_2_FFE1714EF1F6DB9E_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x7878B0)
#define STRUCT_2_FFE1714EF1F6DB9E_METHOD_2_A4B7290BDA4364FA_OFFSET UNITYSDK_OFFSET(0x7878A0)

inline static constexpr unsigned int Struct_2_FFE1714EF1F6DB9E_TypeDefinitionIndex = 74243;

struct alignas(8) Struct_2_FFE1714EF1F6DB9E
{
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x20
	::System::Int32 Field_2_3; // 0x24
	::System::Int32 Field_2_4; // 0x28
	::System::String* Field_2_5; // 0x30
	::System::Boolean Field_2_6; // 0x38
	::System::Int32 Field_2_7; // 0x3C
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_8; // 0x40
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_9; // 0x50

	::System::String* Method_2_A4B7290BDA4364FA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FFE1714EF1F6DB9E_METHOD_2_A4B7290BDA4364FA_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FFE1714EF1F6DB9E_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_2A6B87C525933554(::Class_1_204C453CC79AE4E0*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_204C453CC79AE4E0*&))((::PBYTE)hIl2Cpp + STRUCT_2_FFE1714EF1F6DB9E_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
	}
};
