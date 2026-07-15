#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinSwitchDayTalker.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_664BA11513EF8D87_METHOD_1_13A4856CD0BBDB3F_OFFSET UNITYSDK_OFFSET(0x1B210070)
#define CLASS_1_664BA11513EF8D87__CTOR_OFFSET UNITYSDK_OFFSET(0x1B210270)

inline static constexpr unsigned int Class_1_664BA11513EF8D87_TypeDefinitionIndex = 11178;

class Class_1_664BA11513EF8D87 : public ::System::Object
{
public:
	::RPG::Client::TextID Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x20
	::RPG::GameCore::FateRinSwitchDayTalker Field_1_2; // 0x24
	::System::UInt32 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_664BA11513EF8D87__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_13A4856CD0BBDB3F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_664BA11513EF8D87*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_664BA11513EF8D87*&))((::PBYTE)hIl2Cpp + CLASS_1_664BA11513EF8D87_METHOD_1_13A4856CD0BBDB3F_OFFSET))(a1, a2);
	}
};
