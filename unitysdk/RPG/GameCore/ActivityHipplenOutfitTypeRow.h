#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HipplenOutfitType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENOUTFITTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16EFD890)
#define RPG_GAMECORE_ACTIVITYHIPPLENOUTFITTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16EFDAB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenOutfitTypeRow_TypeDefinitionIndex = 10866;

	class ActivityHipplenOutfitTypeRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* IconCheckPath; // 0x18
		::RPG::Client::TextID Name; // 0x20
		::RPG::GameCore::HipplenOutfitType Type; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENOUTFITTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityHipplenOutfitTypeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHipplenOutfitTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENOUTFITTYPEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
