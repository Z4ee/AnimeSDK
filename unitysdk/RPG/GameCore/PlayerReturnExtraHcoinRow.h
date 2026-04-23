#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYERRETURNEXTRAHCOINROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C32520)
#define RPG_GAMECORE_PLAYERRETURNEXTRAHCOINROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C32760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerReturnExtraHcoinRow_TypeDefinitionIndex = 13721;

	class PlayerReturnExtraHcoinRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ExtraHcoinNumList; // 0x10
		::Il2CppArray<::System::UInt32>* ExtraHcoinUIProgressRatioList; // 0x18
		::Il2CppArray<::System::UInt32>* HcoinThresholdList; // 0x20
		::System::UInt32 ConfigID; // 0x28
		::System::UInt32 OfflineDays; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNEXTRAHCOINROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlayerReturnExtraHcoinRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerReturnExtraHcoinRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNEXTRAHCOINROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
