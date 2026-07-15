#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PARKOURLEVELGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BB0F0D0)
#define RPG_GAMECORE_PARKOURLEVELGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB0F2D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParkourLevelGroupRow_TypeDefinitionIndex = 11625;

	class ParkourLevelGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* LevelIDList; // 0x10
		::System::String* ResPath; // 0x18
		::RPG::Client::TextID Name; // 0x20
		::System::UInt32 ID; // 0x30

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
