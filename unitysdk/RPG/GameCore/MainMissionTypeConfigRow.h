#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MainMissionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAINMISSIONTYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x198B7FC0)
#define RPG_GAMECORE_MAINMISSIONTYPECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x198B8950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MainMissionTypeConfigRow_TypeDefinitionIndex = 13477;

	class MainMissionTypeConfigRow : public ::System::Object
	{
	public:
		::System::String* TypeIcon; // 0x10
		::System::String* TypeChapterColor; // 0x18
		::System::String* TypeIconMini; // 0x20
		::System::String* TypeColor; // 0x28
		::System::String* MenuItemIcon; // 0x30
		::System::Boolean IsDelete; // 0x38
		::System::Boolean IsShowRedDot; // 0x39
		::System::UInt32 IconMapConnect; // 0x3C
		::RPG::Client::TextID TypeName; // 0x40
		::System::UInt32 IconMapOptional; // 0x50
		::System::UInt32 WaypointIconType; // 0x54
		::System::UInt32 TypePriority; // 0x58
		::System::UInt32 IconMapToTake; // 0x5C
		::System::UInt32 IconMapStarted; // 0x60
		::RPG::GameCore::MainMissionType Type; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONTYPECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MainMissionTypeConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MainMissionTypeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONTYPECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
