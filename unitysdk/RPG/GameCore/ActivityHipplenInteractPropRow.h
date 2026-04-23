#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HipplenInteractLikeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENINTERACTPROPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1861E330)
#define RPG_GAMECORE_ACTIVITYHIPPLENINTERACTPROPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1861E640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenInteractPropRow_TypeDefinitionIndex = 11097;

	class ActivityHipplenInteractPropRow : public ::System::Object
	{
	public:
		::System::String* StringParam; // 0x10
		::System::String* SmallIconPath; // 0x18
		::System::String* IconPath; // 0x20
		::RPG::Client::TextID Name; // 0x28
		::System::UInt32 UnlockPhaseID; // 0x38
		::System::UInt32 UnlockCycleID; // 0x3C
		::RPG::GameCore::HipplenInteractLikeType LikeType; // 0x40
		::System::UInt32 ID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENINTERACTPROPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityHipplenInteractPropRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHipplenInteractPropRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENINTERACTPROPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
