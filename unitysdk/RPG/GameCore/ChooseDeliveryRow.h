#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHOOSEDELIVERYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFD62C0)
#define RPG_GAMECORE_CHOOSEDELIVERYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFD6460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChooseDeliveryRow_TypeDefinitionIndex = 12950;

	class ChooseDeliveryRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RewardGroupList; // 0x10
		::System::UInt32 UnlockID; // 0x18
		::System::UInt32 ActivityModuleID; // 0x1C
		::System::UInt32 ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHOOSEDELIVERYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChooseDeliveryRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChooseDeliveryRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHOOSEDELIVERYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
