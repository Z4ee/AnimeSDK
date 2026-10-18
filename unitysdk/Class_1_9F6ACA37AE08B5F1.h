#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B6E7B83E2FB7EEE4;
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace R3 { template <typename T> class ReadOnlyReactiveProperty_1; }

#define CLASS_1_9F6ACA37AE08B5F1_GET_COUNTER_OFFSET UNITYSDK_OFFSET(0x1C57DE40)
#define CLASS_1_9F6ACA37AE08B5F1_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x1C57DF60)
#define CLASS_1_9F6ACA37AE08B5F1_METHOD_1_FB0855CD6429CA3E_OFFSET UNITYSDK_OFFSET(0x1C56FAA0)
#define CLASS_1_9F6ACA37AE08B5F1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C57DE50)

inline static constexpr unsigned int Class_1_9F6ACA37AE08B5F1_TypeDefinitionIndex = 41802;

class Class_1_9F6ACA37AE08B5F1 : public ::System::Object
{
public:
	::R3::ReactiveProperty_1<::System::Boolean>* EGAPGJMOCDD; // 0x10
	::Class_2_B6E7B83E2FB7EEE4* _Counter_k__BackingField; // 0x18
	::System::Int32 PEBAJGKDIMJ; // 0x20

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9F6ACA37AE08B5F1__CTOR_OFFSET))(this, a1);
	}

	::Class_2_B6E7B83E2FB7EEE4* get_Counter()
	{
		return ((::Class_2_B6E7B83E2FB7EEE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F6ACA37AE08B5F1_GET_COUNTER_OFFSET))(this);
	}

	::R3::ReadOnlyReactiveProperty_1<::System::Boolean>* Method_1_FB0855CD6429CA3E()
	{
		return ((::R3::ReadOnlyReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F6ACA37AE08B5F1_METHOD_1_FB0855CD6429CA3E_OFFSET))(this);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F6ACA37AE08B5F1_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}
};
