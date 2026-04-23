#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_626F93E2306641CC;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_C1CD371B4CDE7953_EXECUTE_OFFSET UNITYSDK_OFFSET(0x117C1A90)
#define CLASS_1_C1CD371B4CDE7953_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x117C1A50)
#define CLASS_1_C1CD371B4CDE7953_METHOD_1_03A6C599DB7ABDEA_OFFSET UNITYSDK_OFFSET(0x117C1970)
#define CLASS_1_C1CD371B4CDE7953_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x117C1EF0)
#define CLASS_1_C1CD371B4CDE7953__CTOR_OFFSET UNITYSDK_OFFSET(0x117C1A10)

inline static constexpr unsigned int Class_1_C1CD371B4CDE7953_TypeDefinitionIndex = 71625;

class Class_1_C1CD371B4CDE7953 : public ::System::Object
{
public:
	::Class_3_626F93E2306641CC* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_1; // 0x18

	::System::Void _ctor(::Class_3_626F93E2306641CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_626F93E2306641CC*))((::PBYTE)hIl2Cpp + CLASS_1_C1CD371B4CDE7953__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_C1CD371B4CDE7953* Method_1_03A6C599DB7ABDEA(::Class_3_626F93E2306641CC* a1)
	{
		return ((::Class_1_C1CD371B4CDE7953*(*)(::Class_3_626F93E2306641CC*))((::PBYTE)hIl2Cpp + CLASS_1_C1CD371B4CDE7953_METHOD_1_03A6C599DB7ABDEA_OFFSET))(a1);
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
