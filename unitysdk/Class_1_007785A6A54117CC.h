#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_007785A6A54117CC_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C3FE910)
#define CLASS_1_007785A6A54117CC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3FE990)

inline static constexpr unsigned int Class_1_007785A6A54117CC_TypeDefinitionIndex = 40498;

class Class_1_007785A6A54117CC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* CDAFDCPKBDN; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* CGMJGMKGCMF; // 0x18
	::System::Single LKKHEOOEGMG; // 0x20
	::System::Int32 GPEBOIJGLGE; // 0x24
	::System::Boolean MHIKNLIOCCF; // 0x28
	::System::Int32 KBDPOCPOABL; // 0x2C
	::System::Int32 FNKLEPKJLAG; // 0x30
	::System::Single KOMCLFIKMJJ; // 0x34
	::System::Int32 JOGAFFCLBCK; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_007785A6A54117CC__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_007785A6A54117CC_CLEAR_OFFSET))(this);
	}
};
