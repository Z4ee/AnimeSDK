#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HipplenInteractType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENINTERACTINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16EFCE30)
#define RPG_GAMECORE_ACTIVITYHIPPLENINTERACTINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16EFD170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenInteractInfoRow_TypeDefinitionIndex = 10854;

	class ActivityHipplenInteractInfoRow : public ::System::Object
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::String* JsonConfigPath; // 0x18
		::System::String* IconPath; // 0x20
		::Il2CppArray<::System::UInt32>* PropIDList; // 0x28
		::RPG::Client::TextID Hint; // 0x30
		::RPG::Client::TextID InAreaHint; // 0x40
		::RPG::GameCore::HipplenInteractType Type; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENINTERACTINFOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityHipplenInteractInfoRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHipplenInteractInfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENINTERACTINFOROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
