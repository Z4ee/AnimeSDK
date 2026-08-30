#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MISSIONDISABLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1AAC10)
#define RPG_GAMECORE_MISSIONDISABLEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1AAE50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionDisableRow_TypeDefinitionIndex = 14053;

	class MissionDisableRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CompensateItemList; // 0x10
		::Il2CppArray<::System::UInt32>* RecycleItemList; // 0x18
		::Il2CppArray<::System::UInt32>* MainMissionIDListClientDisplay; // 0x20
		::Il2CppArray<::System::UInt32>* MainMissionIDList; // 0x28
		::System::UInt32 SubMissionID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONDISABLEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MissionDisableRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MissionDisableRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONDISABLEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
