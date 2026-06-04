#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueMagicEffectType.h"
#include "unitysdk/RPG/GameCore/RogueMagicMountType.h"
#include "unitysdk/RPG/GameCore/RogueMagicRangeType.h"
#include "unitysdk/RPG/GameCore/RogueMagicScepterFuncType.h"
#include "unitysdk/RPG/GameCore/RogueMagicSpecialType.h"
#include "unitysdk/RPG/GameCore/RogueMagicStyleType.h"
#include "unitysdk/RPG/GameCore/RogueMagicUnitCategory.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MazeBuffRow; }

#define RPG_GAMECORE_ROGUEMAGICUNITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B48790)
#define RPG_GAMECORE_ROGUEMAGICUNITROW_GETMAZEBUFF_OFFSET UNITYSDK_OFFSET(0x19B48DA0)
#define RPG_GAMECORE_ROGUEMAGICUNITROW_GET_ISACTIVEUNIT_OFFSET UNITYSDK_OFFSET(0x19B48EB0)
#define RPG_GAMECORE_ROGUEMAGICUNITROW_GET_ISPASSIVEUNIT_OFFSET UNITYSDK_OFFSET(0x19B48EA0)
#define RPG_GAMECORE_ROGUEMAGICUNITROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19B48D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicUnitRow_TypeDefinitionIndex = 14151;

	class RogueMagicUnitRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::RogueMagicEffectType>* EffectTypeList; // 0x10
		::Il2CppArray<::RPG::GameCore::RogueMagicRangeType>* AttachRangeTypeList; // 0x18
		::Il2CppArray<::System::UInt32>* ExtraEffectID; // 0x20
		::RPG::Client::TextID MagicUnitDesc; // 0x28
		::System::UInt32 UnlockID; // 0x38
		::RPG::GameCore::RogueMagicUnitCategory MagicUnitCategory; // 0x3C
		::System::UInt32 MagicUnitID; // 0x40
		::RPG::GameCore::RogueMagicStyleType StyleType; // 0x44
		::RPG::GameCore::FixPoint UnitBasicPower; // 0x48
		::RPG::GameCore::RogueMagicSpecialType SpecialType; // 0x50
		::System::UInt32 MagicUnitMazeBuffID; // 0x54
		::RPG::GameCore::RogueMagicScepterFuncType FuncType; // 0x58
		::RPG::GameCore::RogueMagicRangeType LimitRange; // 0x5C
		::RPG::Client::TextID MagicUnitSimpleDesc; // 0x60
		::RPG::GameCore::RogueMagicMountType MagicUnitType; // 0x70
		::System::UInt32 MagicUnitLevel; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICUNITROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicUnitRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicUnitRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICUNITROW_FROMBINARY_OFFSET))(a1, a2);
		}

		::RPG::GameCore::MazeBuffRow* GetMazeBuff()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICUNITROW_GETMAZEBUFF_OFFSET))(this);
		}

		::System::Boolean get_IsPassiveUnit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICUNITROW_GET_ISPASSIVEUNIT_OFFSET))(this);
		}

		::System::Boolean get_IsActiveUnit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICUNITROW_GET_ISACTIVEUNIT_OFFSET))(this);
		}
	};
}
