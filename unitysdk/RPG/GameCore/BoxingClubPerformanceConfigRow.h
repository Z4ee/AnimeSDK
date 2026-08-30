#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BOXINGCLUBPERFORMANCECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE94FA0)
#define RPG_GAMECORE_BOXINGCLUBPERFORMANCECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE95220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoxingClubPerformanceConfigRow_TypeDefinitionIndex = 12818;

	class BoxingClubPerformanceConfigRow : public ::System::Object
	{
	public:
		::System::String* BubbleTalkPlayer; // 0x10
		::System::String* EnemyRank; // 0x18
		::System::String* BubbleTalkEnemy; // 0x20
		::System::String* Name; // 0x28
		::System::String* PlayerRank; // 0x30
		::System::UInt32 MonsterTemplateID; // 0x38
		::System::UInt32 ID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBPERFORMANCECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BoxingClubPerformanceConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoxingClubPerformanceConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBPERFORMANCECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
