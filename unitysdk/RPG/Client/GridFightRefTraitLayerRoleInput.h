#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERROLEINPUT_GET_EQUIPIDS_OFFSET UNITYSDK_OFFSET(0xBBD8920)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERROLEINPUT_GET_ROLEID_OFFSET UNITYSDK_OFFSET(0xBBD8900)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERROLEINPUT_RPG_CLIENT_IGRIDFIGHTREFTRAITLAYERROLEINPUT_GET_EQUIPIDS_OFFSET UNITYSDK_OFFSET(0xBBD8940)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERROLEINPUT_SET_EQUIPIDS_OFFSET UNITYSDK_OFFSET(0xBBD8930)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERROLEINPUT_SET_ROLEID_OFFSET UNITYSDK_OFFSET(0xBBD8910)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERROLEINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0xBBD8990)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRefTraitLayerRoleInput_TypeDefinitionIndex = 60601;

	class GridFightRefTraitLayerRoleInput : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _EquipIDs_k__BackingField; // 0x10
		::System::UInt32 _RoleID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERROLEINPUT__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_RoleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERROLEINPUT_GET_ROLEID_OFFSET))(this);
		}

		::System::Void set_RoleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERROLEINPUT_SET_ROLEID_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_EquipIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERROLEINPUT_GET_EQUIPIDS_OFFSET))(this);
		}

		::System::Void set_EquipIDs(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERROLEINPUT_SET_EQUIPIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* RPG_Client_IGridFightRefTraitLayerRoleInput_get_EquipIDs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERROLEINPUT_RPG_CLIENT_IGRIDFIGHTREFTRAITLAYERROLEINPUT_GET_EQUIPIDS_OFFSET))(this);
		}
	};
}
