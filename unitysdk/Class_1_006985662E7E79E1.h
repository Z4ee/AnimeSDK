#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_006985662E7E79E1_Struct_2_78C89C44A37F1BC9_1.h"
#include "unitysdk/System/Object.h"

class Class_2_9329E687B3EB29E0_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_006985662E7E79E1_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0xFE08FC0)
#define CLASS_1_006985662E7E79E1_METHOD_1_8800E5CD674DEE85_OFFSET UNITYSDK_OFFSET(0xFE09530)
#define CLASS_1_006985662E7E79E1_METHOD_1_94B25CAC09010F16_OFFSET UNITYSDK_OFFSET(0xFE090A0)
#define CLASS_1_006985662E7E79E1_METHOD_1_EAE8947F10C8E5FD_OFFSET UNITYSDK_OFFSET(0xFE09310)
#define CLASS_1_006985662E7E79E1__CTOR_OFFSET UNITYSDK_OFFSET(0xFE08FB0)

inline static constexpr unsigned int Class_1_006985662E7E79E1_TypeDefinitionIndex = 57745;

class Class_1_006985662E7E79E1 : public ::System::Object
{
public:
	::Class_1_006985662E7E79E1_Struct_2_78C89C44A37F1BC9_1 Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::Class_2_9329E687B3EB29E0_1*, ::Class_1_006985662E7E79E1_Struct_2_78C89C44A37F1BC9_1>* Field_1_0; // 0x20
	::Class_1_006985662E7E79E1_Struct_2_78C89C44A37F1BC9_1 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_006985662E7E79E1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_94B25CAC09010F16(::Class_2_9329E687B3EB29E0_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9329E687B3EB29E0_1*))((::PBYTE)hIl2Cpp + CLASS_1_006985662E7E79E1_METHOD_1_94B25CAC09010F16_OFFSET))(this, a1);
	}

	::System::Void Method_1_EAE8947F10C8E5FD(::Class_2_9329E687B3EB29E0_1* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9329E687B3EB29E0_1*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_006985662E7E79E1_METHOD_1_EAE8947F10C8E5FD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8800E5CD674DEE85(::Class_1_006985662E7E79E1_Struct_2_78C89C44A37F1BC9_1& a1, ::Class_1_006985662E7E79E1_Struct_2_78C89C44A37F1BC9_1& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_006985662E7E79E1_Struct_2_78C89C44A37F1BC9_1&, ::Class_1_006985662E7E79E1_Struct_2_78C89C44A37F1BC9_1&))((::PBYTE)hIl2Cpp + CLASS_1_006985662E7E79E1_METHOD_1_8800E5CD674DEE85_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_006985662E7E79E1_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}
};
