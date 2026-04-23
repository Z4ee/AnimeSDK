#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_METHOD_3_7091B1B126BF7451_OFFSET UNITYSDK_OFFSET(0x18EF9200)
#define RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_METHOD_3_7769C90CF6BFB3F8_OFFSET UNITYSDK_OFFSET(0x18EF7420)
#define RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY__CTOR_OFFSET UNITYSDK_OFFSET(0x18EF7400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByElationPriority_TypeDefinitionIndex = 22988;

	class TargetSortByElationPriority : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean HighestFirst; // 0x10
		::System::Boolean FilterByElationTimeTag; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7091B1B126BF7451(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByElationPriority*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByElationPriority*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_METHOD_3_7091B1B126BF7451_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7769C90CF6BFB3F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByElationPriority* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByElationPriority*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_METHOD_3_7769C90CF6BFB3F8_OFFSET))(a1, a2);
		}
	};
}
