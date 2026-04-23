#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueNousSurfaceTag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUENOUSDICESURFACEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D4D8C0)
#define RPG_GAMECORE_ROGUENOUSDICESURFACEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D4E2D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousDiceSurfaceRow_TypeDefinitionIndex = 14112;

	class RogueNousDiceSurfaceRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ExtraDesc; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* DescParam; // 0x18
		::Il2CppArray<::System::UInt32>* BranchLimitaion; // 0x20
		::System::String* Icon; // 0x28
		::Il2CppArray<::RPG::GameCore::RogueNousSurfaceTag>* TagList; // 0x30
		::Il2CppArray<::System::UInt32>* SlotList; // 0x38
		::RPG::Client::TextID SurfaceName; // 0x40
		::System::UInt32 Rarity; // 0x50
		::System::UInt32 SurfaceID; // 0x54
		::System::UInt32 UnlockDisplayID; // 0x58
		::System::UInt32 ItemID; // 0x5C
		::RPG::Client::TextID SurfaceDesc; // 0x60
		::System::UInt32 DiceActiveStage; // 0x70
		::System::UInt32 Sort; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICESURFACEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueNousDiceSurfaceRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueNousDiceSurfaceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICESURFACEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
