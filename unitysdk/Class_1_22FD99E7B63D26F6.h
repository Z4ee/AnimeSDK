#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1189;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_22FD99E7B63D26F6__CTOR_OFFSET UNITYSDK_OFFSET(0xB86C4C0)

inline static constexpr unsigned int Class_1_22FD99E7B63D26F6_TypeDefinitionIndex = 73865;

class Class_1_22FD99E7B63D26F6 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::Class_0_16E4307DCC419505_1189*>* GENOAPBDPCH; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1189*>* LPABMIPMMLH; // 0x18
	::System::Int32 AMFJIHAABBP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22FD99E7B63D26F6__CTOR_OFFSET))(this);
	}
};
