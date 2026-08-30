#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7807B2B04302CD7B_32.h"

#define CLASS_2_6B248CCB02992B0B_CLEAR_OFFSET UNITYSDK_OFFSET(0x159364C0)
#define CLASS_2_6B248CCB02992B0B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15936510)
#define CLASS_2_6B248CCB02992B0B__CTOR_OFFSET UNITYSDK_OFFSET(0x15936580)

inline static constexpr unsigned int Class_2_6B248CCB02992B0B_TypeDefinitionIndex = 67554;

class Class_2_6B248CCB02992B0B : public ::Class_1_7807B2B04302CD7B_32
{
public:
	::System::UInt32 ANHLPFDCDHE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B248CCB02992B0B__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B248CCB02992B0B_CLEAR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B248CCB02992B0B_DISPOSE_OFFSET))(this);
	}
};
