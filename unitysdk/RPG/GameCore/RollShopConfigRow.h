#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RollShopType.h"
#include "unitysdk/System/Object.h"

class Class_1_6D3107F5009DB1BB_2;
class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROLLSHOPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17673B50)
#define RPG_GAMECORE_ROLLSHOPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17673F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RollShopConfigRow_TypeDefinitionIndex = 13820;

	class RollShopConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_6D3107F5009DB1BB_2*>* SpecialGroupList; // 0x10
		::RPG::Client::TextID ShopName; // 0x18
		::System::UInt32 RollShopID; // 0x28
		::RPG::GameCore::RollShopType RollShopType; // 0x2C
		::System::UInt32 CostItemNum; // 0x30
		::System::Int32 IntroduceID; // 0x34
		::System::UInt32 T1GroupID; // 0x38
		::System::UInt32 T2GroupID; // 0x3C
		::System::UInt32 CostItemID; // 0x40
		::System::UInt32 T4GroupID; // 0x44
		::System::UInt32 T3GroupID; // 0x48
		::System::UInt32 SecretGroupID; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLSHOPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RollShopConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RollShopConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLSHOPCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
