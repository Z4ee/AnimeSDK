#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PARKOURLEVELGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1748AF70)
#define RPG_GAMECORE_PARKOURLEVELGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1748B170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParkourLevelGroupRow_TypeDefinitionIndex = 11077;

	class ParkourLevelGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* LevelIDList; // 0x10
		::System::String* ResPath; // 0x18
		::System::UInt32 ID; // 0x20
		::RPG::Client::TextID Name; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURLEVELGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ParkourLevelGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParkourLevelGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURLEVELGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
