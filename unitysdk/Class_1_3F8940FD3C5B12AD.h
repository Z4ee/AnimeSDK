#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/StoryLineSwitchReason.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_3F8940FD3C5B12AD_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x11684BF0)
#define CLASS_1_3F8940FD3C5B12AD_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11684DF0)
#define CLASS_1_3F8940FD3C5B12AD_METHOD_1_AABA580B8943B58F_OFFSET UNITYSDK_OFFSET(0x11684CB0)
#define CLASS_1_3F8940FD3C5B12AD_METHOD_1_BBB1333EA7D99D7D_OFFSET UNITYSDK_OFFSET(0x11684D90)
#define CLASS_1_3F8940FD3C5B12AD_METHOD_1_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0x11684E40)
#define CLASS_1_3F8940FD3C5B12AD__CTOR_OFFSET UNITYSDK_OFFSET(0x11684F80)

inline static constexpr unsigned int Class_1_3F8940FD3C5B12AD_TypeDefinitionIndex = 55490;

class Class_1_3F8940FD3C5B12AD : public ::System::Object
{
public:
	::System::UInt32 Field_1_3; // 0x10
	::RPG::Client::StoryLineSwitchReason Field_1_4; // 0x14
	::System::UInt32 Field_1_1; // 0x18
	::System::UInt32 Field_1_5; // 0x1C
	::System::UInt32 Field_1_0; // 0x20
	::System::UInt32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F8940FD3C5B12AD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F8940FD3C5B12AD_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_BBB1333EA7D99D7D(::RPG::Client::StoryLineSwitchReason a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::StoryLineSwitchReason, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3F8940FD3C5B12AD_METHOD_1_BBB1333EA7D99D7D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F8940FD3C5B12AD_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_E52129E82CD2D7F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F8940FD3C5B12AD_METHOD_1_E52129E82CD2D7F8_OFFSET))(this);
	}

	::System::UInt32 Method_1_AABA580B8943B58F()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F8940FD3C5B12AD_METHOD_1_AABA580B8943B58F_OFFSET))(this);
	}
};
