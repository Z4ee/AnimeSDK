#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SPACEZOOMUTATIONMATERIALROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17754AD0)
#define RPG_GAMECORE_SPACEZOOMUTATIONMATERIALROW__CTOR_OFFSET UNITYSDK_OFFSET(0x177551C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooMutationMaterialRow_TypeDefinitionIndex = 11290;

	class SpaceZooMutationMaterialRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ChangeChannelList; // 0x10
		::Il2CppArray<::System::UInt32>* ChangeFeatureList; // 0x18
		::Il2CppArray<::System::UInt32>* FeatureConditionList; // 0x20
		::System::UInt32 ExchangeCost; // 0x28
		::System::UInt32 UnlockMissionID; // 0x2C
		::System::UInt32 ItemID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOMUTATIONMATERIALROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SpaceZooMutationMaterialRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpaceZooMutationMaterialRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOMUTATIONMATERIALROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
