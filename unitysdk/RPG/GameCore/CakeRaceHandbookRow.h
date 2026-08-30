#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEHANDBOOKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CF76E80)
#define RPG_GAMECORE_CAKERACEHANDBOOKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF77060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceHandbookRow_TypeDefinitionIndex = 11009;

	class CakeRaceHandbookRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BubblePerformanceIDList; // 0x10
		::Il2CppArray<::System::UInt32>* AvatarTalkIDList; // 0x18
		::System::UInt32 Order; // 0x20
		::System::UInt32 CatID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEHANDBOOKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceHandbookRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceHandbookRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEHANDBOOKROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
