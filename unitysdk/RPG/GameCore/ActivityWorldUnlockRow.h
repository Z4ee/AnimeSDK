#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYWORLDUNLOCKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1863BC00)
#define RPG_GAMECORE_ACTIVITYWORLDUNLOCKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1863BCF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityWorldUnlockRow_TypeDefinitionIndex = 10734;

	class ActivityWorldUnlockRow : public ::System::Object
	{
	public:
		::System::UInt32 WorldID; // 0x10
		::System::UInt32 ActivityID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYWORLDUNLOCKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityWorldUnlockRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityWorldUnlockRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYWORLDUNLOCKROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
