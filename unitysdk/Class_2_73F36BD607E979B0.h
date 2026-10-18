#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD893FD36F6A3A6D_9.h"

class Class_0_16E4307DCC419505_1499;
namespace System { class Action; }

#define CLASS_2_73F36BD607E979B0_METHOD_2_56D1424695403826_OFFSET UNITYSDK_OFFSET(0xBEA3740)
#define CLASS_2_73F36BD607E979B0__CTOR_OFFSET UNITYSDK_OFFSET(0xBEA3730)

inline static constexpr unsigned int Class_2_73F36BD607E979B0_TypeDefinitionIndex = 79707;

class Class_2_73F36BD607E979B0 : public ::Class_1_FD893FD36F6A3A6D_9
{
public:
	::System::UInt32 HGPKPIGKAOJ; // 0x18
	::System::Boolean FOFDKHPKNDH; // 0x1C

	::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2, ::Class_0_16E4307DCC419505_1499* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::Class_0_16E4307DCC419505_1499*))((::PBYTE)hIl2Cpp + CLASS_2_73F36BD607E979B0__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_56D1424695403826(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_73F36BD607E979B0_METHOD_2_56D1424695403826_OFFSET))(this, a1);
	}
};
