#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueNousSurfaceTag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUENOUSDICESURFACEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D16C670)
#define RPG_GAMECORE_ROGUENOUSDICESURFACEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D16D040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousDiceSurfaceRow_TypeDefinitionIndex = 14322;

	class RogueNousDiceSurfaceRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::RogueNousSurfaceTag>* TagList; // 0x10
		::Il2CppArray<::System::UInt32>* BranchLimitaion; // 0x18
		::Il2CppArray<::System::UInt32>* ExtraDesc; // 0x20
		::Il2CppArray<::System::UInt32>* SlotList; // 0x28
		::System::String* Icon; // 0x30
		::Il2CppArray<::RPG::GameCore::FixPoint>* DescParam; // 0x38
		::RPG::Client::TextID SurfaceName; // 0x40
		::RPG::Client::TextID SurfaceDesc; // 0x50
		::System::UInt32 UnlockDisplayID; // 0x60
		::System::UInt32 ItemID; // 0x64
		::System::UInt32 DiceActiveStage; // 0x68
		::System::UInt32 SurfaceID; // 0x6C
		::System::UInt32 Sort; // 0x70
		::System::UInt32 Rarity; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICESURFACEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueNousDiceSurfaceRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueNousDiceSurfaceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICESURFACEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
