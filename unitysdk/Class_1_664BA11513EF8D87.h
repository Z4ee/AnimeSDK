#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinSwitchDayTalker.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_664BA11513EF8D87_METHOD_1_13A4856CD0BBDB3F_OFFSET UNITYSDK_OFFSET(0x1C91FD10)
#define CLASS_1_664BA11513EF8D87__CTOR_OFFSET UNITYSDK_OFFSET(0x1C91FF10)

inline static constexpr unsigned int Class_1_664BA11513EF8D87_TypeDefinitionIndex = 11567;

class Class_1_664BA11513EF8D87 : public ::System::Object
{
public:
	::System::UInt32 GNIFLCBGAAA; // 0x10
	::System::UInt32 EOAGGGKKHLN; // 0x14
	::RPG::GameCore::FateRinSwitchDayTalker PFNEMONCJFE; // 0x18
	::RPG::Client::TextID IBGNNBCPHFO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_664BA11513EF8D87__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_13A4856CD0BBDB3F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_664BA11513EF8D87*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_664BA11513EF8D87*&))((::PBYTE)hIl2Cpp + CLASS_1_664BA11513EF8D87_METHOD_1_13A4856CD0BBDB3F_OFFSET))(a1, a2);
	}
};
