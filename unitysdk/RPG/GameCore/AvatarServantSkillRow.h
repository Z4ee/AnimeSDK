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

#define RPG_GAMECORE_AVATARSERVANTSKILLROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1CE4E360)
#define RPG_GAMECORE_AVATARSERVANTSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE4F170)
#define RPG_GAMECORE_AVATARSERVANTSKILLROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1CE50A80)
#define RPG_GAMECORE_AVATARSERVANTSKILLROW_RESET_OFFSET UNITYSDK_OFFSET(0x1CE50AE0)
#define RPG_GAMECORE_AVATARSERVANTSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE50B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarServantSkillRow_TypeDefinitionIndex = 12716;

	class AvatarServantSkillRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* SimpleParamList; // 0x10
		::System::String* SkillIcon; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* ShowStanceList; // 0x20
		::Il2CppArray<::System::UInt32>* RatedRankID; // 0x28
		::System::String* UltraSkillIcon; // 0x30
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x38
		::Il2CppArray<::System::UInt32>* SimpleExtraEffectIDList; // 0x40
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x48
		::Il2CppArray<::System::UInt32>* RatedSkillTreeID; // 0x50
		::System::String* SkillTriggerKey; // 0x58
		::RPG::GameCore::FixPoint SPMultipleRatio; // 0x60
		::RPG::GameCore::FixPoint SPAdd; // 0x68
		::System::UInt32 MaxLevel; // 0x70
		::RPG::GameCore::AttackDamageType StanceDamageType; // 0x74
		::System::UInt32 SkillID; // 0x78
		::RPG::GameCore::SkillEffect SkillEffect; // 0x7C
		::RPG::Client::TextID SkillTag; // 0x80
		::System::Boolean HideInUI; // 0x90
		::System::Int32 StanceDamageDisplay; // 0x94
		::RPG::GameCore::FixPoint DelayRatio; // 0x98
		::RPG::Client::TextID SkillDesc; // 0xA0
		::RPG::GameCore::FixPoint SkillComboValueDelta; // 0xB0
		::RPG::GameCore::FixPoint BPAdd; // 0xB8
		::RPG::Client::TextID SkillName; // 0xC0
		::RPG::GameCore::FixPoint SPNeed; // 0xD0
		::RPG::GameCore::AttackType AttackType; // 0xD8
		::System::UInt32 Level; // 0xDC
		::RPG::Client::TextID SimpleSkillDesc; // 0xE0
		::RPG::GameCore::FixPoint SPBase; // 0xF0
		::RPG::Client::TextID SkillNeed; // 0xF8
		::RPG::GameCore::FixPoint BPNeed; // 0x108
		::RPG::Client::TextID SkillTypeDesc; // 0x110

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
