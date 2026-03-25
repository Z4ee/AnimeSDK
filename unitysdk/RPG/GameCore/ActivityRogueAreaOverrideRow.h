#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYROGUEAREAOVERRIDEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F14500)
#define RPG_GAMECORE_ACTIVITYROGUEAREAOVERRIDEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F14710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRogueAreaOverrideRow_TypeDefinitionIndex = 11264;

	class ActivityRogueAreaOverrideRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* ScoreMap; // 0x10
		::System::UInt32 RogueAreaID; // 0x18
		::System::UInt32 RecommendSkillTreePoints; // 0x1C
		::System::UInt32 WorldLevel; // 0x20
		::System::UInt32 RecommendLevel; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYROGUEAREAOVERRIDEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityRogueAreaOverrideRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityRogueAreaOverrideRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYROGUEAREAOVERRIDEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
