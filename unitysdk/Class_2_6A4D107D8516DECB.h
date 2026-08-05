#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9FAA3DCCFE14DB8_92.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_599.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_6A4D107D8516DECB__CTOR_OFFSET UNITYSDK_OFFSET(0x16C72A40)

inline static constexpr unsigned int Class_2_6A4D107D8516DECB_TypeDefinitionIndex = 12616;

class Class_2_6A4D107D8516DECB : public ::Class_1_D9FAA3DCCFE14DB8_92
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_1; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_0; // 0x50

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_599 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_599, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_6A4D107D8516DECB__CTOR_OFFSET))(this, a1, a2);
	}
};
