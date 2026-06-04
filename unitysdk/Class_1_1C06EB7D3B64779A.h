#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6E318F2AEABB84CB.h"
#include "unitysdk/System/Object.h"

class Class_1_455008579EB95638_34;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_1C06EB7D3B64779A_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x18ABA0B0)
#define CLASS_1_1C06EB7D3B64779A_METHOD_1_8073A3C8BD4F2EE0_OFFSET UNITYSDK_OFFSET(0x18AB9FD0)
#define CLASS_1_1C06EB7D3B64779A_METHOD_1_9D5055F8FC266C32_OFFSET UNITYSDK_OFFSET(0x18ABA070)
#define CLASS_1_1C06EB7D3B64779A__CTOR_OFFSET UNITYSDK_OFFSET(0x18ABA110)

inline static constexpr unsigned int Class_1_1C06EB7D3B64779A_TypeDefinitionIndex = 34659;

class Class_1_1C06EB7D3B64779A : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x40000; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x64; // 0x0
	::System::Collections::Generic::Queue_1<::Struct_2_6E318F2AEABB84CB>* Field_1_2; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C06EB7D3B64779A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_8073A3C8BD4F2EE0(::Class_1_455008579EB95638_34* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_455008579EB95638_34*))((::PBYTE)hIl2Cpp + CLASS_1_1C06EB7D3B64779A_METHOD_1_8073A3C8BD4F2EE0_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Queue_1<::Struct_2_6E318F2AEABB84CB>* Method_1_9D5055F8FC266C32()
	{
		return ((::System::Collections::Generic::Queue_1<::Struct_2_6E318F2AEABB84CB>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C06EB7D3B64779A_METHOD_1_9D5055F8FC266C32_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C06EB7D3B64779A_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
