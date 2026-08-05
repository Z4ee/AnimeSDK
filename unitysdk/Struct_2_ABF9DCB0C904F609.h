#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_ABF9DCB0C904F609_Enum_3_AE03BCBCA4B6F27A.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T> class Action_1; }

#define STRUCT_2_ABF9DCB0C904F609_METHOD_2_261595ACC27DA078_OFFSET UNITYSDK_OFFSET(0x861700)

inline static constexpr unsigned int Struct_2_ABF9DCB0C904F609_TypeDefinitionIndex = 82342;

struct alignas(4) Struct_2_ABF9DCB0C904F609
{
	::System::Boolean Field_2_2; // 0x10
	::Struct_2_ABF9DCB0C904F609_Enum_3_AE03BCBCA4B6F27A Field_2_1; // 0x14
	::System::Int32 Field_2_0; // 0x18

	::System::Void Method_2_261595ACC27DA078(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + STRUCT_2_ABF9DCB0C904F609_METHOD_2_261595ACC27DA078_OFFSET))(this, a1);
	}
};
