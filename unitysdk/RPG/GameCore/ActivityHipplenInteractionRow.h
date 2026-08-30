#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenInteractType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYHIPPLENINTERACTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CA08BC0)
#define RPG_GAMECORE_ACTIVITYHIPPLENINTERACTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA08D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenInteractionRow_TypeDefinitionIndex = 11632;

	class ActivityHipplenInteractionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* Effects; // 0x10
		::RPG::GameCore::HipplenInteractType InteractType; // 0x18
		::System::UInt32 ID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENINTERACTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityHipplenInteractionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHipplenInteractionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENINTERACTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
