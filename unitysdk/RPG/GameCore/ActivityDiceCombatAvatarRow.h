#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYDICECOMBATAVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C9F2690)
#define RPG_GAMECORE_ACTIVITYDICECOMBATAVATARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F2DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityDiceCombatAvatarRow_TypeDefinitionIndex = 11219;

	class ActivityDiceCombatAvatarRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RecommendDiceIDList; // 0x10
		::System::String* AttackAnimation; // 0x18
		::System::String* AttackEffectEnemyPath; // 0x20
		::System::String* AttackJson; // 0x28
		::Il2CppArray<::System::UInt32>* DiceCountPerRare; // 0x30
		::Il2CppArray<::System::UInt32>* DiceIDPerRare; // 0x38
		::System::String* ImgPath; // 0x40
		::System::String* HighLevelBGImgPath; // 0x48
		::System::String* ImgPathHeadIcon; // 0x50
		::System::String* HighLevelBGImgPathUI3D; // 0x58
		::System::String* AttackEffectPath; // 0x60
		::System::String* ImgPathUI3D; // 0x68
		::System::String* ShopIcon; // 0x70
		::System::String* FinalAttackVoice; // 0x78
		::System::UInt32 ColorfulDiceAvailableCount; // 0x80
		::System::UInt32 Rare; // 0x84
		::RPG::Client::TextID Name; // 0x88
		::System::UInt32 SkillID; // 0x98
		::System::UInt32 AttackDiceNumber; // 0x9C
		::System::UInt32 HP; // 0xA0
		::System::UInt32 DiceAvatarID; // 0xA4
		::System::UInt32 DefendDiceNumber; // 0xA8
		::System::Boolean IsCollection; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATAVATARROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityDiceCombatAvatarRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityDiceCombatAvatarRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATAVATARROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
