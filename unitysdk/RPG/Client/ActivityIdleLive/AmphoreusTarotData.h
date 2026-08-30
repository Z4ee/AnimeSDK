#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTDATA_GETEFFECTDESC_OFFSET UNITYSDK_OFFSET(0xC580160)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTDATA_GETFULLDESC_OFFSET UNITYSDK_OFFSET(0xC57FF80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC57F950)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int AmphoreusTarotData_TypeDefinitionIndex = 75112;

	class AmphoreusTarotData : public ::System::Object
	{
	public:
		::System::String* SmallIconPath; // 0x10
		::System::String* IconPath; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* AbilityParams; // 0x20
		::System::String* AbilityName; // 0x28
		::System::UInt32 TriggerChapterId; // 0x30
		::System::UInt32 ID; // 0x34
		::RPG::Client::TextID Desc; // 0x38
		::RPG::Client::TextID Name; // 0x48
		::RPG::GameCore::GenderType GenderLimit; // 0x58
		::System::UInt32 TriggerNodeId; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTDATA__CTOR_OFFSET))(this);
		}

		::System::String* GetFullDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTDATA_GETFULLDESC_OFFSET))(this);
		}

		::System::String* GetEffectDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTDATA_GETEFFECTDESC_OFFSET))(this);
		}
	};
}
