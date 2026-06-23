#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9FAA3DCCFE14DB8_21.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_315.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }

#define CLASS_2_208CC9941471731A_1093_METHOD_2_F9F45BC372292C87_OFFSET UNITYSDK_OFFSET(0x18A16A10)
#define CLASS_2_208CC9941471731A_1093__CTOR_OFFSET UNITYSDK_OFFSET(0x18A16A00)

inline static constexpr unsigned int Class_2_208CC9941471731A_1093_TypeDefinitionIndex = 17715;

class Class_2_208CC9941471731A_1093 : public ::Class_1_D9FAA3DCCFE14DB8_21
{
public:
	::System::Void _ctor(::Struct_2_3E75877A2888D88A_315 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_315, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_1093__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_F9F45BC372292C87()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_1093_METHOD_2_F9F45BC372292C87_OFFSET))(this);
	}
};
