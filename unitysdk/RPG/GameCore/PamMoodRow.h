#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PamMoodType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PAMMOODROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x199E2930)
#define RPG_GAMECORE_PAMMOODROW__CTOR_OFFSET UNITYSDK_OFFSET(0x199E2B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PamMoodRow_TypeDefinitionIndex = 13636;

	class PamMoodRow : public ::System::Object
	{
	public:
		::System::String* EmotionClipPath; // 0x10
		::System::UInt32 PerformanceID; // 0x18
		::System::Int32 MinMoodPoint; // 0x1C
		::RPG::GameCore::PamMoodType PamMood; // 0x20
		::System::Int32 MaxMoodPoint; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMMOODROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PamMoodRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PamMoodRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMMOODROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
