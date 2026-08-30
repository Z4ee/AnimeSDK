#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyTargetType.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/IdleLiveTechTreeEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVETECHTREEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D216D70)
#define RPG_GAMECORE_IDLELIVETECHTREEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D217460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveTechTreeRow_TypeDefinitionIndex = 11706;

	class IdleLiveTechTreeRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* AbilityParamList; // 0x18
		::Il2CppArray<::System::UInt32>* PrePointIDList; // 0x20
		::System::String* AbilityName; // 0x28
		::System::Boolean IsMainPoint; // 0x30
		::System::Boolean IsBase; // 0x31
		::RPG::GameCore::IdleLiveAvatarPropertyTargetType PropertyTarget; // 0x34
		::RPG::GameCore::IdleLiveTechTreeEffectType Type; // 0x38
		::RPG::GameCore::IdleLiveAvatarPropertyType PropertyType; // 0x3C
		::System::UInt32 ID; // 0x40
		::RPG::GameCore::ILBattleAvatarTag TechPowerTagLimit; // 0x44
		::RPG::Client::TextID Name; // 0x48
		::RPG::GameCore::FixPoint TechAddPower; // 0x58
		::RPG::Client::TextID Desc; // 0x60
		::System::Double PropertyParam; // 0x70
		::RPG::GameCore::FixPoint TechPowerFactor; // 0x78
		::System::UInt32 Cost; // 0x80
		::System::UInt32 Param; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETECHTREEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveTechTreeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveTechTreeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETECHTREEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
