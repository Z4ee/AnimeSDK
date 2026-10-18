#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChessRogueDecayEffectType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCBOSSDECAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D98F5B0)
#define RPG_GAMECORE_ROGUEDLCBOSSDECAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D98FF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCBossDecayRow_TypeDefinitionIndex = 14787;

	class RogueDLCBossDecayRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EffectParamList; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* DescParam; // 0x18
		::Il2CppArray<::System::UInt32>* ExtraDesc; // 0x20
		::System::String* DecayIcon; // 0x28
		::System::String* BossEffectIcon; // 0x30
		::RPG::Client::TextID BossDecayName; // 0x38
		::RPG::Client::TextID BossDecayDesc; // 0x48
		::RPG::Client::TextID BossDecayComeFrom; // 0x58
		::System::Boolean IsBuff; // 0x68
		::System::UInt32 BossDecayID; // 0x6C
		::RPG::GameCore::ChessRogueDecayEffectType EffectType; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBOSSDECAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLCBossDecayRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCBossDecayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBOSSDECAYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
