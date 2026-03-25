#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PENACONYENDMOSTCHRONICLEMISSIONPACKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17490390)
#define RPG_GAMECORE_PENACONYENDMOSTCHRONICLEMISSIONPACKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x174904B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PenaconyEndmostChronicleMissionPackRow_TypeDefinitionIndex = 12920;

	class PenaconyEndmostChronicleMissionPackRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MainMissionIdList; // 0x10
		::System::UInt32 MissionPack; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PENACONYENDMOSTCHRONICLEMISSIONPACKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PenaconyEndmostChronicleMissionPackRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PenaconyEndmostChronicleMissionPackRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PENACONYENDMOSTCHRONICLEMISSIONPACKROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
