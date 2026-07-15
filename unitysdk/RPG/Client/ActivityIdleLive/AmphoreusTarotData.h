#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTDATA_GETEFFECTDESC_OFFSET UNITYSDK_OFFSET(0x19D1C600)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTDATA_GETFULLDESC_OFFSET UNITYSDK_OFFSET(0x19D1C420)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19D1BE00)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int AmphoreusTarotData_TypeDefinitionIndex = 71805;

	class AmphoreusTarotData : public ::System::Object
	{
	public:
		::System::String* AbilityName; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* AbilityParams; // 0x18
		::System::String* IconPath; // 0x20
		::System::String* SmallIconPath; // 0x28
		::RPG::Client::TextID Desc; // 0x30
		::RPG::GameCore::GenderType GenderLimit; // 0x40
		::System::UInt32 TriggerNodeId; // 0x44
		::RPG::Client::TextID Name; // 0x48
		::System::UInt32 ID; // 0x58
		::System::UInt32 TriggerChapterId; // 0x5C

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
