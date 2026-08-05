#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_752;

#define CLASS_1_F4B9B711B59FF7D4_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x19458000)
#define CLASS_1_F4B9B711B59FF7D4_METHOD_1_6D1FE16247B2240D_OFFSET UNITYSDK_OFFSET(0x19458110)
#define CLASS_1_F4B9B711B59FF7D4__CTOR_OFFSET UNITYSDK_OFFSET(0x19457FF0)

inline static constexpr unsigned int Class_1_F4B9B711B59FF7D4_TypeDefinitionIndex = 73315;

class Class_1_F4B9B711B59FF7D4 : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_752* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4B9B711B59FF7D4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4B9B711B59FF7D4_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Boolean Method_1_6D1FE16247B2240D(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F4B9B711B59FF7D4_METHOD_1_6D1FE16247B2240D_OFFSET))(this, a1);
	}
};
