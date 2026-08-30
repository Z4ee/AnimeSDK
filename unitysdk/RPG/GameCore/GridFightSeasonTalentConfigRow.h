#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSEASONTALENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3B8310)
#define RPG_GAMECORE_GRIDFIGHTSEASONTALENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B8810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSeasonTalentConfigRow_TypeDefinitionIndex = 13466;

	class GridFightSeasonTalentConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PreTalentIDList; // 0x10
		::Il2CppArray<::System::UInt32>* NextTalentIDList; // 0x18
		::System::String* IconPath; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x28
		::System::String* JsonPath; // 0x30
		::RPG::Client::TextID EffectDesc; // 0x38
		::RPG::Client::TextID EffectTitle; // 0x48
		::RPG::Client::TextID EffectTag; // 0x58
		::System::UInt32 IsImportant; // 0x68
		::System::UInt32 ID; // 0x6C
		::System::UInt32 IsOCEffective; // 0x70
		::System::UInt32 SeasonID; // 0x74
		::System::UInt32 Cost; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONTALENTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightSeasonTalentConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightSeasonTalentConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONTALENTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
