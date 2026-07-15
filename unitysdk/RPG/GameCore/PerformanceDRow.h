#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PerformanceChangePlayerType.h"
#include "unitysdk/RPG/GameCore/PerformanceSkipType.h"
#include "unitysdk/RPG/GameCore/StoryBlackType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCEDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4AB870)
#define RPG_GAMECORE_PERFORMANCEDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AC0F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceDRow_TypeDefinitionIndex = 13806;

	class PerformanceDRow : public ::System::Object
	{
	public:
		::System::String* PerformanceCharacter; // 0x10
		::System::String* PerformancePath; // 0x18
		::System::UInt32 PerformanceID; // 0x20
		::System::UInt32 PlaneID; // 0x24
		::System::Boolean EndWithCrack; // 0x28
		::System::UInt32 GroupID; // 0x2C
		::System::UInt32 FloorID; // 0x30
		::RPG::GameCore::StoryBlackType StartBlack; // 0x34
		::RPG::GameCore::PerformanceChangePlayerType ChangePlayerType; // 0x38
		::RPG::GameCore::StoryBlackType EndBlack; // 0x3C
		::RPG::GameCore::PerformanceSkipType IsSkip; // 0x40

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
