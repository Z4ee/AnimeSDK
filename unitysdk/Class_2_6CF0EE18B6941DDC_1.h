#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_155.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class Promise; }

#define CLASS_2_6CF0EE18B6941DDC_1_ONENTERBEGIN_OFFSET UNITYSDK_OFFSET(0x152DCDE0)
#define CLASS_2_6CF0EE18B6941DDC_1_ONEXITBEGIN_OFFSET UNITYSDK_OFFSET(0x152DCC70)
#define CLASS_2_6CF0EE18B6941DDC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x152DCBE0)
#define CLASS_2_6CF0EE18B6941DDC_1__ONEXITBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x152DCE30)

inline static constexpr unsigned int Class_2_6CF0EE18B6941DDC_1_TypeDefinitionIndex = 63142;

class Class_2_6CF0EE18B6941DDC_1 : public ::Class_1_43BD383C98B4C0C5_155
{
public:
	::RPG::Client::UIController* Field_2_0; // 0x10
	::RPG::Client::Promises::Promise* Field_2_1; // 0x18
	::RPG::Client::LuaUIController* Field_2_2; // 0x20
	::RPG::Client::UIController* Field_2_3; // 0x28

	::System::Void _ctor(::RPG::Client::UIController* a1, ::RPG::Client::UIController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_2_6CF0EE18B6941DDC_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExitBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CF0EE18B6941DDC_1_ONEXITBEGIN_OFFSET))(this);
	}

	::System::Void OnEnterBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CF0EE18B6941DDC_1_ONENTERBEGIN_OFFSET))(this);
	}

	::System::Void _OnExitBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CF0EE18B6941DDC_1__ONEXITBEGIN_B__1_0_OFFSET))(this);
	}
};
