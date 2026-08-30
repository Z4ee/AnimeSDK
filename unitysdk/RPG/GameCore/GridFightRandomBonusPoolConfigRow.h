#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTRANDOMBONUSPOOLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D160D00)
#define RPG_GAMECORE_GRIDFIGHTRANDOMBONUSPOOLCONFIGROW_GETRUNTIMERANDOMRECORDARR_OFFSET UNITYSDK_OFFSET(0x1D160FA0)
#define RPG_GAMECORE_GRIDFIGHTRANDOMBONUSPOOLCONFIGROW_GETRUNTIMEWEIGHTARR_OFFSET UNITYSDK_OFFSET(0x1D160F40)
#define RPG_GAMECORE_GRIDFIGHTRANDOMBONUSPOOLCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D160F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRandomBonusPoolConfigRow_TypeDefinitionIndex = 13309;

	class GridFightRandomBonusPoolConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BonusList; // 0x10
		::Il2CppArray<::System::UInt32>* _RuntimeRandomWeightArr; // 0x18
		::Il2CppArray<::System::UInt32>* BonusMaxNumberList; // 0x20
		::Il2CppArray<::System::UInt32>* BonusWeightList; // 0x28
		::Il2CppArray<::System::UInt32>* _RuntimeRandomRecordArr; // 0x30
		::System::UInt32 RandomBonusID; // 0x38
		::System::UInt32 TotalValue; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTRANDOMBONUSPOOLCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightRandomBonusPoolConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightRandomBonusPoolConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTRANDOMBONUSPOOLCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

		::Il2CppArray<::System::UInt32>* GetRuntimeWeightArr()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTRANDOMBONUSPOOLCONFIGROW_GETRUNTIMEWEIGHTARR_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetRuntimeRandomRecordArr()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTRANDOMBONUSPOOLCONFIGROW_GETRUNTIMERANDOMRECORDARR_OFFSET))(this);
		}
	};
}
