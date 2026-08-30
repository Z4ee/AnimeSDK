#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildCardInfluenceScope.h"
#include "unitysdk/RPG/GameCore/EvolveBuildCardType.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDCARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C9F7260)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDCARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F7A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityEvolveBuildCardRow_TypeDefinitionIndex = 11416;

	class ActivityEvolveBuildCardRow : public ::System::Object
	{
	public:
		::System::String* ItemMiniIcon; // 0x10
		::System::String* ItemIcon; // 0x18
		::Il2CppArray<::System::UInt32>* CardSelectablePeriod; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x28
		::RPG::GameCore::EvolveBuildCardInfluenceScope InfluenceScope; // 0x30
		::System::UInt32 UnlockQuest; // 0x34
		::System::UInt32 LvID; // 0x38
		::RPG::GameCore::EvolveBuildCardType Type; // 0x3C
		::System::UInt32 ID; // 0x40
		::RPG::GameCore::EvolveBuildSeason Season; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDCARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityEvolveBuildCardRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityEvolveBuildCardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDCARDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
