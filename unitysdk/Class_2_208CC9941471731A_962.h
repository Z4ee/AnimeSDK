#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9FAA3DCCFE14DB8_125.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_899.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }

#define CLASS_2_208CC9941471731A_962_METHOD_2_F9F45BC372292C87_OFFSET UNITYSDK_OFFSET(0x16742D60)
#define CLASS_2_208CC9941471731A_962__CTOR_OFFSET UNITYSDK_OFFSET(0x16742D50)

inline static constexpr unsigned int Class_2_208CC9941471731A_962_TypeDefinitionIndex = 17981;

class Class_2_208CC9941471731A_962 : public ::Class_1_D9FAA3DCCFE14DB8_125
{
public:
	::System::Void _ctor(::Struct_2_3E75877A2888D88A_899 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_899, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_962__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_F9F45BC372292C87()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_962_METHOD_2_F9F45BC372292C87_OFFSET))(this);
	}
};
