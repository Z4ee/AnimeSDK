#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E559374AC4E5AD13.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionWaitSleep; }

#define CLASS_2_412B99396984B289_METHOD_2_ABE7BAD1290F385D_OFFSET UNITYSDK_OFFSET(0x13E8D9D0)
#define CLASS_2_412B99396984B289__CTOR_OFFSET UNITYSDK_OFFSET(0x13E8D9C0)

inline static constexpr unsigned int Class_2_412B99396984B289_TypeDefinitionIndex = 35852;

class Class_2_412B99396984B289 : public ::Class_1_E559374AC4E5AD13
{
public:
	::RPG::GameCore::CakeRaceActionWaitSleep* Field_2_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionWaitSleep* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionWaitSleep*))((::PBYTE)hIl2Cpp + CLASS_2_412B99396984B289__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_ABE7BAD1290F385D(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_412B99396984B289_METHOD_2_ABE7BAD1290F385D_OFFSET))(this, a1, a2, a3);
	}
};
