#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_87;
namespace System { class String; }

#define CLASS_1_9C278B72C64825B8_METHOD_1_3DE5FC416803E583_OFFSET UNITYSDK_OFFSET(0x14421F60)
#define CLASS_1_9C278B72C64825B8_METHOD_1_72C29519ADAFAE98_OFFSET UNITYSDK_OFFSET(0x14421A80)
#define CLASS_1_9C278B72C64825B8_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x14421FD0)
#define CLASS_1_9C278B72C64825B8__CTOR_OFFSET UNITYSDK_OFFSET(0x14421FC0)

inline static constexpr unsigned int Class_1_9C278B72C64825B8_TypeDefinitionIndex = 70421;

class Class_1_9C278B72C64825B8 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C278B72C64825B8__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_72C29519ADAFAE98(::Class_2_208CC9941471731A_87* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_87*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_9C278B72C64825B8_METHOD_1_72C29519ADAFAE98_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_3DE5FC416803E583(::Class_2_208CC9941471731A_87* a1, ::System::Int32& a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_2_208CC9941471731A_87*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_9C278B72C64825B8_METHOD_1_3DE5FC416803E583_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9C278B72C64825B8_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}
};
