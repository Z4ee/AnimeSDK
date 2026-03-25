#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/System/Object.h"

class Class_1_2533213D74484D5C;
class Class_1_87900BD0B006DCD0;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TimeRewindAudioConfig; }

#define CLASS_1_C508A449D35EFC5C_CLEAR_OFFSET UNITYSDK_OFFSET(0x99D1EF0)
#define CLASS_1_C508A449D35EFC5C_METHOD_1_52755B24F3E4DB89_OFFSET UNITYSDK_OFFSET(0x99D1FA0)
#define CLASS_1_C508A449D35EFC5C_METHOD_1_562DDA1DFAAFC7FB_OFFSET UNITYSDK_OFFSET(0x99D1D90)
#define CLASS_1_C508A449D35EFC5C_METHOD_1_7D8D853E29665839_OFFSET UNITYSDK_OFFSET(0x99D20F0)
#define CLASS_1_C508A449D35EFC5C_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x99D2160)
#define CLASS_1_C508A449D35EFC5C_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x99D2320)
#define CLASS_1_C508A449D35EFC5C_METHOD_1_B6430A9CA64DFF87_OFFSET UNITYSDK_OFFSET(0x99D21F0)
#define CLASS_1_C508A449D35EFC5C_METHOD_1_BF9C25E762BD53B3_OFFSET UNITYSDK_OFFSET(0x99D2280)
#define CLASS_1_C508A449D35EFC5C_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x99D2370)
#define CLASS_1_C508A449D35EFC5C__CTOR_OFFSET UNITYSDK_OFFSET(0x99D23B0)

inline static constexpr unsigned int Class_1_C508A449D35EFC5C_TypeDefinitionIndex = 49260;

class Class_1_C508A449D35EFC5C : public ::System::Object
{
public:
	::Class_1_2533213D74484D5C* Field_1_2; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::Class_1_87900BD0B006DCD0* Field_1_0; // 0x20
	::System::Single Field_1_4; // 0x28
	::System::Boolean Field_1_7; // 0x2C
	::System::Single Field_1_6; // 0x30
	::RPG::GameCore::TimeRewindState Field_1_3; // 0x34
	::System::Single Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C508A449D35EFC5C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_562DDA1DFAAFC7FB(::RPG::GameCore::GameEntity* a1, ::Class_1_2533213D74484D5C* a2, ::RPG::GameCore::TimeRewindAudioConfig* a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_2533213D74484D5C*, ::RPG::GameCore::TimeRewindAudioConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C508A449D35EFC5C_METHOD_1_562DDA1DFAAFC7FB_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C508A449D35EFC5C_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_52755B24F3E4DB89(::System::Single a1, ::RPG::GameCore::TimeRewindState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + CLASS_1_C508A449D35EFC5C_METHOD_1_52755B24F3E4DB89_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7D8D853E29665839(::RPG::GameCore::TimeRewindState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + CLASS_1_C508A449D35EFC5C_METHOD_1_7D8D853E29665839_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C508A449D35EFC5C_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_BF9C25E762BD53B3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C508A449D35EFC5C_METHOD_1_BF9C25E762BD53B3_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C508A449D35EFC5C_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C508A449D35EFC5C_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_B6430A9CA64DFF87(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C508A449D35EFC5C_METHOD_1_B6430A9CA64DFF87_OFFSET))(this, a1);
	}
};
