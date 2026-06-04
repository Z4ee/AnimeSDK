#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GoodsClass; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYRAIDORDERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x194017E0)
#define RPG_GAMECORE_ACTIVITYRAIDORDERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19401A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRaidOrderRow_TypeDefinitionIndex = 12031;

	class ActivityRaidOrderRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* OrderTipsTime; // 0x10
		::Il2CppArray<::RPG::GameCore::GoodsClass*>* OrderContent; // 0x18
		::Il2CppArray<::System::UInt32>* OrderGoodList; // 0x20
		::System::String* OrderTips; // 0x28
		::System::UInt32 OrderID; // 0x30
		::System::UInt32 OrderShip; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDORDERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityRaidOrderRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityRaidOrderRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDORDERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
