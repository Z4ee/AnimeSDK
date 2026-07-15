#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCAEONDICEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C4B18B0)
#define RPG_GAMECORE_ROGUEDLCAEONDICEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4B2240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCAeonDiceRow_TypeDefinitionIndex = 14156;

	class RogueDLCAeonDiceRow : public ::System::Object
	{
	public:
		::System::String* SoundSuspensionStop; // 0x10
		::Il2CppArray<::System::UInt32>* ExtraEffect; // 0x18
		::System::String* DiceModel; // 0x20
		::Il2CppArray<::System::UInt32>* StartDescParam; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* DescParam; // 0x30
		::System::String* DiceIcon; // 0x38
		::System::String* SoundRoll; // 0x40
		::System::String* SoundReRoll; // 0x48
		::System::String* SoundSuspensionStart; // 0x50
		::RPG::Client::TextID DiceCountDesc; // 0x58
		::RPG::Client::TextID DiceShortDesc; // 0x68
		::RPG::Client::TextID DiceStartEffectDesc; // 0x78
		::System::UInt32 AeonDiceID; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDICEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLCAeonDiceRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCAeonDiceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDICEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
