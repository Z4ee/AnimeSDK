#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingSelectableBaseAction.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_3C58D309C7A040F5_20;
class Class_1_FA4F4A67B1C04320_407;
namespace RPG::Client { class GridFightForgeRoleAwardData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_GET_FORGEID_OFFSET UNITYSDK_OFFSET(0x981DA50)
#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_GET_FORGENAME_OFFSET UNITYSDK_OFFSET(0x981DA70)
#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x981D9C0)
#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_ONAVATARDATACHANGED_OFFSET UNITYSDK_OFFSET(0x981DB50)
#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_SELECT_OFFSET UNITYSDK_OFFSET(0x981E450)
#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_SET_FORGEID_OFFSET UNITYSDK_OFFSET(0x981DA60)
#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0x981E3E0)
#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x981E030)
#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x981DD00)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightForgeRoleSelectionAction_TypeDefinitionIndex = 52857;

	class GridFightForgeRoleSelectionAction : public ::RPG::Client::GridFightPendingSelectableBaseAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightForgeRoleAwardData*>* Selections; // 0x18
		::System::Int32 PendingSelectID; // 0x20
		::System::Boolean _IsSelected; // 0x24
		::System::UInt32 _ForgeID_k__BackingField; // 0x28

		::System::Void _ctor(::Class_1_3C58D309C7A040F5_20* selection, ::System::UInt32 actionID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3C58D309C7A040F5_20*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION__CTOR_OFFSET))(this, selection, actionID);
		}

		::RPG::Client::GridFightForgeRoleAwardData* get_Item(::System::Int32 index)
		{
			return ((::RPG::Client::GridFightForgeRoleAwardData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::UInt32 get_ForgeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_GET_FORGEID_OFFSET))(this);
		}

		::System::Void set_ForgeID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_SET_FORGEID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_ForgeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_GET_FORGENAME_OFFSET))(this);
		}

		::System::Void OnAvatarDataChanged(::System::UInt32 avatarRealID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_ONAVATARDATACHANGED_OFFSET))(this, avatarRealID);
		}

		::System::Void Update(::Class_1_3C58D309C7A040F5_20* selection)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3C58D309C7A040F5_20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_UPDATE_OFFSET))(this, selection);
		}

		::System::Void SyncHandleRsp(::Class_1_FA4F4A67B1C04320_407* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_407*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_SYNCHANDLERSP_OFFSET))(this, rsp);
		}

		::System::Void Select(::System::UInt32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_SELECT_OFFSET))(this, index);
		}
	};
}
