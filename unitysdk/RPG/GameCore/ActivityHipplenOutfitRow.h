#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenOutfitType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENOUTFITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16EFD640)
#define RPG_GAMECORE_ACTIVITYHIPPLENOUTFITROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16EFD880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenOutfitRow_TypeDefinitionIndex = 10864;

	class ActivityHipplenOutfitRow : public ::System::Object
	{
	public:
		::System::String* ColorName; // 0x10
		::System::UInt32 ItemID; // 0x18
		::System::Boolean IsDefault; // 0x1C
		::System::UInt32 PartID; // 0x20
		::System::UInt32 MaterialID; // 0x24
		::RPG::GameCore::HipplenOutfitType Type; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENOUTFITROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityHipplenOutfitRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHipplenOutfitRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENOUTFITROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
