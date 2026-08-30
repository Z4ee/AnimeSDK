#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PerformanceSkipType.h"
#include "unitysdk/RPG/GameCore/StoryBlackType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCEVIDEOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D42DC00)
#define RPG_GAMECORE_PERFORMANCEVIDEOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D42E380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceVideoRow_TypeDefinitionIndex = 14217;

	class PerformanceVideoRow : public ::System::Object
	{
	public:
		::System::String* PerformancePath; // 0x10
		::RPG::GameCore::StoryBlackType StartBlack; // 0x18
		::System::Boolean EndWithCrack; // 0x1C
		::RPG::GameCore::PerformanceSkipType IsSkip; // 0x20
		::RPG::GameCore::StoryBlackType EndBlack; // 0x24
		::System::UInt32 FloorID; // 0x28
		::System::UInt32 PlaneID; // 0x2C
		::System::UInt32 PerformanceID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEVIDEOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceVideoRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceVideoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEVIDEOROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
