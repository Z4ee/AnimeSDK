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

#define RPG_GAMECORE_AVATARSERVANTSKILLROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x16FB03C0)
#define RPG_GAMECORE_AVATARSERVANTSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FB11F0)
#define RPG_GAMECORE_AVATARSERVANTSKILLROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x16FB2AE0)
#define RPG_GAMECORE_AVATARSERVANTSKILLROW_RESET_OFFSET UNITYSDK_OFFSET(0x16FB2B40)
#define RPG_GAMECORE_AVATARSERVANTSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16FB2BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarServantSkillRow_TypeDefinitionIndex = 11690;

	class AvatarServantSkillRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ShowStanceList; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x20
		::Il2CppArray<::System::UInt32>* SimpleExtraEffectIDList; // 0x28
		::System::String* SkillTriggerKey; // 0x30
		::Il2CppArray<::System::UInt32>* RatedRankID; // 0x38
		::Il2CppArray<::System::UInt32>* RatedSkillTreeID; // 0x40
		::System::String* UltraSkillIcon; // 0x48
		::System::String* SkillIcon; // 0x50
		::Il2CppArray<::RPG::GameCore::FixPoint>* SimpleParamList; // 0x58
		::RPG::GameCore::FixPoint SPAdd; // 0x60
		::RPG::Client::TextID SimpleSkillDesc; // 0x68
		::RPG::GameCore::FixPoint BPAdd; // 0x78
		::RPG::GameCore::FixPoint SPBase; // 0x80
		::RPG::Client::TextID SkillName; // 0x88
		::RPG::GameCore::FixPoint SPMultipleRatio; // 0x98
		::RPG::Client::TextID SkillDesc; // 0xA0
		::RPG::Client::TextID SkillNeed; // 0xB0
		::RPG::Client::TextID SkillTag; // 0xC0
		::RPG::GameCore::SkillEffect SkillEffect; // 0xD0
		::RPG::GameCore::AttackType AttackType; // 0xD4
		::RPG::GameCore::FixPoint BPNeed; // 0xD8
		::System::Boolean HideInUI; // 0xE0
		::System::Int32 StanceDamageDisplay; // 0xE4
		::RPG::GameCore::FixPoint SPNeed; // 0xE8
		::RPG::GameCore::AttackDamageType StanceDamageType; // 0xF0
		::System::UInt32 Level; // 0xF4
		::RPG::GameCore::FixPoint SkillComboValueDelta; // 0xF8
		::System::UInt32 SkillID; // 0x100
		::System::UInt32 MaxLevel; // 0x104
		::RPG::Client::TextID SkillTypeDesc; // 0x108
		::RPG::GameCore::FixPoint DelayRatio; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLROW_FROMTABLEOFFSET_OFFSET))(this, offsetData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarServantSkillRow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarServantSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLROW_FROMBINARYWITHOUTNEW_OFFSET))(array, val);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarServantSkillRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarServantSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
