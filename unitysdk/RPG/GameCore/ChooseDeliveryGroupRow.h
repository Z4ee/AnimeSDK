#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHOOSEDELIVERYGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFD6170)
#define RPG_GAMECORE_CHOOSEDELIVERYGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFD62B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChooseDeliveryGroupRow_TypeDefinitionIndex = 12952;

	class ChooseDeliveryGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RewardList; // 0x10
		::System::UInt32 GroupID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHOOSEDELIVERYGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChooseDeliveryGroupRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChooseDeliveryGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHOOSEDELIVERYGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
