#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_3_2A91B103A59372B3;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
template <typename T> class Class_1_DD0DD411D84DAED3;

#define CLASS_2_999F5DD82B060708_CLASS_1_0E196D68D9587069_METHOD_1_A7FD041C3B0AC101_OFFSET UNITYSDK_OFFSET(0x11F511E0)
#define CLASS_2_999F5DD82B060708_CLASS_1_0E196D68D9587069_METHOD_1_EC073B6268163ED6_OFFSET UNITYSDK_OFFSET(0x11F51260)
#define CLASS_2_999F5DD82B060708_CLASS_1_0E196D68D9587069__CTOR_OFFSET UNITYSDK_OFFSET(0x11F511D0)

inline static constexpr unsigned int Class_2_999F5DD82B060708_Class_1_0E196D68D9587069_TypeDefinitionIndex = 59364;

class Class_2_999F5DD82B060708_Class_1_0E196D68D9587069 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action_1<::Class_1_DD0DD411D84DAED3<::Class_3_2A91B103A59372B3*>*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_999F5DD82B060708_CLASS_1_0E196D68D9587069__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A7FD041C3B0AC101(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_2_999F5DD82B060708_CLASS_1_0E196D68D9587069_METHOD_1_A7FD041C3B0AC101_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC073B6268163ED6(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_2_999F5DD82B060708_CLASS_1_0E196D68D9587069_METHOD_1_EC073B6268163ED6_OFFSET))(this, a1);
	}
};
