#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_248.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_862.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_542A772D07AFD4EA_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x184E2500)
#define CLASS_2_542A772D07AFD4EA_METHOD_2_B892007B9247C983_OFFSET UNITYSDK_OFFSET(0x184E2570)
#define CLASS_2_542A772D07AFD4EA__CTOR_OFFSET UNITYSDK_OFFSET(0x184E2440)

inline static constexpr unsigned int Class_2_542A772D07AFD4EA_TypeDefinitionIndex = 16285;

class Class_2_542A772D07AFD4EA : public ::Class_1_5DA2E7556103D5A3_248
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_2_0; // 0xC8

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_862 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_862, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_542A772D07AFD4EA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_542A772D07AFD4EA_METHOD_2_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_2_B892007B9247C983(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_542A772D07AFD4EA_METHOD_2_B892007B9247C983_OFFSET))(this, a1);
	}
};
