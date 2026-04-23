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
class Class_1_A88C3AAF0DD46F4C_13;
namespace RPG::GameCore { class MazeBuffRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEMAGICSCEPTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D22640)
#define RPG_GAMECORE_ROGUEMAGICSCEPTERROW_GETMAZEBUFF_OFFSET UNITYSDK_OFFSET(0x18D22B00)
#define RPG_GAMECORE_ROGUEMAGICSCEPTERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D22AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicScepterRow_TypeDefinitionIndex = 14083;

	class RogueMagicScepterRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::RogueMagicEffectType>* EffectTypeList; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueMagicMountType, ::System::UInt32>* TrenchCount; // 0x18
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_13*>* LockMagicUnit; // 0x20
		::System::UInt32 ScepterLevel; // 0x28
		::RPG::GameCore::RogueMagicRangeType LimitRangeType; // 0x2C
		::RPG::GameCore::FixPoint ScepterBasicPower; // 0x30
		::System::UInt32 UnlockID; // 0x38
		::RPG::GameCore::RogueMagicScepterFuncType FuncType; // 0x3C
		::RPG::GameCore::RogueMagicStyleType StyleType; // 0x40
		::System::UInt32 StaffMazeBuffID; // 0x44
		::System::UInt32 ScepterID; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSCEPTERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueMagicScepterRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicScepterRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSCEPTERROW_FROMBINARY_OFFSET))(array, val);
		}

		::RPG::GameCore::MazeBuffRow* GetMazeBuff()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSCEPTERROW_GETMAZEBUFF_OFFSET))(this);
		}
	};
}
