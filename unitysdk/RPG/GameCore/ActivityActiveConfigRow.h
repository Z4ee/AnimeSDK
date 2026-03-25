#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DisplayItemConfig; }

#define RPG_GAMECORE_ACTIVITYACTIVECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16EA2E40)
#define RPG_GAMECORE_ACTIVITYACTIVECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16EA30C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityActiveConfigRow_TypeDefinitionIndex = 10224;

	class ActivityActiveConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BenefitIDList; // 0x10
		::Il2CppArray<::RPG::GameCore::DisplayItemConfig*>* GiftShowList; // 0x18
		::System::UInt32 ItemLimit; // 0x20
		::System::UInt32 ID; // 0x24
		::System::UInt32 PowerConsume; // 0x28
		::System::UInt32 ActivityModuleID; // 0x2C
		::System::UInt32 ActiveItemID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYACTIVECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityActiveConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityActiveConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYACTIVECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
