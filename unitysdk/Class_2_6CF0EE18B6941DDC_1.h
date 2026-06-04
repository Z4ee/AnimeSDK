#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_150.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class Promise; }

#define CLASS_2_6CF0EE18B6941DDC_1_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xA5D9E90)
#define CLASS_2_6CF0EE18B6941DDC_1_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA5D9E30)
#define CLASS_2_6CF0EE18B6941DDC_1_METHOD_2_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0xA5D9C50)
#define CLASS_2_6CF0EE18B6941DDC_1_METHOD_2_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0xA5D9DC0)
#define CLASS_2_6CF0EE18B6941DDC_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA5D9BD0)
#define CLASS_2_6CF0EE18B6941DDC_1__ONEXITBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xA5D9E10)

inline static constexpr unsigned int Class_2_6CF0EE18B6941DDC_1_TypeDefinitionIndex = 61780;

class Class_2_6CF0EE18B6941DDC_1 : public ::Class_1_43BD383C98B4C0C5_150
{
public:
	::RPG::Client::Promises::Promise* Field_2_0; // 0x10
	::RPG::Client::UIController* Field_2_1; // 0x18
	::RPG::Client::LuaUIController* Field_2_2; // 0x20
	::RPG::Client::UIController* Field_2_3; // 0x28

	::System::Void _ctor(::RPG::Client::UIController* a1, ::RPG::Client::UIController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_2_6CF0EE18B6941DDC_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7A097E7EF929F289()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CF0EE18B6941DDC_1_METHOD_2_7A097E7EF929F289_OFFSET))(this);
	}

	::System::Void Method_2_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CF0EE18B6941DDC_1_METHOD_2_913947B6596EB50A_OFFSET))(this);
	}

	::System::Void _OnExitBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CF0EE18B6941DDC_1__ONEXITBEGIN_B__1_0_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CF0EE18B6941DDC_1_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CF0EE18B6941DDC_1_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};
