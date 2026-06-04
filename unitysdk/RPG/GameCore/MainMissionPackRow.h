#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAINMISSIONPACKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x198B61E0)
#define RPG_GAMECORE_MAINMISSIONPACKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x198B62F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MainMissionPackRow_TypeDefinitionIndex = 13475;

	class MainMissionPackRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MainMissionIdList; // 0x10
		::System::UInt32 MissionPack; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONPACKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MainMissionPackRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MainMissionPackRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONPACKROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
