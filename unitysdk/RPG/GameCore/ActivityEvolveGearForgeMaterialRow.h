#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16EAFEE0)
#define RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB15F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityEvolveGearForgeMaterialRow_TypeDefinitionIndex = 10661;

	class ActivityEvolveGearForgeMaterialRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CostGearList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* MaterialGearList; // 0x18
		::System::UInt32 ForgeGearID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityEvolveGearForgeMaterialRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityEvolveGearForgeMaterialRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
