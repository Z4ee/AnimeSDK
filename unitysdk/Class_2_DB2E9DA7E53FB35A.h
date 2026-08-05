#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_872037CA3D9BDC34.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_27.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_28.h"

class Class_0_16E4307DCC419505_7;
class Class_1_37A8069FEC1C5427;
class Class_2_AA2DF3435829EFF0_12;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_DB2E9DA7E53FB35A_METHOD_2_86953C79667FC2E6_OFFSET UNITYSDK_OFFSET(0x1E2CCDE0)
#define CLASS_2_DB2E9DA7E53FB35A__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2CCA90)

inline static constexpr unsigned int Class_2_DB2E9DA7E53FB35A_TypeDefinitionIndex = 92713;

class Class_2_DB2E9DA7E53FB35A : public ::Class_1_872037CA3D9BDC34
{
public:
	::Class_1_37A8069FEC1C5427* Field_2_1; // 0x48
	::System::Collections::Generic::List_1<::Struct_2_4C8453486C91E3A1_27>* Field_2_0; // 0x50

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_28 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_28, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_DB2E9DA7E53FB35A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_86953C79667FC2E6(::Class_2_AA2DF3435829EFF0_12* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_AA2DF3435829EFF0_12*))((::PBYTE)hIl2Cpp + CLASS_2_DB2E9DA7E53FB35A_METHOD_2_86953C79667FC2E6_OFFSET))(this, a1);
	}
};
