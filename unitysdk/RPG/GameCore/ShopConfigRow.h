#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimitType.h"
#include "unitysdk/RPG/GameCore/ShopMainType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHOPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAA4B60)
#define RPG_GAMECORE_SHOPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA5AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShopConfigRow_TypeDefinitionIndex = 15100;

	class ShopConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* LimitValue2List; // 0x10
		::System::String* ShopBar; // 0x18
		::Il2CppArray<::System::UInt32>* LimitValue1List; // 0x20
		::System::String* ShopIconPath; // 0x28
		::RPG::Client::TextID ShopDesc; // 0x30
		::System::UInt32 ShopType; // 0x40
		::System::Boolean IsOpen; // 0x44
		::System::Boolean HideRemainTime; // 0x45
		::System::Boolean ServerVerification; // 0x46
		::RPG::Client::TextID ShopName; // 0x48
		::RPG::GameCore::LimitType LimitType1; // 0x58
		::RPG::GameCore::LimitType LimitType2; // 0x5C
		::System::UInt32 ActivityModuleID; // 0x60
		::RPG::GameCore::ShopMainType ShopMainType; // 0x64
		::System::UInt32 ScheduleDataID; // 0x68
		::System::UInt32 ShopID; // 0x6C
		::System::UInt32 ShopGroupID; // 0x70
		::System::UInt32 ShopSortID; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShopConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShopConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
