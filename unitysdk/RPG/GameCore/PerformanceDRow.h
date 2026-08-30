#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PerformanceChangePlayerType.h"
#include "unitysdk/RPG/GameCore/PerformanceSkipType.h"
#include "unitysdk/RPG/GameCore/StoryBlackType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCEDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3164A0)
#define RPG_GAMECORE_PERFORMANCEDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D316D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceDRow_TypeDefinitionIndex = 14223;

	class PerformanceDRow : public ::System::Object
	{
	public:
		::System::String* PerformancePath; // 0x10
		::System::String* PerformanceCharacter; // 0x18
		::System::UInt32 FloorID; // 0x20
		::RPG::GameCore::StoryBlackType EndBlack; // 0x24
		::RPG::GameCore::PerformanceSkipType IsSkip; // 0x28
		::System::Boolean EndWithCrack; // 0x2C
		::RPG::GameCore::StoryBlackType StartBlack; // 0x30
		::System::UInt32 PerformanceID; // 0x34
		::System::UInt32 PlaneID; // 0x38
		::System::UInt32 GroupID; // 0x3C
		::RPG::GameCore::PerformanceChangePlayerType ChangePlayerType; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceDRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceDRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
