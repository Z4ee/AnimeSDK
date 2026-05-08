#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CLASS_3_627BDECF488D9EB4_STRUCT_2_BDC94D833C2F65AD_1__CTOR_OFFSET UNITYSDK_OFFSET(0x3493D0)

inline static constexpr unsigned int Class_3_627BDECF488D9EB4_Struct_2_BDC94D833C2F65AD_1_TypeDefinitionIndex = 79467;

struct alignas(8) Class_3_627BDECF488D9EB4_Struct_2_BDC94D833C2F65AD_1
{
	// static const ::System::String* Field_2_2; // 0x0
	::System::String* Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_627BDECF488D9EB4_STRUCT_2_BDC94D833C2F65AD_1__CTOR_OFFSET))(this, a1, a2);
	}
};
