#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChessRogueCabinetType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DimensionIncrementsConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCAEONCABINETROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C4B09E0)
#define RPG_GAMECORE_ROGUEDLCAEONCABINETROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4B0E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCAeonCabinetRow_TypeDefinitionIndex = 14168;

	class RogueDLCAeonCabinetRow : public ::System::Object
	{
	public:
		::System::String* CabinetIcon; // 0x10
		::Il2CppArray<::RPG::GameCore::DimensionIncrementsConfig*>* FinishAeonDimensionPointList; // 0x18
		::Il2CppArray<::System::UInt32>* UnlockCabinetID; // 0x20
		::Il2CppArray<::System::UInt32>* DescParam; // 0x28
		::RPG::Client::TextID CabinetDesc; // 0x30
		::System::UInt32 QuestID; // 0x40
		::System::UInt32 Sort; // 0x44
		::RPG::Client::TextID CabinetMissionDesc; // 0x48
		::RPG::Client::TextID CabinetName; // 0x58
		::RPG::GameCore::ChessRogueCabinetType CabinetType; // 0x68
		::System::UInt32 CabinetID; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONCABINETROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLCAeonCabinetRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCAeonCabinetRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONCABINETROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
