#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_168.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class Promise; }

#define CLASS_2_2347C9883FB95431_1_ONENTERBEGIN_OFFSET UNITYSDK_OFFSET(0xB75D500)
#define CLASS_2_2347C9883FB95431_1_ONEXITBEGIN_OFFSET UNITYSDK_OFFSET(0xB75D390)
#define CLASS_2_2347C9883FB95431_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB75D2E0)
#define CLASS_2_2347C9883FB95431_1__ONEXITBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xB75D550)

inline static constexpr unsigned int Class_2_2347C9883FB95431_1_TypeDefinitionIndex = 66081;

class Class_2_2347C9883FB95431_1 : public ::Class_1_43BD383C98B4C0C5_168
{
public:
	::RPG::Client::LuaUIController* BBELBMLHHBG; // 0x10
	::RPG::Client::Promises::Promise* DBIFFNIBBDL; // 0x18
	::RPG::Client::UIController* HKJLKMCDMGB; // 0x20
	::RPG::Client::UIController* IBLBKLNHKLL; // 0x28

	::System::Void _ctor(::RPG::Client::UIController* a1, ::RPG::Client::UIController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_2_2347C9883FB95431_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExitBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2347C9883FB95431_1_ONEXITBEGIN_OFFSET))(this);
	}

	::System::Void OnEnterBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2347C9883FB95431_1_ONENTERBEGIN_OFFSET))(this);
	}

	::System::Void _OnExitBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2347C9883FB95431_1__ONEXITBEGIN_B__1_0_OFFSET))(this);
	}
};
