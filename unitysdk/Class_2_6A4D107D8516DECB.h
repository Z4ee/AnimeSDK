#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9FAA3DCCFE14DB8_67.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_717.h"

class Class_0_16E4307DCC419505_13;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_6A4D107D8516DECB__CTOR_OFFSET UNITYSDK_OFFSET(0x11CECD70)

inline static constexpr unsigned int Class_2_6A4D107D8516DECB_TypeDefinitionIndex = 14282;

class Class_2_6A4D107D8516DECB : public ::Class_1_D9FAA3DCCFE14DB8_67
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_1; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_0; // 0x50

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_717 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_717, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_6A4D107D8516DECB__CTOR_OFFSET))(this, a1, a2);
	}
};
