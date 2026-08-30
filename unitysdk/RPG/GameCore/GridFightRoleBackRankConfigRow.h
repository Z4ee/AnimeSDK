#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTROLEBACKRANKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3B3B00)
#define RPG_GAMECORE_GRIDFIGHTROLEBACKRANKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B4000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleBackRankConfigRow_TypeDefinitionIndex = 13404;

	class GridFightRoleBackRankConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* Star3ParamList; // 0x10
		::System::String* CharacterAbilityName; // 0x18
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* GeneralPropertyList; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* Star1ParamList; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* Star4ParamList; // 0x30
		::Il2CppArray<::RPG::GameCore::FixPoint>* Star2ParamList; // 0x38
		::System::String* IconPath; // 0x40
		::RPG::Client::TextID Name; // 0x48
		::RPG::Client::TextID Desc; // 0x58
		::System::UInt32 RankID; // 0x68
		::RPG::GameCore::StringHash Trigger; // 0x6C
		::System::UInt32 Rank; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEBACKRANKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightRoleBackRankConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightRoleBackRankConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEBACKRANKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
