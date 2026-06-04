#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTBACKENDROLEEQUIPMENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x197DAAE0)
#define RPG_GAMECORE_GRIDFIGHTBACKENDROLEEQUIPMENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x197DAE20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightBackendRoleEquipmentConfigRow_TypeDefinitionIndex = 12881;

	class GridFightBackendRoleEquipmentConfigRow : public ::System::Object
	{
	public:
		::System::String* ParamFormat; // 0x10
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* AllMemberGeneralPropertyList; // 0x18
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* OwnerGeneralPropertyList; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x28
		::System::UInt32 EquipmentID; // 0x30
		::System::UInt32 Level; // 0x34
		::System::UInt32 RoleID; // 0x38
		::RPG::Client::TextID BackEquipmentDesc; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBACKENDROLEEQUIPMENTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightBackendRoleEquipmentConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightBackendRoleEquipmentConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBACKENDROLEEQUIPMENTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
