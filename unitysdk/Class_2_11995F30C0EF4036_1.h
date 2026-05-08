#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_174.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_693.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_11995F30C0EF4036_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14938B60)

inline static constexpr unsigned int Class_2_11995F30C0EF4036_1_TypeDefinitionIndex = 12357;

class Class_2_11995F30C0EF4036_1 : public ::Class_1_5DA2E7556103D5A3_174
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_2_1; // 0xC8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_2_0; // 0xD0

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_693 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_693, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_11995F30C0EF4036_1__CTOR_OFFSET))(this, a1, a2);
	}
};
