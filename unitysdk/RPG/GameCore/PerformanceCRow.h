#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PerformanceSkipType.h"
#include "unitysdk/RPG/GameCore/StoryBlackType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCECROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8CA2C0)
#define RPG_GAMECORE_PERFORMANCECROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8CAA40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceCRow_TypeDefinitionIndex = 14328;

	class PerformanceCRow : public ::System::Object
	{
	public:
		::System::String* PerformancePath; // 0x10
		::System::UInt32 PerformanceID; // 0x18
		::System::Boolean EndWithCrack; // 0x1C
		::RPG::GameCore::PerformanceSkipType IsSkip; // 0x20
		::System::UInt32 FloorID; // 0x24
		::System::UInt32 PlaneID; // 0x28
		::RPG::GameCore::StoryBlackType StartBlack; // 0x2C
		::RPG::GameCore::StoryBlackType EndBlack; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCECROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceCRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceCRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCECROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
