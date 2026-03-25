#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTDIVISIONLEVELSHOWROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17257120)
#define RPG_GAMECORE_GRIDFIGHTDIVISIONLEVELSHOWROW__CTOR_OFFSET UNITYSDK_OFFSET(0x172574A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightDivisionLevelShowRow_TypeDefinitionIndex = 12441;

	class GridFightDivisionLevelShowRow : public ::System::Object
	{
	public:
		::System::String* DivisionShowPic; // 0x10
		::System::String* DivisionIcon; // 0x18
		::RPG::Client::TextID DivisionNameWithNum; // 0x20
		::System::UInt32 DivisionRewardQuest; // 0x30
		::System::UInt32 SeasonID; // 0x34
		::RPG::Client::TextID DivisionName; // 0x38
		::RPG::Client::TextID DivisionAbbr; // 0x48
		::System::UInt32 DivisionLevel; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONLEVELSHOWROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightDivisionLevelShowRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightDivisionLevelShowRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONLEVELSHOWROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
