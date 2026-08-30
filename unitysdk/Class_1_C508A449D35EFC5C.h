#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/System/Object.h"

class Class_1_B92346939D75C03E;
class Class_1_F65DC6656DEF8159;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TimeRewindAudioConfig; }

#define CLASS_1_C508A449D35EFC5C_CLEAR_OFFSET UNITYSDK_OFFSET(0xBFB9DC0)
#define CLASS_1_C508A449D35EFC5C_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0xBFBA0C0)
#define CLASS_1_C508A449D35EFC5C_METHOD_1_52755B24F3E4DB89_OFFSET UNITYSDK_OFFSET(0xBFB9E70)
#define CLASS_1_C508A449D35EFC5C_METHOD_1_562DDA1DFAAFC7FB_OFFSET UNITYSDK_OFFSET(0xBFB9C60)
#define CLASS_1_C508A449D35EFC5C_METHOD_1_7D8D853E29665839_OFFSET UNITYSDK_OFFSET(0xBFB9FC0)
#define CLASS_1_C508A449D35EFC5C_METHOD_1_908CDC094010F209_OFFSET UNITYSDK_OFFSET(0xBFBA150)
#define CLASS_1_C508A449D35EFC5C_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xBFBA030)
#define CLASS_1_C508A449D35EFC5C_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xBFBA1F0)
#define CLASS_1_C508A449D35EFC5C_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBFBA240)
#define CLASS_1_C508A449D35EFC5C__CTOR_OFFSET UNITYSDK_OFFSET(0xBFBA280)

inline static constexpr unsigned int Class_1_C508A449D35EFC5C_TypeDefinitionIndex = 60893;

class Class_1_C508A449D35EFC5C : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x10
	::Class_1_B92346939D75C03E* BHNDHEGIJOO; // 0x18
	::Class_1_F65DC6656DEF8159* EPMPEFJBAPM; // 0x20
	::System::Single HBDJCFFDGDD; // 0x28
	::System::Single CNDJDPHMHNK; // 0x2C
	::RPG::GameCore::TimeRewindState PPNPFHEGGCI; // 0x30
	::System::Boolean MCAPIAKDMAA; // 0x34
	::System::Single KBDPMBDJIOF; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C508A449D35EFC5C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_562DDA1DFAAFC7FB(::RPG::GameCore::GameEntity* a1, ::Class_1_F65DC6656DEF8159* a2, ::RPG::GameCore::TimeRewindAudioConfig* a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_F65DC6656DEF8159*, ::RPG::GameCore::TimeRewindAudioConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C508A449D35EFC5C_METHOD_1_562DDA1DFAAFC7FB_OFFSET))(this, a1, a2, a3, a4, a5);
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

	::System::Void Method_1_908CDC094010F209()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C508A449D35EFC5C_METHOD_1_908CDC094010F209_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C508A449D35EFC5C_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C508A449D35EFC5C_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C508A449D35EFC5C_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}
};
