#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/StoryLineSwitchReason.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_3F8940FD3C5B12AD_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x19AD5740)
#define CLASS_1_3F8940FD3C5B12AD_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x19AD59D0)
#define CLASS_1_3F8940FD3C5B12AD_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x19AD5A20)
#define CLASS_1_3F8940FD3C5B12AD_METHOD_1_AABA580B8943B58F_OFFSET UNITYSDK_OFFSET(0x19AD5890)
#define CLASS_1_3F8940FD3C5B12AD_METHOD_1_BBB1333EA7D99D7D_OFFSET UNITYSDK_OFFSET(0x19AD5970)
#define CLASS_1_3F8940FD3C5B12AD__CTOR_OFFSET UNITYSDK_OFFSET(0x19AD5BC0)

inline static constexpr unsigned int Class_1_3F8940FD3C5B12AD_TypeDefinitionIndex = 67991;

class Class_1_3F8940FD3C5B12AD : public ::System::Object
{
public:
	::System::UInt32 AMANDGCGBCC; // 0x10
	::System::UInt32 AMONCEBIPLM; // 0x14
	::System::UInt32 EMGKHLEIMKL; // 0x18
	::System::UInt32 HBFBKIEEEKA; // 0x1C
	::System::UInt32 APANKMLKKPF; // 0x20
	::RPG::Client::StoryLineSwitchReason LADCPOJOHGE; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F8940FD3C5B12AD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F8940FD3C5B12AD_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_BBB1333EA7D99D7D(::RPG::Client::StoryLineSwitchReason a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::StoryLineSwitchReason, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3F8940FD3C5B12AD_METHOD_1_BBB1333EA7D99D7D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F8940FD3C5B12AD_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F8940FD3C5B12AD_METHOD_1_937F8473216A3162_OFFSET))(this);
	}

	::System::UInt32 Method_1_AABA580B8943B58F()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F8940FD3C5B12AD_METHOD_1_AABA580B8943B58F_OFFSET))(this);
	}
};
