#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraDuelCoreflameVesselLevelRow; }

#define RPG_CLIENT_CHIMERADUELCOREFLAMEVESSELLEVELDATA_GET_CHIMERAID_OFFSET UNITYSDK_OFFSET(0x93964A0)
#define RPG_CLIENT_CHIMERADUELCOREFLAMEVESSELLEVELDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x93964C0)
#define RPG_CLIENT_CHIMERADUELCOREFLAMEVESSELLEVELDATA_GET_SKILLIDS_OFFSET UNITYSDK_OFFSET(0x93964E0)
#define RPG_CLIENT_CHIMERADUELCOREFLAMEVESSELLEVELDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x9396490)
#define RPG_CLIENT_CHIMERADUELCOREFLAMEVESSELLEVELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9395E00)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelCoreflameVesselLevelData_TypeDefinitionIndex = 51427;

	class ChimeraDuelCoreflameVesselLevelData : public ::System::Object
	{
	public:
		::RPG::GameCore::ChimeraDuelCoreflameVesselLevelRow* __Row_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 chimeraID, ::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCOREFLAMEVESSELLEVELDATA__CTOR_OFFSET))(this, chimeraID, level);
		}

		::RPG::GameCore::ChimeraDuelCoreflameVesselLevelRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraDuelCoreflameVesselLevelRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCOREFLAMEVESSELLEVELDATA_GET__ROW_OFFSET))(this);
		}

		::System::UInt32 get_ChimeraID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCOREFLAMEVESSELLEVELDATA_GET_CHIMERAID_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCOREFLAMEVESSELLEVELDATA_GET_LEVEL_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_SkillIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCOREFLAMEVESSELLEVELDATA_GET_SKILLIDS_OFFSET))(this);
		}
	};
}
