#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NamedLevelObjectInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelSmartObjectCommonPointInfo; }
namespace RPG::GameCore { class LevelSmartObjectSlotInfo; }

#define RPG_GAMECORE_LEVELSMARTOBJECTINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x18A523E0)
#define RPG_GAMECORE_LEVELSMARTOBJECTINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A5A3F0)
#define RPG_GAMECORE_LEVELSMARTOBJECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A523D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelSmartObjectInfo_TypeDefinitionIndex = 16481;

	class LevelSmartObjectInfo : public ::RPG::GameCore::NamedLevelObjectInfo
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelSmartObjectSlotInfo*>* SlotList; // 0x38
		::Il2CppArray<::RPG::GameCore::LevelSmartObjectCommonPointInfo*>* CommonPointList; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSMARTOBJECTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelSmartObjectInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelSmartObjectInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSMARTOBJECTINFO_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelSmartObjectInfo* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelSmartObjectInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSMARTOBJECTINFO_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
