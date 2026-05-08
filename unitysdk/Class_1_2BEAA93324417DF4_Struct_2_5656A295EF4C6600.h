#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_2BEAA93324417DF4_STRUCT_2_5656A295EF4C6600__CTOR_OFFSET UNITYSDK_OFFSET(0x3A4A20)

inline static constexpr unsigned int Class_1_2BEAA93324417DF4_Struct_2_5656A295EF4C6600_TypeDefinitionIndex = 82724;

struct alignas(8) Class_1_2BEAA93324417DF4_Struct_2_5656A295EF4C6600
{
	::System::Int32 Field_2_0; // 0x10
	::System::Action_1<::System::EventArgs*>* Field_2_1; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_1_2BEAA93324417DF4_STRUCT_2_5656A295EF4C6600__CTOR_OFFSET))(this, a1, a2);
	}
};
