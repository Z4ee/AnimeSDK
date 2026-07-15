#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class GridFightBackendRoleEquipmentConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTBACKEQUIPMENTCONFIG_GET_ALLMEMBERGENERALPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0x19304BC0)
#define RPG_CLIENT_GRIDFIGHTBACKEQUIPMENTCONFIG_GET_DESCTEXTID_OFFSET UNITYSDK_OFFSET(0x1A611010)
#define RPG_CLIENT_GRIDFIGHTBACKEQUIPMENTCONFIG_GET_DESC_OFFSET UNITYSDK_OFFSET(0x19304B20)
#define RPG_CLIENT_GRIDFIGHTBACKEQUIPMENTCONFIG_GET_EQUIPMENTID_OFFSET UNITYSDK_OFFSET(0x19304A80)
#define RPG_CLIENT_GRIDFIGHTBACKEQUIPMENTCONFIG_GET_OWNERGENERALPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0x19304B70)
#define RPG_CLIENT_GRIDFIGHTBACKEQUIPMENTCONFIG_GET_PARAMFORMAT_OFFSET UNITYSDK_OFFSET(0x19304C60)
#define RPG_CLIENT_GRIDFIGHTBACKEQUIPMENTCONFIG_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x19304C10)
#define RPG_CLIENT_GRIDFIGHTBACKEQUIPMENTCONFIG_GET_RANK_OFFSET UNITYSDK_OFFSET(0x19304AD0)
#define RPG_CLIENT_GRIDFIGHTBACKEQUIPMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19304A70)
#define RPG_CLIENT_GRIDFIGHTBACKEQUIPMENTCONFIG__GETDESC_OFFSET UNITYSDK_OFFSET(0x1A611080)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBackEquipmentConfig_TypeDefinitionIndex = 62204;

	class GridFightBackEquipmentConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightBackendRoleEquipmentConfigRow* _Row; // 0x10

		::System::Void _ctor(::RPG::GameCore::GridFightBackendRoleEquipmentConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightBackendRoleEquipmentConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKEQUIPMENTCONFIG__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_EquipmentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKEQUIPMENTCONFIG_GET_EQUIPMENTID_OFFSET))(this);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKEQUIPMENTCONFIG_GET_RANK_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKEQUIPMENTCONFIG_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* get_OwnerGeneralPropertyList()
		{
			return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKEQUIPMENTCONFIG_GET_OWNERGENERALPROPERTYLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* get_AllMemberGeneralPropertyList()
		{
			return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKEQUIPMENTCONFIG_GET_ALLMEMBERGENERALPROPERTYLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_ParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKEQUIPMENTCONFIG_GET_PARAMLIST_OFFSET))(this);
		}

		::System::String* get_ParamFormat()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKEQUIPMENTCONFIG_GET_PARAMFORMAT_OFFSET))(this);
		}

		::RPG::Client::TextID get_DescTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKEQUIPMENTCONFIG_GET_DESCTEXTID_OFFSET))(this);
		}

		::System::String* _GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKEQUIPMENTCONFIG__GETDESC_OFFSET))(this);
		}
	};
}
