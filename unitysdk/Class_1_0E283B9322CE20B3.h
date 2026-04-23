#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0E283B9322CE20B3_METHOD_1_7027832C8B8A9FCB_OFFSET UNITYSDK_OFFSET(0x96A1B90)
#define CLASS_1_0E283B9322CE20B3_METHOD_1_F9FFAF1BC10DF2A5_OFFSET UNITYSDK_OFFSET(0x96A1FC0)

inline static constexpr unsigned int Class_1_0E283B9322CE20B3_TypeDefinitionIndex = 61223;

class Class_1_0E283B9322CE20B3 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x3B9ACA00; // 0x0

	static ::System::Numerics::BigInteger Method_1_7027832C8B8A9FCB(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Numerics::BigInteger(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0E283B9322CE20B3_METHOD_1_7027832C8B8A9FCB_OFFSET))(a1, a2, a3);
	}

	static ::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32> Method_1_F9FFAF1BC10DF2A5(::System::Numerics::BigInteger a1, ::System::Int32 a2)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32>(*)(::System::Numerics::BigInteger, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0E283B9322CE20B3_METHOD_1_F9FFAF1BC10DF2A5_OFFSET))(a1, a2);
	}
};
