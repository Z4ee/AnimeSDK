#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_48F4A404A08692BE_127.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_789.h"

class Class_0_16E4307DCC419505_13;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_387B1E2AEAB797B9_1_METHOD_2_FB0FF2E2CC82CC6B_OFFSET UNITYSDK_OFFSET(0x12C21B50)
#define CLASS_2_387B1E2AEAB797B9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12C21A70)

inline static constexpr unsigned int Class_2_387B1E2AEAB797B9_1_TypeDefinitionIndex = 47759;

class Class_2_387B1E2AEAB797B9_1 : public ::Class_1_48F4A404A08692BE_127
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_0; // 0x40

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_789 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_789, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_387B1E2AEAB797B9_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Method_2_FB0FF2E2CC82CC6B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_387B1E2AEAB797B9_1_METHOD_2_FB0FF2E2CC82CC6B_OFFSET))(this);
	}
};
