#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6E318F2AEABB84CB.h"
#include "unitysdk/System/Object.h"

class Class_1_FDFA365FE186E8F2_14;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_1C06EB7D3B64779A_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1C1AF6E0)
#define CLASS_1_1C06EB7D3B64779A_METHOD_1_8073A3C8BD4F2EE0_OFFSET UNITYSDK_OFFSET(0x1C1AF600)
#define CLASS_1_1C06EB7D3B64779A_METHOD_1_9D5055F8FC266C32_OFFSET UNITYSDK_OFFSET(0x1C1AF6A0)
#define CLASS_1_1C06EB7D3B64779A__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1AF740)

inline static constexpr unsigned int Class_1_1C06EB7D3B64779A_TypeDefinitionIndex = 36186;

class Class_1_1C06EB7D3B64779A : public ::System::Object
{
public:
	// static const ::System::Int32 BLFAGNMEFEG = 0x40000; // 0x0
	// static const ::System::Int32 CBOJNPBFMGO = 0xC8; // 0x0
	::System::Collections::Generic::Queue_1<::Struct_2_6E318F2AEABB84CB>* BDLAJDOCFNL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C06EB7D3B64779A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_8073A3C8BD4F2EE0(::Class_1_FDFA365FE186E8F2_14* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FDFA365FE186E8F2_14*))((::PBYTE)hIl2Cpp + CLASS_1_1C06EB7D3B64779A_METHOD_1_8073A3C8BD4F2EE0_OFFSET))(this, a1);
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
