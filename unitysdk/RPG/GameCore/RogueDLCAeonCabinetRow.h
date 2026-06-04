#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChessRogueCabinetType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DimensionIncrementsConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCAEONCABINETROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B23AC0)
#define RPG_GAMECORE_ROGUEDLCAEONCABINETROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19B23F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCAeonCabinetRow_TypeDefinitionIndex = 14020;

	class RogueDLCAeonCabinetRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnlockCabinetID; // 0x10
		::System::String* CabinetIcon; // 0x18
		::Il2CppArray<::System::UInt32>* DescParam; // 0x20
		::Il2CppArray<::RPG::GameCore::DimensionIncrementsConfig*>* FinishAeonDimensionPointList; // 0x28
		::RPG::Client::TextID CabinetMissionDesc; // 0x30
		::System::UInt32 Sort; // 0x40
		::System::UInt32 QuestID; // 0x44
		::System::UInt32 CabinetID; // 0x48
		::RPG::GameCore::ChessRogueCabinetType CabinetType; // 0x4C
		::RPG::Client::TextID CabinetName; // 0x50
		::RPG::Client::TextID CabinetDesc; // 0x60

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
