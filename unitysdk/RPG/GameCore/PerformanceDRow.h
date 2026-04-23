#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PerformanceChangePlayerType.h"
#include "unitysdk/RPG/GameCore/PerformanceSkipType.h"
#include "unitysdk/RPG/GameCore/StoryBlackType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCEDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18BDF240)
#define RPG_GAMECORE_PERFORMANCEDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18BDFAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceDRow_TypeDefinitionIndex = 13588;

	class PerformanceDRow : public ::System::Object
	{
	public:
		::System::String* PerformancePath; // 0x10
		::System::String* PerformanceCharacter; // 0x18
		::System::UInt32 PlaneID; // 0x20
		::System::UInt32 GroupID; // 0x24
		::System::UInt32 PerformanceID; // 0x28
		::System::Boolean EndWithCrack; // 0x2C
		::RPG::GameCore::StoryBlackType EndBlack; // 0x30
		::RPG::GameCore::StoryBlackType StartBlack; // 0x34
		::System::UInt32 FloorID; // 0x38
		::RPG::GameCore::PerformanceSkipType IsSkip; // 0x3C
		::RPG::GameCore::PerformanceChangePlayerType ChangePlayerType; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PerformanceDRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceDRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
