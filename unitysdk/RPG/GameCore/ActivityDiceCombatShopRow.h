#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYDICECOMBATSHOPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CD7EAA0)
#define RPG_GAMECORE_ACTIVITYDICECOMBATSHOPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD7ECF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityDiceCombatShopRow_TypeDefinitionIndex = 11229;

	class ActivityDiceCombatShopRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* GoodsList; // 0x10
		::System::String* IMGPath; // 0x18
		::RPG::Client::TextID Name; // 0x20
		::System::UInt32 DiceShopID; // 0x30
		::System::UInt32 ShopSortID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATSHOPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityDiceCombatShopRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityDiceCombatShopRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATSHOPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
