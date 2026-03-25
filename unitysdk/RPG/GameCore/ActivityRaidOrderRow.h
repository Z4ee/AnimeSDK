#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GoodsClass; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYRAIDORDERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F10F20)
#define RPG_GAMECORE_ACTIVITYRAIDORDERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F111A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRaidOrderRow_TypeDefinitionIndex = 11536;

	class ActivityRaidOrderRow : public ::System::Object
	{
	public:
		::System::String* OrderTips; // 0x10
		::Il2CppArray<::System::UInt32>* OrderGoodList; // 0x18
		::Il2CppArray<::System::UInt32>* OrderTipsTime; // 0x20
		::Il2CppArray<::RPG::GameCore::GoodsClass*>* OrderContent; // 0x28
		::System::UInt32 OrderShip; // 0x30
		::System::UInt32 OrderID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDORDERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityRaidOrderRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityRaidOrderRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDORDERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
