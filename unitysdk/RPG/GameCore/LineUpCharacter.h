#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_13.h"
#include "unitysdk/RPG/GameCore/AvatarRowWrapperDeriveType.h"
#include "unitysdk/RPG/GameCore/AvatarRowWrapperExtraParam.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_4AAB34DEAFC894B3;
class Class_1_7AB88D713F5121B3_49;
class Class_1_EA6B9573C4BF1DD5;
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace System { class String; }

#define RPG_GAMECORE_LINEUPCHARACTER_DEEPCOPY_OFFSET UNITYSDK_OFFSET(0xE6A4D90)
#define RPG_GAMECORE_LINEUPCHARACTER_GETAVATARROWWRAPPEREXTRAPARAM_OFFSET UNITYSDK_OFFSET(0xE6A5280)
#define RPG_GAMECORE_LINEUPCHARACTER_GET_AVATARDERIVETYPE_OFFSET UNITYSDK_OFFSET(0xE6A5230)
#define RPG_GAMECORE_LINEUPCHARACTER_GET_CHARACTERSPRATIO_OFFSET UNITYSDK_OFFSET(0xE6A51E0)
#define RPG_GAMECORE_LINEUPCHARACTER_RESET_OFFSET UNITYSDK_OFFSET(0xE6A4D40)
#define RPG_GAMECORE_LINEUPCHARACTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE6A5390)
#define RPG_GAMECORE_LINEUPCHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0xE6A4CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LineUpCharacter_TypeDefinitionIndex = 56518;

	class LineUpCharacter : public ::System::Object
	{
	public:
		::Class_1_EA6B9573C4BF1DD5* BattleRelicItemModule; // 0x10
		::Il2CppArray<::Class_1_4AAB34DEAFC894B3*>* BattleEquipmentList; // 0x18
		::Il2CppArray<::Class_1_7AB88D713F5121B3_49*>* ChangedSkillTreePointList; // 0x20
		::Il2CppArray<::Class_1_7AB88D713F5121B3_49*>* SkillTreePointList; // 0x28
		::RPG::GameCore::BattleGridFightAvatarData* BattleGridAvatarData; // 0x30
		::Il2CppArray<::System::UInt32>* SpiritPassiveList; // 0x38
		::RPG::GameCore::FixPoint CharacterSP_Numerator; // 0x40
		::RPG::GameCore::FixPoint CharacterHPRatio; // 0x48
		::System::UInt32 Index; // 0x50
		::RPG::GameCore::FixPoint CharacterSP_Denominator; // 0x58
		::System::UInt32 TotalPower; // 0x60
		::System::UInt32 CharacterID; // 0x64
		::System::UInt32 CharacterRank; // 0x68
		::System::UInt32 WorldLevel; // 0x6C
		::System::UInt32 EnhancedID; // 0x70
		::System::UInt32 CharacterLevel; // 0x74
		::System::UInt32 AssistUid; // 0x78
		::Enum_3_0A3761FE34514D6C_13 SpiritLineupType; // 0x7C
		::Enum_3_01618AD0437C8486 CharacterAvatarType; // 0x80
		::System::UInt32 CharacterRowIndex; // 0x84
		::System::UInt32 CharacterPromotion; // 0x88
		::System::UInt32 SpecialAvatarID; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCHARACTER__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCHARACTER_RESET_OFFSET))(this);
		}

		::RPG::GameCore::LineUpCharacter* DeepCopy()
		{
			return ((::RPG::GameCore::LineUpCharacter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCHARACTER_DEEPCOPY_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CharacterSPRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCHARACTER_GET_CHARACTERSPRATIO_OFFSET))(this);
		}

		::RPG::GameCore::AvatarRowWrapperDeriveType get_AvatarDeriveType()
		{
			return ((::RPG::GameCore::AvatarRowWrapperDeriveType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCHARACTER_GET_AVATARDERIVETYPE_OFFSET))(this);
		}

		::RPG::GameCore::AvatarRowWrapperExtraParam GetAvatarRowWrapperExtraParam()
		{
			return ((::RPG::GameCore::AvatarRowWrapperExtraParam(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCHARACTER_GETAVATARROWWRAPPEREXTRAPARAM_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCHARACTER_TOSTRING_OFFSET))(this);
		}
	};
}
