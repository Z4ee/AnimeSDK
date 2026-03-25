#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_310;
class Class_0_16E4307DCC419505_315;
class Class_2_B508B2BE5228EBE2;
namespace System { class Action; }

#define CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS143_0__ACTIVEPROFILEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x8B70DE0)
#define CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS143_0__ACTIVEPROFILEASYNC_B__1_OFFSET UNITYSDK_OFFSET(0x8B70E20)
#define CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS143_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8B6E800)

inline static constexpr unsigned int Class_2_B508B2BE5228EBE2___c__DisplayClass143_0_TypeDefinitionIndex = 39970;

class Class_2_B508B2BE5228EBE2___c__DisplayClass143_0 : public ::System::Object
{
public:
	::System::Action* onChangeFinish; // 0x10
	::Class_0_16E4307DCC419505_315* source; // 0x18
	::Class_2_B508B2BE5228EBE2* __4__this; // 0x20
	::Class_0_16E4307DCC419505_310* profileChangeAsyncHandle; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS143_0__CTOR_OFFSET))(this);
	}

	::System::Void _ActiveProfileAsync_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS143_0__ACTIVEPROFILEASYNC_B__0_OFFSET))(this);
	}

	::System::Void _ActiveProfileAsync_b__1(::System::Boolean v)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B508B2BE5228EBE2___C__DISPLAYCLASS143_0__ACTIVEPROFILEASYNC_B__1_OFFSET))(this, v);
	}
};
