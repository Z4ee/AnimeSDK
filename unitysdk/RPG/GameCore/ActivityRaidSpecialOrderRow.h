#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GoodsClass; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYRAIDSPECIALORDERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AB0A520)
#define RPG_GAMECORE_ACTIVITYRAIDSPECIALORDERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB0A790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRaidSpecialOrderRow_TypeDefinitionIndex = 12165;

	class ActivityRaidSpecialOrderRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SpecialOrderContent; // 0x10
		::Il2CppArray<::RPG::GameCore::GoodsClass*>* SpecialOrderGoods; // 0x18
		::Il2CppArray<::System::UInt32>* OrderTipsTime; // 0x20
		::System::String* OrderTips; // 0x28
		::System::UInt32 SpecialOrderShip; // 0x30
		::System::UInt32 SpecialOrderID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDSPECIALORDERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityRaidSpecialOrderRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityRaidSpecialOrderRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDSPECIALORDERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
