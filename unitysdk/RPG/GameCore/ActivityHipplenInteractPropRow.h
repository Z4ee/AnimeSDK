#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HipplenInteractLikeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENINTERACTPROPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CA088A0)
#define RPG_GAMECORE_ACTIVITYHIPPLENINTERACTPROPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA08BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenInteractPropRow_TypeDefinitionIndex = 11634;

	class ActivityHipplenInteractPropRow : public ::System::Object
	{
	public:
		::System::String* SmallIconPath; // 0x10
		::System::String* StringParam; // 0x18
		::System::String* IconPath; // 0x20
		::System::UInt32 UnlockPhaseID; // 0x28
		::System::UInt32 UnlockCycleID; // 0x2C
		::RPG::Client::TextID Name; // 0x30
		::System::UInt32 ID; // 0x40
		::RPG::GameCore::HipplenInteractLikeType LikeType; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENINTERACTPROPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityHipplenInteractPropRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHipplenInteractPropRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENINTERACTPROPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
