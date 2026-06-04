#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DAMAGETYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19690750)
#define RPG_GAMECORE_DAMAGETYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x196913F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DamageTypeRow_TypeDefinitionIndex = 12491;

	class DamageTypeRow : public ::System::Object
	{
	public:
		::System::String* SkillTreeLightColor; // 0x10
		::System::String* Color; // 0x18
		::System::String* IconNatureForWeakUnactive; // 0x20
		::System::String* SkillTreeDecoColor; // 0x28
		::System::String* IconNatureColor; // 0x30
		::System::String* LightColor; // 0x38
		::System::String* NormalDamage; // 0x40
		::System::String* MazeEnterBattleWeakIconPath; // 0x48
		::System::String* SkillTreePanelPath; // 0x50
		::System::String* SPInfoEffFront; // 0x58
		::System::String* SPMazeInfoEffFront; // 0x60
		::System::String* IconNatureWhite; // 0x68
		::System::String* SkillTreeLeftPanelColor; // 0x70
		::System::String* CriticalDamage; // 0x78
		::System::String* DamageTypeIconPath; // 0x80
		::System::String* UnfullColor; // 0x88
		::System::String* SkillBtnEff; // 0x90
		::System::String* IconNatureForWeakActive; // 0x98
		::System::String* IconNatureColorSimple; // 0xA0
		::System::String* ShaderColor; // 0xA8
		::System::String* Light1Color; // 0xB0
		::System::String* SPInfoEffFrontDouble; // 0xB8
		::RPG::GameCore::AttackDamageType ID; // 0xC0
		::RPG::Client::TextID DamageTypeName; // 0xC8
		::RPG::Client::TextID DamageTypeIntro; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DamageTypeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DamageTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
