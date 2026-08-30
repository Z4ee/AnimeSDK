#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_ED189004BA3E2530__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4B6070)

inline static constexpr unsigned int Class_1_ED189004BA3E2530_TypeDefinitionIndex = 40967;

class Class_1_ED189004BA3E2530 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* OMFAIIDBJLB; // 0x10
	::System::Single DDFDLHBNPNL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED189004BA3E2530__CTOR_OFFSET))(this);
	}
};
