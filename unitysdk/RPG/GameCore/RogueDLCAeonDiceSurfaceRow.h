#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCAEONDICESURFACEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B25B60)
#define RPG_GAMECORE_ROGUEDLCAEONDICESURFACEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19B264A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCAeonDiceSurfaceRow_TypeDefinitionIndex = 14010;

	class RogueDLCAeonDiceSurfaceRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* DescParam; // 0x10
		::Il2CppArray<::System::UInt32>* DiceEffectParam; // 0x18
		::Il2CppArray<::System::UInt32>* Dice3DSurfaceList; // 0x20
		::Il2CppArray<::System::UInt32>* ExtraEffect; // 0x28
		::System::String* DiceSurfaceIcon; // 0x30
		::RPG::Client::TextID DiceSurfaceDesc; // 0x38
		::RPG::GameCore::ModifierEffectType DiceEffectType; // 0x48
		::System::UInt32 AeonDiceID; // 0x4C
		::System::UInt32 Sort; // 0x50
		::System::UInt32 Rarity; // 0x54
		::RPG::Client::TextID DiceSurfaceName; // 0x58
		::System::UInt32 AeonSurfaceDiceID; // 0x68
		::System::UInt32 DiceActiveStage; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDICESURFACEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLCAeonDiceSurfaceRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCAeonDiceSurfaceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDICESURFACEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
