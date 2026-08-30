#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_265;

#define CLASS_1_DCC4A220F5A3F1EE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C4F2390)
#define CLASS_1_DCC4A220F5A3F1EE_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C4F2410)
#define CLASS_1_DCC4A220F5A3F1EE_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C4F2450)
#define CLASS_1_DCC4A220F5A3F1EE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4F2490)

inline static constexpr unsigned int Class_1_DCC4A220F5A3F1EE_TypeDefinitionIndex = 41852;

class Class_1_DCC4A220F5A3F1EE : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_265* FKIBGPJNCIJ; // 0x10
	::System::Boolean IPKICAFDKEP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCC4A220F5A3F1EE__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCC4A220F5A3F1EE_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCC4A220F5A3F1EE_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCC4A220F5A3F1EE_ONRECYCLE_OFFSET))(this);
	}
};
