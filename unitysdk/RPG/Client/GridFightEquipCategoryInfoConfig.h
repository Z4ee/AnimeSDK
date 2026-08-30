#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightEquipCategory.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCATEGORYINFOCONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x1C974EC0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCATEGORYINFOCONFIG_GET_CANBEUSEDASCRAFTCOST_OFFSET UNITYSDK_OFFSET(0x1C974FD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCATEGORYINFOCONFIG_GET_CATEGORYNAME_OFFSET UNITYSDK_OFFSET(0x1C974FB0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCATEGORYINFOCONFIG_GET_EQUIPCATEGORY_OFFSET UNITYSDK_OFFSET(0x1C974F90)
#define RPG_CLIENT_GRIDFIGHTEQUIPCATEGORYINFOCONFIG_SET_CATEGORYNAME_OFFSET UNITYSDK_OFFSET(0x1C974FC0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCATEGORYINFOCONFIG_SET_EQUIPCATEGORY_OFFSET UNITYSDK_OFFSET(0x1C974FA0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCATEGORYINFOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C974F30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCategoryInfoConfig_TypeDefinitionIndex = 64570;

	class GridFightEquipCategoryInfoConfig : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::GridFightEquipCategory, ::RPG::Client::GridFightEquipCategoryInfoConfig*>** StaticGet_GetConfigImpl()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightEquipCategory, ::RPG::Client::GridFightEquipCategoryInfoConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipCategoryInfoConfig_TypeDefinitionIndex)->GetStaticField(0x1FFE0);
		}
		::RPG::GameCore::GridFightEquipCategory _EquipCategory_k__BackingField; // 0x10
		::RPG::Client::TextID _CategoryName_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::GameCore::GridFightEquipCategory a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightEquipCategory))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCATEGORYINFOCONFIG__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightEquipCategoryInfoConfig* GetConfig(::RPG::GameCore::GridFightEquipCategory a1)
		{
			return ((::RPG::Client::GridFightEquipCategoryInfoConfig*(*)(::RPG::GameCore::GridFightEquipCategory))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCATEGORYINFOCONFIG_GETCONFIG_OFFSET))(a1);
		}

		::RPG::GameCore::GridFightEquipCategory get_EquipCategory()
		{
			return ((::RPG::GameCore::GridFightEquipCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCATEGORYINFOCONFIG_GET_EQUIPCATEGORY_OFFSET))(this);
		}

		::System::Void set_EquipCategory(::RPG::GameCore::GridFightEquipCategory a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightEquipCategory))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCATEGORYINFOCONFIG_SET_EQUIPCATEGORY_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_CategoryName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCATEGORYINFOCONFIG_GET_CATEGORYNAME_OFFSET))(this);
		}

		::System::Void set_CategoryName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCATEGORYINFOCONFIG_SET_CATEGORYNAME_OFFSET))(this, a1);
		}

		::System::Boolean get_CanBeUsedAsCraftCost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCATEGORYINFOCONFIG_GET_CANBEUSEDASCRAFTCOST_OFFSET))(this);
		}
	};
}
