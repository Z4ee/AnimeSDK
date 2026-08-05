#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_48F4A404A08692BE_173.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_988.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_387B1E2AEAB797B9_1_METHOD_2_FB0FF2E2CC82CC6B_OFFSET UNITYSDK_OFFSET(0xF63E760)
#define CLASS_2_387B1E2AEAB797B9_1__CTOR_OFFSET UNITYSDK_OFFSET(0xF63E680)

inline static constexpr unsigned int Class_2_387B1E2AEAB797B9_1_TypeDefinitionIndex = 80807;

class Class_2_387B1E2AEAB797B9_1 : public ::Class_1_48F4A404A08692BE_173
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_0; // 0x40

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_988 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_988, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_387B1E2AEAB797B9_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Method_2_FB0FF2E2CC82CC6B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_387B1E2AEAB797B9_1_METHOD_2_FB0FF2E2CC82CC6B_OFFSET))(this);
	}
};
