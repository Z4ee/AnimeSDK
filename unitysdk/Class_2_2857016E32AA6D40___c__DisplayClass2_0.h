#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

class Class_2_2857016E32AA6D40;
namespace RPG::Client { class LuaUIController; }
namespace System { class Exception; }

#define CLASS_2_2857016E32AA6D40___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAEF18C0)
#define CLASS_2_2857016E32AA6D40___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0xAEF1E30)
#define CLASS_2_2857016E32AA6D40___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__1_OFFSET UNITYSDK_OFFSET(0xAEF1FF0)

inline static constexpr unsigned int Class_2_2857016E32AA6D40___c__DisplayClass2_0_TypeDefinitionIndex = 54639;

class Class_2_2857016E32AA6D40___c__DisplayClass2_0 : public ::System::Object
{
public:
	::Class_2_2857016E32AA6D40* __4__this; // 0x10
	::System::Guid transID; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2857016E32AA6D40___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__0(::RPG::Client::LuaUIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + CLASS_2_2857016E32AA6D40___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET))(this, a1);
	}

	::System::Void _OnTaskBegin_b__1(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_2857016E32AA6D40___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__1_OFFSET))(this, a1);
	}
};
