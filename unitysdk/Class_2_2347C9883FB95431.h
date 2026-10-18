#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_168.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class Promise; }

#define CLASS_2_2347C9883FB95431_ONENTERBEGIN_OFFSET UNITYSDK_OFFSET(0xB552700)
#define CLASS_2_2347C9883FB95431_ONEXITBEGIN_OFFSET UNITYSDK_OFFSET(0xB552590)
#define CLASS_2_2347C9883FB95431__CTOR_OFFSET UNITYSDK_OFFSET(0xB5524E0)
#define CLASS_2_2347C9883FB95431__ONEXITBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xB552750)

inline static constexpr unsigned int Class_2_2347C9883FB95431_TypeDefinitionIndex = 64619;

class Class_2_2347C9883FB95431 : public ::Class_1_43BD383C98B4C0C5_168
{
public:
	::RPG::Client::Promises::Promise* DBIFFNIBBDL; // 0x10
	::RPG::Client::UIController* IBLBKLNHKLL; // 0x18
	::RPG::Client::UIController* HKJLKMCDMGB; // 0x20
	::RPG::Client::LuaUIController* BBELBMLHHBG; // 0x28

	::System::Void _ctor(::RPG::Client::UIController* a1, ::RPG::Client::UIController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_2_2347C9883FB95431__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExitBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2347C9883FB95431_ONEXITBEGIN_OFFSET))(this);
	}

	::System::Void OnEnterBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2347C9883FB95431_ONENTERBEGIN_OFFSET))(this);
	}

	::System::Void _OnExitBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2347C9883FB95431__ONEXITBEGIN_B__1_0_OFFSET))(this);
	}
};
