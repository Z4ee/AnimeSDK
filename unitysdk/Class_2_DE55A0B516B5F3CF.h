#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_2.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_BD800F5B29A08E1F;
namespace RPG::GameCore { class CheckRandomChanceAxis; }

#define CLASS_2_DE55A0B516B5F3CF_METHOD_2_4B1627D78D57FD39_OFFSET UNITYSDK_OFFSET(0x105488F0)
#define CLASS_2_DE55A0B516B5F3CF_METHOD_2_88175E62B83B731A_OFFSET UNITYSDK_OFFSET(0x10548840)
#define CLASS_2_DE55A0B516B5F3CF__CTOR_OFFSET UNITYSDK_OFFSET(0x10548830)

inline static constexpr unsigned int Class_2_DE55A0B516B5F3CF_TypeDefinitionIndex = 43450;

class Class_2_DE55A0B516B5F3CF : public ::Class_1_F9FBCC956DFCF137_2
{
public:
	::RPG::GameCore::CheckRandomChanceAxis* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::CheckRandomChanceAxis* a1, ::Class_1_BD800F5B29A08E1F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckRandomChanceAxis*, ::Class_1_BD800F5B29A08E1F*))((::PBYTE)hIl2Cpp + CLASS_2_DE55A0B516B5F3CF__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_88175E62B83B731A()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE55A0B516B5F3CF_METHOD_2_88175E62B83B731A_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_4B1627D78D57FD39()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE55A0B516B5F3CF_METHOD_2_4B1627D78D57FD39_OFFSET))(this);
	}
};
