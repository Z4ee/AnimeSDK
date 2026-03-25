#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenInteractType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYHIPPLENINTERACTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16EFD4A0)
#define RPG_GAMECORE_ACTIVITYHIPPLENINTERACTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16EFD630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenInteractionRow_TypeDefinitionIndex = 10850;

	class ActivityHipplenInteractionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* Effects; // 0x10
		::System::UInt32 ID; // 0x18
		::RPG::GameCore::HipplenInteractType InteractType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENINTERACTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityHipplenInteractionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHipplenInteractionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENINTERACTIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
