#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_89453005EC225A84.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define STRUCT_2_96BC2C0D1A21BA4F__CTOR_OFFSET UNITYSDK_OFFSET(0x8107A0)

inline static constexpr unsigned int Struct_2_96BC2C0D1A21BA4F_TypeDefinitionIndex = 78879;

struct alignas(8) Struct_2_96BC2C0D1A21BA4F
{
	::System::UInt32 Field_2_1; // 0x10
	::Enum_3_89453005EC225A84 Field_2_0; // 0x14
	::System::Boolean Field_2_7; // 0x18
	::System::Action_1<::System::Action*>* Field_2_6; // 0x20

	::System::Void _ctor(::System::UInt32 a1, ::Enum_3_89453005EC225A84 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_89453005EC225A84))((::PBYTE)hIl2Cpp + STRUCT_2_96BC2C0D1A21BA4F__CTOR_OFFSET))(this, a1, a2);
	}
};
