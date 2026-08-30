#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChessRogueCabinetType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DimensionIncrementsConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCAEONCABINETROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3CD8F0)
#define RPG_GAMECORE_ROGUEDLCAEONCABINETROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CDD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCAeonCabinetRow_TypeDefinitionIndex = 14588;

	class RogueDLCAeonCabinetRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::DimensionIncrementsConfig*>* FinishAeonDimensionPointList; // 0x10
		::Il2CppArray<::System::UInt32>* UnlockCabinetID; // 0x18
		::Il2CppArray<::System::UInt32>* DescParam; // 0x20
		::System::String* CabinetIcon; // 0x28
		::System::UInt32 QuestID; // 0x30
		::System::UInt32 CabinetID; // 0x34
		::RPG::Client::TextID CabinetName; // 0x38
		::System::UInt32 Sort; // 0x48
		::RPG::GameCore::ChessRogueCabinetType CabinetType; // 0x4C
		::RPG::Client::TextID CabinetMissionDesc; // 0x50
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
