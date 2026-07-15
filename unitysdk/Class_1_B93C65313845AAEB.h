#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Code/Manager/ECustomLateUpdateType.h"
#include "unitysdk/System/Object.h"

class Class_3_F946D4081774B88D;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B93C65313845AAEB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16BD48C0)
#define CLASS_1_B93C65313845AAEB_METHOD_1_098E71CA53F64B12_OFFSET UNITYSDK_OFFSET(0x16BD49D0)
#define CLASS_1_B93C65313845AAEB_METHOD_1_0DC6BC4DBC5B422B_OFFSET UNITYSDK_OFFSET(0x16BD4C80)
#define CLASS_1_B93C65313845AAEB_METHOD_1_F4AB2CFCF5494DB7_OFFSET UNITYSDK_OFFSET(0x16BD4BD0)
#define CLASS_1_B93C65313845AAEB__CTOR_OFFSET UNITYSDK_OFFSET(0x16BD41B0)

inline static constexpr unsigned int Class_1_B93C65313845AAEB_TypeDefinitionIndex = 47843;

class Class_1_B93C65313845AAEB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_3_F946D4081774B88D*>* Field_1_0; // 0x10
	::Il2CppArray<::System::Collections::Generic::HashSet_1<::Class_3_F946D4081774B88D*>*>* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B93C65313845AAEB__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B93C65313845AAEB_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_098E71CA53F64B12(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B93C65313845AAEB_METHOD_1_098E71CA53F64B12_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4AB2CFCF5494DB7(::Code::Manager::ECustomLateUpdateType a1, ::Class_3_F946D4081774B88D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Code::Manager::ECustomLateUpdateType, ::Class_3_F946D4081774B88D*))((::PBYTE)hIl2Cpp + CLASS_1_B93C65313845AAEB_METHOD_1_F4AB2CFCF5494DB7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0DC6BC4DBC5B422B(::Code::Manager::ECustomLateUpdateType a1, ::Class_3_F946D4081774B88D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Code::Manager::ECustomLateUpdateType, ::Class_3_F946D4081774B88D*))((::PBYTE)hIl2Cpp + CLASS_1_B93C65313845AAEB_METHOD_1_0DC6BC4DBC5B422B_OFFSET))(this, a1, a2);
	}
};
