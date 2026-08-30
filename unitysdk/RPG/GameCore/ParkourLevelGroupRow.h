#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PARKOURLEVELGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D30C320)
#define RPG_GAMECORE_PARKOURLEVELGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D30C520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParkourLevelGroupRow_TypeDefinitionIndex = 12014;

	class ParkourLevelGroupRow : public ::System::Object
	{
	public:
		::System::String* ResPath; // 0x10
		::Il2CppArray<::System::UInt32>* LevelIDList; // 0x18
		::System::UInt32 ID; // 0x20
		::RPG::Client::TextID Name; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURLEVELGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParkourLevelGroupRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParkourLevelGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURLEVELGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
