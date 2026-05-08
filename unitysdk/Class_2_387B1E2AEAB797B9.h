#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_46FECA8E1D551D46_67.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_93.h"

class Class_0_16E4307DCC419505_13;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_387B1E2AEAB797B9_METHOD_2_FB0FF2E2CC82CC6B_OFFSET UNITYSDK_OFFSET(0x11CC65A0)
#define CLASS_2_387B1E2AEAB797B9__CTOR_OFFSET UNITYSDK_OFFSET(0x11CC64C0)

inline static constexpr unsigned int Class_2_387B1E2AEAB797B9_TypeDefinitionIndex = 17162;

class Class_2_387B1E2AEAB797B9 : public ::Class_1_46FECA8E1D551D46_67
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_0; // 0x38

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_93 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_93, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_387B1E2AEAB797B9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Method_2_FB0FF2E2CC82CC6B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_387B1E2AEAB797B9_METHOD_2_FB0FF2E2CC82CC6B_OFFSET))(this);
	}
};
