#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenOutfitType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENOUTFITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AAF7160)
#define RPG_GAMECORE_ACTIVITYHIPPLENOUTFITROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAF73A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenOutfitRow_TypeDefinitionIndex = 11257;

	class ActivityHipplenOutfitRow : public ::System::Object
	{
	public:
		::System::String* ColorName; // 0x10
		::RPG::GameCore::HipplenOutfitType Type; // 0x18
		::System::UInt32 MaterialID; // 0x1C
		::System::UInt32 ItemID; // 0x20
		::System::UInt32 PartID; // 0x24
		::System::Boolean IsDefault; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENOUTFITROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityHipplenOutfitRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHipplenOutfitRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENOUTFITROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
