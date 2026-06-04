#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_EXPEDITIONHARVESTDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x197044A0)
#define RPG_GAMECORE_EXPEDITIONHARVESTDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19704750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionHarvestDataRow_TypeDefinitionIndex = 12625;

	class ExpeditionHarvestDataRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* UnlockCondition; // 0x10
		::System::String* IconPath; // 0x18
		::System::UInt32 ExpeditionID; // 0x20
		::System::UInt32 RewardID; // 0x24
		::System::UInt32 Group; // 0x28
		::System::UInt32 Order; // 0x2C
		::RPG::Client::TextID Name; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONHARVESTDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionHarvestDataRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionHarvestDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONHARVESTDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
