#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTCAMPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x197DB6D0)
#define RPG_GAMECORE_GRIDFIGHTCAMPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x197DBB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCampConfigRow_TypeDefinitionIndex = 12981;

	class GridFightCampConfigRow : public ::System::Object
	{
	public:
		::System::String* ShowPicPath; // 0x10
		::Il2CppArray<::System::UInt32>* BattleAreaList; // 0x18
		::Il2CppArray<::System::UInt32>* MonsterList; // 0x20
		::System::String* IconPath; // 0x28
		::System::UInt32 SeasonID; // 0x30
		::System::UInt32 InitialRandomCode; // 0x34
		::System::UInt32 BossBattleArea; // 0x38
		::RPG::Client::TextID CampName; // 0x40
		::System::UInt32 ID; // 0x50
		::System::UInt32 IfRandomEnabled; // 0x54
		::RPG::Client::TextID CampDesc; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCAMPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCampConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCampConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCAMPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
