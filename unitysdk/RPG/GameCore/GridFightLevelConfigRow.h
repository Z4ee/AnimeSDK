#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_GRIDFIGHTLEVELCONFIGROW_CLEARWEIGHTLIST_OFFSET UNITYSDK_OFFSET(0x1725F8A0)
#define RPG_GAMECORE_GRIDFIGHTLEVELCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1725F460)
#define RPG_GAMECORE_GRIDFIGHTLEVELCONFIGROW_GETLOTTERYRARITYWEIGHTLIST_OFFSET UNITYSDK_OFFSET(0x1725F800)
#define RPG_GAMECORE_GRIDFIGHTLEVELCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1725F7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightLevelConfigRow_TypeDefinitionIndex = 12314;

	class GridFightLevelConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* GeneralPropertyList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _LotteryRarityWeightList; // 0x18
		::System::UInt32 AvatarMaxNumber; // 0x20
		::System::UInt32 LevelUpExp; // 0x24
		::System::UInt32 Rarity4Weight; // 0x28
		::System::UInt32 Rarity5Weight; // 0x2C
		::System::UInt32 Rarity3Weight; // 0x30
		::System::UInt32 Rarity2Weight; // 0x34
		::System::UInt32 Rarity1Weight; // 0x38
		::System::UInt32 GridFightLevel; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTLEVELCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightLevelConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightLevelConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTLEVELCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLotteryRarityWeightList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTLEVELCONFIGROW_GETLOTTERYRARITYWEIGHTLIST_OFFSET))(this);
		}

		::System::Void ClearWeightList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTLEVELCONFIGROW_CLEARWEIGHTLIST_OFFSET))(this);
		}
	};
}
