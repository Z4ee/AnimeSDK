#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/BlockAutoRebornReason.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PlayerMuteInputReason.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PlayerMuteSkillReason.h"
#include "unitysdk/RPG/GameCore/FiveDimGameplayMode.h"
#include "unitysdk/RPG/GameCore/FiveDimPlayerResetMode.h"
#include "unitysdk/RPG/GameCore/FiveDimPlayerResetSweepDirection.h"
#include "unitysdk/Struct_2_5CBC9F852A3C275F.h"
#include "unitysdk/Struct_2_767494BA502A5B79.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_2.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_3.h"
#include "unitysdk/Struct_2_CFA12135DA0D972E.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_116;
class Class_0_16E4307DCC419505_126;
class Class_0_16E4307DCC419505_262;
class Class_1_936F4381B4CBAB18;
class Class_1_D7FA4888C098D789;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG::GameCore { class FiveDimBakedLevelConfig; }
namespace RPG::GameCore { class FiveDimBakedPresetConfig; }
namespace RPG::GameCore { class FiveDimGameConfig; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace System { class String; }

inline static constexpr unsigned int Struct_2_52A902145F5BE513_1_TypeDefinitionIndex = 41714;

struct alignas(8) Struct_2_52A902145F5BE513_1
{
	::RPG::GameCore::FiveDimGameConfig* DPHDFKHIMEC; // 0x10
	::RPG::GameCore::LittleGameLevelConfig* PDKOBKPIBPN; // 0x18
	::System::String* JCBLMHBGPHL; // 0x20
	::RPG::GameCore::FiveDimBakedLevelConfig* KDJGGCDHNIA; // 0x28
	::RPG::GameCore::FiveDimBakedPresetConfig* AAANNFDBOMK; // 0x30
	::Class_0_16E4307DCC419505_116* GFCIMINHAMP; // 0x38
	::Class_0_16E4307DCC419505_126* GPKCGOLOJKC; // 0x40
	::System::UInt32 FOAIMPPILHN; // 0x48
	::System::UInt32 MEDGDOLKKCF; // 0x4C
	::System::UInt32 JPGBNMIAIBK; // 0x50
	::Struct_2_B6A3FA7992F9F37E_2 JKHBACLKBNK; // 0x54
	::Struct_2_B6A3FA7992F9F37E_3 FLFAHKMPGLI; // 0x55
	::Struct_2_767494BA502A5B79 DKGPOBFPNFP; // 0x58
	::RPG::GameCore::HoyoTagContainer* DPNENLKAGFL; // 0x60
	::System::Boolean APFNJLIEMKM; // 0x68
	::RPG::GameCore::FiveDimGameplayMode OKHOLBIIGJH; // 0x6C
	::Class_1_936F4381B4CBAB18* LEKJJALGAEK; // 0x70
	::RPG::PoolDictionary_2<::System::UInt32, ::Struct_2_5CBC9F852A3C275F>* AKJDGDAIMII; // 0x78
	::RPG::PoolDictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_262*>* IOACCFHDBMH; // 0x80
	::System::Boolean MKFAKONKILE; // 0x88
	::Class_1_D7FA4888C098D789* FIHNFDHJGFF; // 0x90
	::RPG::PoolHashSet_1<::System::UInt32>* GJALDMOMJIG; // 0x98
	::Struct_2_CFA12135DA0D972E JIAMNDFEIDP; // 0xA0
	::Struct_2_CFA12135DA0D972E FFGJKJAAIOC; // 0xB0
	::Struct_2_CFA12135DA0D972E BDMAJKCCBIK; // 0xC0
	::Struct_2_CFA12135DA0D972E NKEFKONFKNK; // 0xD0
	::Struct_2_CFA12135DA0D972E IPGJEGAAAPB; // 0xE0
	::Struct_2_CFA12135DA0D972E LNIFFAONOPM; // 0xF0
	::Struct_2_CFA12135DA0D972E MNLFCOJAKLG; // 0x100
	::Struct_2_CFA12135DA0D972E DABKPBKGNJE; // 0x110
	::Struct_2_CFA12135DA0D972E FKPKGNOKPLF; // 0x120
	::UnityEngine::Vector2 BMIGFAAJMEL; // 0x130
	::Struct_2_CFA12135DA0D972E MMCPCPKALCB; // 0x138
	::RPG::GameCore::FiveDimPlayerResetMode PPBNLEBBKIA; // 0x148
	::RPG::GameCore::FiveDimPlayerResetSweepDirection DGEECKKDACO; // 0x14C
	::System::Single LFJCFELCEAJ; // 0x150
	::System::Single NJJLCFIBLMK; // 0x154
	::System::UInt32 ACCJKGEKHKP; // 0x158
	::System::Int32 MDPGLEDOIEG; // 0x15C
	::System::Single PGKFGKELKDI; // 0x160
	::System::Boolean DIEFMGHPCKP; // 0x164
	::RPG::Client::LittleGame::FiveDim::BlockAutoRebornReason PKEOIFEIGJC; // 0x168
	::Struct_2_CFA12135DA0D972E HOGODEEOBKI; // 0x170
	::RPG::Client::LittleGame::FiveDim::PlayerMuteInputReason CCKAPMKFNKC; // 0x180
	::RPG::Client::LittleGame::FiveDim::PlayerMuteSkillReason IJAJPGEJJCE; // 0x184
	::System::Boolean MAEGOCFLNJB; // 0x188
};
