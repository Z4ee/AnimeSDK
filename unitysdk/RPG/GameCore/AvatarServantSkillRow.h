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

#define RPG_GAMECORE_AVATARSERVANTSKILLROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D3F6D00)
#define RPG_GAMECORE_AVATARSERVANTSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3F7B10)
#define RPG_GAMECORE_AVATARSERVANTSKILLROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D3F9420)
#define RPG_GAMECORE_AVATARSERVANTSKILLROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D3F9480)
#define RPG_GAMECORE_AVATARSERVANTSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F94F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarServantSkillRow_TypeDefinitionIndex = 12806;

	class AvatarServantSkillRow : public ::System::Object
	{
	public:
		::System::String* UltraSkillIcon; // 0x10
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x18
		::System::String* SkillIcon; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* ShowStanceList; // 0x28
		::Il2CppArray<::System::UInt32>* RatedRankID; // 0x30
		::System::String* SkillTriggerKey; // 0x38
		::Il2CppArray<::RPG::GameCore::FixPoint>* SimpleParamList; // 0x40
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x48
		::Il2CppArray<::System::UInt32>* SimpleExtraEffectIDList; // 0x50
		::Il2CppArray<::System::UInt32>* RatedSkillTreeID; // 0x58
		::RPG::Client::TextID SkillName; // 0x60
		::RPG::Client::TextID SkillNeed; // 0x70
		::RPG::GameCore::SkillEffect SkillEffect; // 0x80
		::RPG::GameCore::AttackDamageType StanceDamageType; // 0x84
		::RPG::Client::TextID SkillTypeDesc; // 0x88
		::System::UInt32 MaxLevel; // 0x98
		::System::UInt32 SkillID; // 0x9C
		::System::Boolean HideInUI; // 0xA0
		::System::Int32 StanceDamageDisplay; // 0xA4
		::RPG::Client::TextID SkillTag; // 0xA8
		::RPG::Client::TextID SimpleSkillDesc; // 0xB8
		::RPG::Client::TextID SkillDesc; // 0xC8
		::RPG::GameCore::FixPoint DelayRatio; // 0xD8
		::RPG::GameCore::FixPoint BPAdd; // 0xE0
		::RPG::GameCore::FixPoint SPBase; // 0xE8
		::RPG::GameCore::FixPoint SPNeed; // 0xF0
		::RPG::GameCore::FixPoint SPMultipleRatio; // 0xF8
		::RPG::GameCore::FixPoint BPNeed; // 0x100
		::RPG::GameCore::FixPoint SPAdd; // 0x108
		::RPG::GameCore::FixPoint SkillComboValueDelta; // 0x110
		::RPG::GameCore::AttackType AttackType; // 0x118
		::System::UInt32 Level; // 0x11C

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
