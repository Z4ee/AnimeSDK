#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueMagicEffectType.h"
#include "unitysdk/RPG/GameCore/RogueMagicMountType.h"
#include "unitysdk/RPG/GameCore/RogueMagicRangeType.h"
#include "unitysdk/RPG/GameCore/RogueMagicScepterFuncType.h"
#include "unitysdk/RPG/GameCore/RogueMagicStyleType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C_15;
namespace RPG::GameCore { class MazeBuffRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEMAGICSCEPTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D93C130)
#define RPG_GAMECORE_ROGUEMAGICSCEPTERROW_GETMAZEBUFF_OFFSET UNITYSDK_OFFSET(0x1D93C550)
#define RPG_GAMECORE_ROGUEMAGICSCEPTERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D93C540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicScepterRow_TypeDefinitionIndex = 14715;

	class RogueMagicScepterRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::RogueMagicEffectType>* EffectTypeList; // 0x10
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_15*>* LockMagicUnit; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueMagicMountType, ::System::UInt32>* TrenchCount; // 0x20
		::System::UInt32 ScepterLevel; // 0x28
		::System::UInt32 StaffMazeBuffID; // 0x2C
		::RPG::GameCore::RogueMagicStyleType StyleType; // 0x30
		::RPG::GameCore::RogueMagicRangeType LimitRangeType; // 0x34
		::System::UInt32 UnlockID; // 0x38
		::RPG::GameCore::FixPoint ScepterBasicPower; // 0x40
		::System::UInt32 ScepterID; // 0x48
		::RPG::GameCore::RogueMagicScepterFuncType FuncType; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSCEPTERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicScepterRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicScepterRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSCEPTERROW_FROMBINARY_OFFSET))(a1, a2);
		}

		::RPG::GameCore::MazeBuffRow* GetMazeBuff()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSCEPTERROW_GETMAZEBUFF_OFFSET))(this);
		}
	};
}
