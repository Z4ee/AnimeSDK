#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCAEONDICEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3CE7C0)
#define RPG_GAMECORE_ROGUEDLCAEONDICEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CF150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCAeonDiceRow_TypeDefinitionIndex = 14576;

	class RogueDLCAeonDiceRow : public ::System::Object
	{
	public:
		::System::String* DiceIcon; // 0x10
		::System::String* SoundSuspensionStart; // 0x18
		::Il2CppArray<::System::UInt32>* ExtraEffect; // 0x20
		::System::String* SoundReRoll; // 0x28
		::System::String* SoundRoll; // 0x30
		::System::String* DiceModel; // 0x38
		::System::String* SoundSuspensionStop; // 0x40
		::Il2CppArray<::System::UInt32>* StartDescParam; // 0x48
		::Il2CppArray<::RPG::GameCore::FixPoint>* DescParam; // 0x50
		::System::UInt32 AeonDiceID; // 0x58
		::RPG::Client::TextID DiceCountDesc; // 0x60
		::RPG::Client::TextID DiceStartEffectDesc; // 0x70
		::RPG::Client::TextID DiceShortDesc; // 0x80

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
