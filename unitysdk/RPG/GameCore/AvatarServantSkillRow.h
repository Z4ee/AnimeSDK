#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AVATARSERVANTSKILLROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1B2D4310)
#define RPG_GAMECORE_AVATARSERVANTSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B2D5120)
#define RPG_GAMECORE_AVATARSERVANTSKILLROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1B2D6A30)
#define RPG_GAMECORE_AVATARSERVANTSKILLROW_RESET_OFFSET UNITYSDK_OFFSET(0x1B2D6A90)
#define RPG_GAMECORE_AVATARSERVANTSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2D6B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarServantSkillRow_TypeDefinitionIndex = 12716;

	class AvatarServantSkillRow : public ::System::Object
	{
	public:
		::System::String* SkillIcon; // 0x10
		::Il2CppArray<::System::UInt32>* SimpleExtraEffectIDList; // 0x18
		::Il2CppArray<::System::UInt32>* RatedRankID; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* SimpleParamList; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* ShowStanceList; // 0x30
		::System::String* SkillTriggerKey; // 0x38
		::Il2CppArray<::System::UInt32>* RatedSkillTreeID; // 0x40
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x48
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x50
		::System::String* UltraSkillIcon; // 0x58
		::RPG::GameCore::FixPoint SPBase; // 0x60
		::RPG::GameCore::FixPoint SPMultipleRatio; // 0x68
		::RPG::Client::TextID SkillTag; // 0x70
		::RPG::Client::TextID SkillNeed; // 0x80
		::System::Boolean HideInUI; // 0x90
		::RPG::GameCore::AttackDamageType StanceDamageType; // 0x94
		::RPG::GameCore::FixPoint SPAdd; // 0x98
		::RPG::Client::TextID SkillTypeDesc; // 0xA0
		::RPG::GameCore::FixPoint BPNeed; // 0xB0
		::RPG::GameCore::SkillEffect SkillEffect; // 0xB8
		::RPG::GameCore::AttackType AttackType; // 0xBC
		::RPG::GameCore::FixPoint SPNeed; // 0xC0
		::RPG::GameCore::FixPoint SkillComboValueDelta; // 0xC8
		::System::UInt32 Level; // 0xD0
		::System::Int32 StanceDamageDisplay; // 0xD4
		::RPG::Client::TextID SkillDesc; // 0xD8
		::RPG::Client::TextID SkillName; // 0xE8
		::RPG::GameCore::FixPoint DelayRatio; // 0xF8
		::RPG::Client::TextID SimpleSkillDesc; // 0x100
		::RPG::GameCore::FixPoint BPAdd; // 0x110
		::System::UInt32 SkillID; // 0x118
		::System::UInt32 MaxLevel; // 0x11C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarServantSkillRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarServantSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarServantSkillRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarServantSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
