#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_46FECA8E1D551D46_73.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_174.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_387B1E2AEAB797B9_METHOD_2_FB0FF2E2CC82CC6B_OFFSET UNITYSDK_OFFSET(0x1A5C4390)
#define CLASS_2_387B1E2AEAB797B9__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5C42B0)

inline static constexpr unsigned int Class_2_387B1E2AEAB797B9_TypeDefinitionIndex = 15022;

class Class_2_387B1E2AEAB797B9 : public ::Class_1_46FECA8E1D551D46_73
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_0; // 0x38

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_174 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_174, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_387B1E2AEAB797B9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Method_2_FB0FF2E2CC82CC6B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_387B1E2AEAB797B9_METHOD_2_FB0FF2E2CC82CC6B_OFFSET))(this);
	}
};
