#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }

#define RPG_GAMECORE_EXPEDITIONDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7DE600)
#define RPG_GAMECORE_EXPEDITIONDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DEF30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionDataRow_TypeDefinitionIndex = 13155;

	class ExpeditionDataRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* BonusDamageTypeList; // 0x10
		::Il2CppArray<::RPG::GameCore::AvatarBaseType>* BonusBaseTypeList; // 0x18
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* DisplayItemList; // 0x20
		::Il2CppArray<::System::UInt32>* AssignerIDList; // 0x28
		::RPG::Client::TextID Name; // 0x30
		::System::UInt32 AvatarNumMin; // 0x40
		::System::UInt32 UnlockMission; // 0x44
		::System::UInt32 AvatarNumMax; // 0x48
		::System::UInt32 ExpeditionID; // 0x4C
		::RPG::Client::TextID AssignDesc; // 0x50
		::System::UInt32 GroupID; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionDataRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
