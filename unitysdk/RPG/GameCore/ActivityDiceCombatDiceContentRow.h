#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYDICECOMBATDICECONTENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C9F2E00)
#define RPG_GAMECORE_ACTIVITYDICECOMBATDICECONTENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F32A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityDiceCombatDiceContentRow_TypeDefinitionIndex = 11227;

	class ActivityDiceCombatDiceContentRow : public ::System::Object
	{
	public:
		::System::String* SKillImgPathUI3D; // 0x10
		::System::String* SKillImagePathSmall; // 0x18
		::System::String* SKillImgPath; // 0x20
		::Il2CppArray<::System::UInt32>* GlossaryIDList; // 0x28
		::Il2CppArray<::System::UInt32>* SkillParam; // 0x30
		::System::String* ImgPath; // 0x38
		::System::String* DiceSkillJsonPath; // 0x40
		::System::UInt32 ContentID; // 0x48
		::RPG::Client::TextID ImageTextmap; // 0x50
		::RPG::Client::TextID SKillDesc; // 0x60
		::System::Single AIEffectWeight; // 0x70
		::System::UInt32 Content; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATDICECONTENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityDiceCombatDiceContentRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityDiceCombatDiceContentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATDICECONTENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
