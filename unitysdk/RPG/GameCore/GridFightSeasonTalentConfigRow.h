#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSEASONTALENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189D60A0)
#define RPG_GAMECORE_GRIDFIGHTSEASONTALENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189D65B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSeasonTalentConfigRow_TypeDefinitionIndex = 12842;

	class GridFightSeasonTalentConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x10
		::Il2CppArray<::System::UInt32>* PreTalentIDList; // 0x18
		::System::String* IconPath; // 0x20
		::System::String* JsonPath; // 0x28
		::Il2CppArray<::System::UInt32>* NextTalentIDList; // 0x30
		::RPG::Client::TextID EffectDesc; // 0x38
		::System::UInt32 ID; // 0x48
		::System::UInt32 IsOCEffective; // 0x4C
		::System::UInt32 Cost; // 0x50
		::System::UInt32 IsImportant; // 0x54
		::RPG::Client::TextID EffectTitle; // 0x58
		::RPG::Client::TextID EffectTag; // 0x68
		::System::UInt32 SeasonID; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONTALENTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightSeasonTalentConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightSeasonTalentConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONTALENTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
