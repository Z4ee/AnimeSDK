#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GoodsClass; }
namespace System { class String; }

#define RPG_GAMECORE_ALLEYSPECIALORDERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F7B180)
#define RPG_GAMECORE_ALLEYSPECIALORDERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F7BBE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleySpecialOrderRow_TypeDefinitionIndex = 11517;

	class AlleySpecialOrderRow : public ::System::Object
	{
	public:
		::System::String* OrderTips; // 0x10
		::Il2CppArray<::System::UInt32>* SpecialOrderContent; // 0x18
		::Il2CppArray<::System::UInt32>* OrderTipsTime; // 0x20
		::System::String* SubTitleID; // 0x28
		::System::String* OrderPic; // 0x30
		::Il2CppArray<::RPG::GameCore::GoodsClass*>* SpecialOrderGoods; // 0x38
		::System::UInt32 SpecialOrderShopID; // 0x40
		::System::UInt32 SpecialOrderReward; // 0x44
		::System::UInt32 UnlockMission; // 0x48
		::System::UInt32 SpecialOrderID; // 0x4C
		::System::UInt32 SpecialOrderShip; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AlleySpecialOrderRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleySpecialOrderRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
