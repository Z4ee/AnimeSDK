#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

namespace System { class Action; }

#define CLASS_2_7587A0F8DEF38968_METHOD_2_06B72B05850F1F8C_OFFSET UNITYSDK_OFFSET(0x16396AE0)
#define CLASS_2_7587A0F8DEF38968_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x16396BC0)
#define CLASS_2_7587A0F8DEF38968_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x16396B60)
#define CLASS_2_7587A0F8DEF38968__CTOR_OFFSET UNITYSDK_OFFSET(0x16396C10)

inline static constexpr unsigned int Class_2_7587A0F8DEF38968_TypeDefinitionIndex = 75880;

class Class_2_7587A0F8DEF38968 : public ::Class_1_3713064DEE761936
{
public:
	::System::Action* Field_2_0; // 0x20

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
