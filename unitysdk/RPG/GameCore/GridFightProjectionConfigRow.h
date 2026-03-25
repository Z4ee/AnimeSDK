#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarPropertyValue; }

#define RPG_GAMECORE_GRIDFIGHTPROJECTIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1727C8A0)
#define RPG_GAMECORE_GRIDFIGHTPROJECTIONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1727CD40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightProjectionConfigRow_TypeDefinitionIndex = 12324;

	class GridFightProjectionConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TraitList; // 0x10
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* AllMemberGeneralPropertyList; // 0x18
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* TraitListMemberGeneralPropertyList; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x28
		::Il2CppArray<::System::UInt32>* ActivationTraitLayerList; // 0x30
		::RPG::Client::TextID ProjectionName; // 0x38
		::System::UInt32 Rarity; // 0x48
		::System::UInt32 MazebuffID; // 0x4C
		::RPG::Client::TextID ProjectionDesc; // 0x50
		::System::UInt32 RoleID; // 0x60
		::System::UInt32 ID; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPROJECTIONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightProjectionConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightProjectionConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPROJECTIONCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
