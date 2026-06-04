#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOXINGCLUBSTAGEGROUPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x194EE540)
#define RPG_GAMECORE_BOXINGCLUBSTAGEGROUPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x194EEC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoxingClubStageGroupConfigRow_TypeDefinitionIndex = 12285;

	class BoxingClubStageGroupConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EventIDList; // 0x10
		::Il2CppArray<::System::UInt32>* DisplayIndexList; // 0x18
		::Il2CppArray<::System::UInt32>* MonsterIDList; // 0x20
		::Il2CppArray<::System::UInt32>* DisplayEventIDList; // 0x28
		::System::UInt32 StageGroupID; // 0x30
		::System::UInt32 Weight; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBSTAGEGROUPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BoxingClubStageGroupConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoxingClubStageGroupConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBSTAGEGROUPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
