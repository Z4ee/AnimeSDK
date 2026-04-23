#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1A781135C1474CFC_Class_1_AFA15E0369F9D57C;
namespace System { class String; }

#define CLASS_1_1A781135C1474CFC___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x123D9FA0)
#define CLASS_1_1A781135C1474CFC___C__DISPLAYCLASS3_0__GETMCVINFO_B__0_OFFSET UNITYSDK_OFFSET(0x123DA030)

inline static constexpr unsigned int Class_1_1A781135C1474CFC___c__DisplayClass3_0_TypeDefinitionIndex = 67192;

class Class_1_1A781135C1474CFC___c__DisplayClass3_0 : public ::System::Object
{
public:
	::System::String* name; // 0x10
	::System::UInt32 missionID; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A781135C1474CFC___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetMCVInfo_b__0(::Class_1_1A781135C1474CFC_Class_1_AFA15E0369F9D57C* info)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1A781135C1474CFC_Class_1_AFA15E0369F9D57C*))((::PBYTE)hIl2Cpp + CLASS_1_1A781135C1474CFC___C__DISPLAYCLASS3_0__GETMCVINFO_B__0_OFFSET))(this, info);
	}
};
