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
class Class_0_16E4307DCC419505_255;
class Class_1_936F4381B4CBAB18;
class Class_1_E2AD61736FBEA606;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG::GameCore { class FiveDimBakedLevelConfig; }
namespace RPG::GameCore { class FiveDimBakedPresetConfig; }
namespace RPG::GameCore { class FiveDimGameConfig; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace System { class String; }

inline static constexpr unsigned int Struct_2_52A902145F5BE513_1_TypeDefinitionIndex = 40760;

struct alignas(8) Struct_2_52A902145F5BE513_1
{
	::RPG::GameCore::FiveDimGameConfig* Field_2_0; // 0x10
	::RPG::GameCore::LittleGameLevelConfig* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::RPG::GameCore::FiveDimBakedLevelConfig* Field_2_3; // 0x28
	::RPG::GameCore::FiveDimBakedPresetConfig* Field_2_4; // 0x30
	::Class_0_16E4307DCC419505_116* Field_2_5; // 0x38
	::Class_0_16E4307DCC419505_126* Field_2_6; // 0x40
	::System::UInt32 Field_2_7; // 0x48
	::System::UInt32 Field_2_8; // 0x4C
	::System::UInt32 Field_2_9; // 0x50
	::Struct_2_B6A3FA7992F9F37E_2 Field_2_10; // 0x54
	::Struct_2_B6A3FA7992F9F37E_3 Field_2_11; // 0x55
	::Struct_2_767494BA502A5B79 Field_2_12; // 0x58
	::RPG::GameCore::HoyoTagContainer* Field_2_13; // 0x60
	::System::Boolean Field_2_14; // 0x68
	::RPG::GameCore::FiveDimGameplayMode Field_2_15; // 0x6C
	::Class_1_936F4381B4CBAB18* Field_2_16; // 0x70
	::RPG::PoolDictionary_2<::System::UInt32, ::Struct_2_5CBC9F852A3C275F>* Field_2_17; // 0x78
	::RPG::PoolDictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_255*>* Field_2_18; // 0x80
	::System::Boolean Field_2_19; // 0x88
	::Class_1_E2AD61736FBEA606* Field_2_20; // 0x90
	::RPG::PoolHashSet_1<::System::UInt32>* Field_2_21; // 0x98
	::Struct_2_CFA12135DA0D972E Field_2_22; // 0xA0
	::Struct_2_CFA12135DA0D972E Field_2_23; // 0xB0
	::Struct_2_CFA12135DA0D972E Field_2_24; // 0xC0
	::Struct_2_CFA12135DA0D972E Field_2_25; // 0xD0
	::Struct_2_CFA12135DA0D972E Field_2_26; // 0xE0
	::Struct_2_CFA12135DA0D972E Field_2_27; // 0xF0
	::Struct_2_CFA12135DA0D972E Field_2_28; // 0x100
	::Struct_2_CFA12135DA0D972E Field_2_29; // 0x110
	::Struct_2_CFA12135DA0D972E Field_2_30; // 0x120
	::UnityEngine::Vector2 Field_2_31; // 0x130
	::Struct_2_CFA12135DA0D972E Field_2_32; // 0x138
	::RPG::GameCore::FiveDimPlayerResetMode Field_2_33; // 0x148
	::RPG::GameCore::FiveDimPlayerResetSweepDirection Field_2_34; // 0x14C
	::System::Single Field_2_35; // 0x150
	::System::Single Field_2_36; // 0x154
	::System::UInt32 Field_2_37; // 0x158
	::System::Int32 Field_2_38; // 0x15C
	::System::Single Field_2_39; // 0x160
	::System::Boolean Field_2_40; // 0x164
	::RPG::Client::LittleGame::FiveDim::BlockAutoRebornReason Field_2_41; // 0x168
	::Struct_2_CFA12135DA0D972E Field_2_42; // 0x170
	::RPG::Client::LittleGame::FiveDim::PlayerMuteInputReason Field_2_43; // 0x180
	::RPG::Client::LittleGame::FiveDim::PlayerMuteSkillReason Field_2_44; // 0x184
};
