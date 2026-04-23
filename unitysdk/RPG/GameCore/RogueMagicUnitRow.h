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

#define RPG_GAMECORE_ROGUEMAGICUNITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D24AD0)
#define RPG_GAMECORE_ROGUEMAGICUNITROW_GETMAZEBUFF_OFFSET UNITYSDK_OFFSET(0x18D25180)
#define RPG_GAMECORE_ROGUEMAGICUNITROW_GET_ISACTIVEUNIT_OFFSET UNITYSDK_OFFSET(0x18D25290)
#define RPG_GAMECORE_ROGUEMAGICUNITROW_GET_ISPASSIVEUNIT_OFFSET UNITYSDK_OFFSET(0x18D25280)
#define RPG_GAMECORE_ROGUEMAGICUNITROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D25170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicUnitRow_TypeDefinitionIndex = 14088;

	class RogueMagicUnitRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::RogueMagicEffectType>* EffectTypeList; // 0x10
		::Il2CppArray<::System::UInt32>* ExtraEffectID; // 0x18
		::Il2CppArray<::RPG::GameCore::RogueMagicRangeType>* AttachRangeTypeList; // 0x20
		::RPG::GameCore::RogueMagicUnitCategory MagicUnitCategory; // 0x28
		::System::UInt32 MagicUnitLevel; // 0x2C
		::RPG::GameCore::FixPoint UnitBasicPower; // 0x30
		::RPG::GameCore::RogueMagicMountType MagicUnitType; // 0x38
		::RPG::GameCore::RogueMagicScepterFuncType FuncType; // 0x3C
		::RPG::GameCore::RogueMagicStyleType StyleType; // 0x40
		::System::UInt32 MagicUnitID; // 0x44
		::System::UInt32 MagicUnitMazeBuffID; // 0x48
		::System::UInt32 UnlockID; // 0x4C
		::RPG::Client::TextID MagicUnitDesc; // 0x50
		::RPG::Client::TextID MagicUnitSimpleDesc; // 0x60
		::RPG::GameCore::RogueMagicRangeType LimitRange; // 0x70
		::RPG::GameCore::RogueMagicSpecialType SpecialType; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICUNITROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueMagicUnitRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicUnitRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICUNITROW_FROMBINARY_OFFSET))(array, val);
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
