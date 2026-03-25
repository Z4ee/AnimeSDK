#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYDICECOMBATAVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16EA6C50)
#define RPG_GAMECORE_ACTIVITYDICECOMBATAVATARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16EA73D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityDiceCombatAvatarRow_TypeDefinitionIndex = 10514;

	class ActivityDiceCombatAvatarRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* DiceCountPerRare; // 0x10
		::System::String* HighLevelBGImgPathUI3D; // 0x18
		::System::String* FinalAttackVoice; // 0x20
		::Il2CppArray<::System::UInt32>* DiceIDPerRare; // 0x28
		::System::String* ImgPathHeadIcon; // 0x30
		::System::String* HighLevelBGImgPath; // 0x38
		::System::String* ImgPath; // 0x40
		::System::String* AttackAnimation; // 0x48
		::System::String* AttackJson; // 0x50
		::System::String* AttackEffectPath; // 0x58
		::System::String* ImgPathUI3D; // 0x60
		::System::String* AttackEffectEnemyPath; // 0x68
		::System::String* ShopIcon; // 0x70
		::Il2CppArray<::System::UInt32>* RecommendDiceIDList; // 0x78
		::System::Boolean IsCollection; // 0x80
		::System::UInt32 DefendDiceNumber; // 0x84
		::System::UInt32 HP; // 0x88
		::System::UInt32 AttackDiceNumber; // 0x8C
		::System::UInt32 ColorfulDiceAvailableCount; // 0x90
		::System::UInt32 Rare; // 0x94
		::RPG::Client::TextID Name; // 0x98
		::System::UInt32 DiceAvatarID; // 0xA8
		::System::UInt32 SkillID; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATAVATARROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityDiceCombatAvatarRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityDiceCombatAvatarRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATAVATARROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
