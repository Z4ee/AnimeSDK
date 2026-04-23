#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HipplenWorkType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENWORKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1861FF70)
#define RPG_GAMECORE_ACTIVITYHIPPLENWORKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186202E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenWorkRow_TypeDefinitionIndex = 11077;

	class ActivityHipplenWorkRow : public ::System::Object
	{
	public:
		::System::String* WorkSmallIcon; // 0x10
		::System::String* WorkIcon; // 0x18
		::RPG::GameCore::HipplenWorkType Type; // 0x20
		::System::UInt32 Param; // 0x24
		::RPG::Client::TextID WorkDesc; // 0x28
		::System::UInt32 ID; // 0x38
		::System::UInt32 Cost; // 0x3C
		::RPG::Client::TextID WorkTitle; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENWORKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityHipplenWorkRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHipplenWorkRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENWORKROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
