#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HipplenMiniGameType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENTRIALROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AAF8670)
#define RPG_GAMECORE_ACTIVITYHIPPLENTRIALROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAF8890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenTrialRow_TypeDefinitionIndex = 11227;

	class ActivityHipplenTrialRow : public ::System::Object
	{
	public:
		::System::String* GameJson; // 0x10
		::RPG::Client::TextID TrialTitle; // 0x18
		::System::UInt32 ID; // 0x28
		::RPG::GameCore::HipplenMiniGameType Type; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENTRIALROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityHipplenTrialRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHipplenTrialRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENTRIALROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
