#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9FAA3DCCFE14DB8_126.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_753.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_782D1A653DCC5DD0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC30340)

inline static constexpr unsigned int Class_2_782D1A653DCC5DD0_TypeDefinitionIndex = 15000;

class Class_2_782D1A653DCC5DD0 : public ::Class_1_D9FAA3DCCFE14DB8_126
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_0; // 0x48

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_753 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_753, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_782D1A653DCC5DD0__CTOR_OFFSET))(this, a1, a2);
	}
};
