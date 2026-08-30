#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1344;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_11B5E54645B08227_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x15B21A00)
#define CLASS_1_11B5E54645B08227_METHOD_1_6965FC88734D18AF_OFFSET UNITYSDK_OFFSET(0x15B21AB0)
#define CLASS_1_11B5E54645B08227_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15B21B40)
#define CLASS_1_11B5E54645B08227_METHOD_1_A70C7858CD49B21D_OFFSET UNITYSDK_OFFSET(0x15B21460)
#define CLASS_1_11B5E54645B08227_METHOD_1_F0E4FAC8E5EC9E93_OFFSET UNITYSDK_OFFSET(0x15B21A60)
#define CLASS_1_11B5E54645B08227__CTOR_OFFSET UNITYSDK_OFFSET(0x15B213F0)

inline static constexpr unsigned int Class_1_11B5E54645B08227_TypeDefinitionIndex = 79785;

class Class_1_11B5E54645B08227 : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::System::UInt32>* JDNNBMOAFOK; // 0x10
	::Class_0_16E4307DCC419505_1344* HNLOJEIEFKC; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_1344* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1344*))((::PBYTE)hIl2Cpp + CLASS_1_11B5E54645B08227__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_A70C7858CD49B21D(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_11B5E54645B08227_METHOD_1_A70C7858CD49B21D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11B5E54645B08227_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::UInt32 Method_1_F0E4FAC8E5EC9E93()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11B5E54645B08227_METHOD_1_F0E4FAC8E5EC9E93_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_6965FC88734D18AF()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11B5E54645B08227_METHOD_1_6965FC88734D18AF_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11B5E54645B08227_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
