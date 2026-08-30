#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_855;

#define CLASS_1_50210DAEB46E0CD5_METHOD_1_2B738AE70D3C61BA_OFFSET UNITYSDK_OFFSET(0x19861D00)
#define CLASS_1_50210DAEB46E0CD5_METHOD_1_625B96B1E6C6C5C1_OFFSET UNITYSDK_OFFSET(0x19861CA0)
#define CLASS_1_50210DAEB46E0CD5__CTOR_OFFSET UNITYSDK_OFFSET(0x19862220)

inline static constexpr unsigned int Class_1_50210DAEB46E0CD5_TypeDefinitionIndex = 64806;

class Class_1_50210DAEB46E0CD5 : public ::System::Object
{
public:
	::System::UInt32 BPEOPJPCCHD; // 0x10
	::System::UInt32 BDAAMNHJOIC; // 0x14
	::System::UInt32 BPOJBDLBKMC; // 0x18
	::System::UInt32 MJFIKMCKMAD; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50210DAEB46E0CD5__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_625B96B1E6C6C5C1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_50210DAEB46E0CD5_METHOD_1_625B96B1E6C6C5C1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_2B738AE70D3C61BA(::System::UInt32 a1, ::System::UInt32 a2, ::Class_0_16E4307DCC419505_855* a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Class_0_16E4307DCC419505_855*))((::PBYTE)hIl2Cpp + CLASS_1_50210DAEB46E0CD5_METHOD_1_2B738AE70D3C61BA_OFFSET))(this, a1, a2, a3);
	}
};
