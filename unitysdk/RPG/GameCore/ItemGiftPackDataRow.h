#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ITEMGIFTPACKDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B020B70)
#define RPG_GAMECORE_ITEMGIFTPACKDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B020D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemGiftPackDataRow_TypeDefinitionIndex = 13375;

	class ItemGiftPackDataRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RewardList; // 0x10
		::RPG::Client::TextID GroupDesc; // 0x18
		::System::UInt32 ID; // 0x28
		::System::UInt32 GroupID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMGIFTPACKDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ItemGiftPackDataRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ItemGiftPackDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMGIFTPACKDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
