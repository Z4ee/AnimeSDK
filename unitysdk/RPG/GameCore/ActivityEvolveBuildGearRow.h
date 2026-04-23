#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MazeBuffRow; }

#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1860EDB0)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARROW_GETMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1860FBE0)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARROW_GETMAZEBUFF_OFFSET UNITYSDK_OFFSET(0x1860FBA0)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARROW_ISMATERIALOFFORGE_OFFSET UNITYSDK_OFFSET(0x1860FC50)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1860FB90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityEvolveBuildGearRow_TypeDefinitionIndex = 10905;

	class ActivityEvolveBuildGearRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* DynamicIndexList; // 0x10
		::Il2CppArray<::System::UInt32>* IndexList; // 0x18
		::Il2CppArray<::System::UInt32>* SimpIndexList; // 0x20
		::System::UInt32 MazeBuffID; // 0x28
		::System::UInt32 Level; // 0x2C
		::System::UInt32 GearID; // 0x30
		::RPG::GameCore::EvolveGearType Type; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityEvolveBuildGearRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityEvolveBuildGearRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARROW_FROMBINARY_OFFSET))(array, val);
		}

		::RPG::GameCore::MazeBuffRow* GetMazeBuff()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARROW_GETMAZEBUFF_OFFSET))(this);
		}

		::System::UInt32 GetMaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARROW_GETMAXLEVEL_OFFSET))(this);
		}

		::System::Boolean IsMaterialOfForge(::System::UInt32& forgeId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARROW_ISMATERIALOFFORGE_OFFSET))(this, forgeId);
		}
	};
}
