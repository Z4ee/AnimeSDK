#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A68379E4154D8606_METHOD_1_0EA837295AE4519F_OFFSET UNITYSDK_OFFSET(0xC328AA0)
#define CLASS_1_A68379E4154D8606_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xC328A40)
#define CLASS_1_A68379E4154D8606_METHOD_1_BFD935EF4F7135DD_OFFSET UNITYSDK_OFFSET(0xC3289D0)
#define CLASS_1_A68379E4154D8606__CTOR_OFFSET UNITYSDK_OFFSET(0xC328B60)

inline static constexpr unsigned int Class_1_A68379E4154D8606_TypeDefinitionIndex = 66718;

class Class_1_A68379E4154D8606 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* OFKCFPAPCJP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A68379E4154D8606__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BFD935EF4F7135DD(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_A68379E4154D8606_METHOD_1_BFD935EF4F7135DD_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A68379E4154D8606_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_1_0EA837295AE4519F(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A68379E4154D8606_METHOD_1_0EA837295AE4519F_OFFSET))(this, a1);
	}
};
