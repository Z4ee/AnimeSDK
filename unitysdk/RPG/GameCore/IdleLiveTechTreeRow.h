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

#define RPG_GAMECORE_IDLELIVETECHTREEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A171A0)
#define RPG_GAMECORE_IDLELIVETECHTREEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A178A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveTechTreeRow_TypeDefinitionIndex = 11169;

	class IdleLiveTechTreeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* AbilityParamList; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* AbilityName; // 0x20
		::Il2CppArray<::System::UInt32>* PrePointIDList; // 0x28
		::System::UInt32 Cost; // 0x30
		::RPG::GameCore::IdleLiveAvatarPropertyTargetType PropertyTarget; // 0x34
		::RPG::GameCore::FixPoint TechPowerFactor; // 0x38
		::System::Double PropertyParam; // 0x40
		::RPG::GameCore::IdleLiveTechTreeEffectType Type; // 0x48
		::System::UInt32 Param; // 0x4C
		::RPG::Client::TextID Name; // 0x50
		::System::UInt32 ID; // 0x60
		::System::Boolean IsBase; // 0x64
		::System::Boolean IsMainPoint; // 0x65
		::RPG::GameCore::FixPoint TechAddPower; // 0x68
		::RPG::Client::TextID Desc; // 0x70
		::RPG::GameCore::ILBattleAvatarTag TechPowerTagLimit; // 0x80
		::RPG::GameCore::IdleLiveAvatarPropertyType PropertyType; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETECHTREEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveTechTreeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveTechTreeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETECHTREEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
