#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HipplenMiniGameType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENTRIALROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1861FD40)
#define RPG_GAMECORE_ACTIVITYHIPPLENTRIALROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1861FF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenTrialRow_TypeDefinitionIndex = 11079;

	class ActivityHipplenTrialRow : public ::System::Object
	{
	public:
		::System::String* GameJson; // 0x10
		::System::UInt32 ID; // 0x18
		::RPG::GameCore::HipplenMiniGameType Type; // 0x1C
		::RPG::Client::TextID TrialTitle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENTRIALROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityHipplenTrialRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHipplenTrialRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENTRIALROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
