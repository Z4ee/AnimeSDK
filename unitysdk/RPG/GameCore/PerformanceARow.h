#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PerformanceSkipType.h"
#include "unitysdk/RPG/GameCore/StoryBlackType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCEAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D41BB50)
#define RPG_GAMECORE_PERFORMANCEAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D41C330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceARow_TypeDefinitionIndex = 14219;

	class PerformanceARow : public ::System::Object
	{
	public:
		::System::String* PerformancePath; // 0x10
		::System::UInt32 PerformanceID; // 0x18
		::RPG::GameCore::PerformanceSkipType IsSkip; // 0x1C
		::System::UInt32 FloorID; // 0x20
		::System::Boolean EndWithCrack; // 0x24
		::RPG::GameCore::StoryBlackType StartBlack; // 0x28
		::System::UInt32 PlaneID; // 0x2C
		::RPG::GameCore::StoryBlackType EndBlack; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceARow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceARow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
