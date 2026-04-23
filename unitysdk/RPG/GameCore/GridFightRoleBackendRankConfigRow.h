#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTROLEBACKENDRANKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189D1EF0)
#define RPG_GAMECORE_GRIDFIGHTROLEBACKENDRANKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189D25A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleBackendRankConfigRow_TypeDefinitionIndex = 12779;

	class GridFightRoleBackendRankConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ModifySkillList; // 0x10
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* AllMemberGeneralPropertyList; // 0x18
		::System::String* IconPath; // 0x20
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x28
		::Il2CppArray<::System::Double>* DescParamList; // 0x30
		::Il2CppArray<::RPG::GameCore::FixPoint>* Param; // 0x38
		::Il2CppArray<::System::String*>* RankAbility; // 0x40
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* OwnerGeneralPropertyList; // 0x48
		::RPG::Client::TextID Name; // 0x50
		::RPG::GameCore::StringHash Trigger; // 0x60
		::System::UInt32 Rank; // 0x64
		::System::UInt32 RankID; // 0x68
		::RPG::Client::TextID Desc; // 0x70
		::RPG::GameCore::FixPoint ModifyInitialEnergyBar; // 0x80
		::RPG::GameCore::FixPoint ModifyEnergyBar; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEBACKENDRANKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightRoleBackendRankConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightRoleBackendRankConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEBACKENDRANKCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
