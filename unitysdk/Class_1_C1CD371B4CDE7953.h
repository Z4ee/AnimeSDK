#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_FA020C2C23A72B3F;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_C1CD371B4CDE7953_EXECUTE_OFFSET UNITYSDK_OFFSET(0x179325F0)
#define CLASS_1_C1CD371B4CDE7953_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x179325B0)
#define CLASS_1_C1CD371B4CDE7953_METHOD_1_03A6C599DB7ABDEA_OFFSET UNITYSDK_OFFSET(0x179324D0)
#define CLASS_1_C1CD371B4CDE7953_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x17932960)
#define CLASS_1_C1CD371B4CDE7953__CTOR_OFFSET UNITYSDK_OFFSET(0x17932570)

inline static constexpr unsigned int Class_1_C1CD371B4CDE7953_TypeDefinitionIndex = 77656;

class Class_1_C1CD371B4CDE7953 : public ::System::Object
{
public:
	::Class_3_FA020C2C23A72B3F* PDENFEFCAGN; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* NNOANAOOOPA; // 0x18

	::System::Void _ctor(::Class_3_FA020C2C23A72B3F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FA020C2C23A72B3F*))((::PBYTE)hIl2Cpp + CLASS_1_C1CD371B4CDE7953__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_C1CD371B4CDE7953* Method_1_03A6C599DB7ABDEA(::Class_3_FA020C2C23A72B3F* a1)
	{
		return ((::Class_1_C1CD371B4CDE7953*(*)(::Class_3_FA020C2C23A72B3F*))((::PBYTE)hIl2Cpp + CLASS_1_C1CD371B4CDE7953_METHOD_1_03A6C599DB7ABDEA_OFFSET))(a1);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1CD371B4CDE7953_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1CD371B4CDE7953_EXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1CD371B4CDE7953_TEARDOWN_OFFSET))(this);
	}
};
