#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CustomScreenTransferType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ScreenTransferType.h"
#include "unitysdk/RPG/GameCore/StoryBlackType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERPERFORMANCEMASK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D292EB0)
#define RPG_GAMECORE_TRIGGERPERFORMANCEMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2931F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerPerformanceMask_TypeDefinitionIndex = 20063;

	class TriggerPerformanceMask : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean UseExcelData; // 0x10
		::RPG::GameCore::StoryBlackType StartBlack; // 0x14
		::RPG::GameCore::StoryBlackType EndBlack; // 0x18
		::RPG::GameCore::ScreenTransferType MaskColor; // 0x1C
		::System::Boolean EndCrack; // 0x20
		::System::Boolean EndScrCut; // 0x21
		::RPG::GameCore::CustomScreenTransferType StartCustomSrcTrf; // 0x24
		::RPG::GameCore::CustomScreenTransferType EndCustomSrcTrf; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPERFORMANCEMASK__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerPerformanceMask*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerPerformanceMask*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPERFORMANCEMASK_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
