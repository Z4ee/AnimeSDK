#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAINMISSIONPACKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A82A60)
#define RPG_GAMECORE_MAINMISSIONPACKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A82B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MainMissionPackRow_TypeDefinitionIndex = 13402;

	class MainMissionPackRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MainMissionIdList; // 0x10
		::System::UInt32 MissionPack; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONPACKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MainMissionPackRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MainMissionPackRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONPACKROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
