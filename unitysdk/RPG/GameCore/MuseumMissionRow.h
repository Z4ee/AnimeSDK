#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MuseumMissionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MUSEUMMISSIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x199BD530)
#define RPG_GAMECORE_MUSEUMMISSIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x199BD6C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumMissionRow_TypeDefinitionIndex = 13571;

	class MuseumMissionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TypeParameter; // 0x10
		::RPG::GameCore::MuseumMissionType Type; // 0x18
		::System::UInt32 MuseumMissionID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMMISSIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MuseumMissionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MuseumMissionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMMISSIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
