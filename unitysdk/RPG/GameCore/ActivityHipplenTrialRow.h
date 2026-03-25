#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HipplenMiniGameType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENTRIALROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16EFEB90)
#define RPG_GAMECORE_ACTIVITYHIPPLENTRIALROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16EFEDB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenTrialRow_TypeDefinitionIndex = 10834;

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

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityHipplenTrialRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHipplenTrialRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENTRIALROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
