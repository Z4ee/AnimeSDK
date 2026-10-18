#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYVORACITYINVASIONPROGRESSBUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D384A40)
#define RPG_GAMECORE_ACTIVITYVORACITYINVASIONPROGRESSBUFFROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D384BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityVoracityInvasionProgressBuffRow_TypeDefinitionIndex = 12544;

	class ActivityVoracityInvasionProgressBuffRow : public ::System::Object
	{
	public:
		::System::Double ProgressPercent; // 0x10
		::System::UInt32 BuffLevel; // 0x18
		::System::UInt32 BuffID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYVORACITYINVASIONPROGRESSBUFFROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityVoracityInvasionProgressBuffRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityVoracityInvasionProgressBuffRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYVORACITYINVASIONPROGRESSBUFFROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
