#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SmartObjectPlayMode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelSmartObjectPointInfo; }

#define RPG_GAMECORE_LEVELSMARTOBJECTSLOTINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1734C930)
#define RPG_GAMECORE_LEVELSMARTOBJECTSLOTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1734CA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelSmartObjectSlotInfo_TypeDefinitionIndex = 15953;

	class LevelSmartObjectSlotInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::SmartObjectPlayMode PlayeMode; // 0x10
		::Il2CppArray<::RPG::GameCore::LevelSmartObjectPointInfo*>* PointList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSMARTOBJECTSLOTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelSmartObjectSlotInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelSmartObjectSlotInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSMARTOBJECTSLOTINFO_FROMBINARY_OFFSET))(array, val);
		}
	};
}
