#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

namespace System { class Action; }

#define CLASS_2_7587A0F8DEF38968_METHOD_2_06B72B05850F1F8C_OFFSET UNITYSDK_OFFSET(0x155661F0)
#define CLASS_2_7587A0F8DEF38968_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x155662D0)
#define CLASS_2_7587A0F8DEF38968_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x15566270)
#define CLASS_2_7587A0F8DEF38968__CTOR_OFFSET UNITYSDK_OFFSET(0x15566320)

inline static constexpr unsigned int Class_2_7587A0F8DEF38968_TypeDefinitionIndex = 79514;

class Class_2_7587A0F8DEF38968 : public ::Class_1_3713064DEE761936
{
public:
	::System::Action* PEIHJAEIGHK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7587A0F8DEF38968__CTOR_OFFSET))(this);
	}

	static ::Class_2_7587A0F8DEF38968* Method_2_06B72B05850F1F8C(::System::Action* a1)
	{
		return ((::Class_2_7587A0F8DEF38968*(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_7587A0F8DEF38968_METHOD_2_06B72B05850F1F8C_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7587A0F8DEF38968_ONEXECUTE_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7587A0F8DEF38968_ONCLEAR_OFFSET))(this);
	}
};
