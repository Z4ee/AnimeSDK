#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingSelectableBaseAction.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_D17272E82AE804C2_507;
class Class_1_FDFA365FE186E8F2_17;
namespace RPG::Client { class GridFightForgeRoleAwardData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_GET_FORGEID_OFFSET UNITYSDK_OFFSET(0x1BD4AD80)
#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_GET_FORGENAME_OFFSET UNITYSDK_OFFSET(0x1BD4ADA0)
#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1BD4AD00)
#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_ONAVATARDATACHANGED_OFFSET UNITYSDK_OFFSET(0x1BD4AE80)
#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_SELECT_OFFSET UNITYSDK_OFFSET(0x1BD4BA20)
#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_SET_FORGEID_OFFSET UNITYSDK_OFFSET(0x1BD4AD90)
#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0x1BD4B9B0)
#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BD4B500)
#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD4B040)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightForgeRoleSelectionAction_TypeDefinitionIndex = 65165;

	class GridFightForgeRoleSelectionAction : public ::RPG::Client::GridFightPendingSelectableBaseAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightForgeRoleAwardData*>* Selections; // 0x18
		::System::UInt32 _ForgeID_k__BackingField; // 0x20
		::System::Int32 PendingSelectID; // 0x24
		::System::Boolean _IsSelected; // 0x28

		::System::Void _ctor(::Class_1_FDFA365FE186E8F2_17* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FDFA365FE186E8F2_17*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightForgeRoleAwardData* get_Item(::System::Int32 a1)
		{
			return ((::RPG::Client::GridFightForgeRoleAwardData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_GET_ITEM_OFFSET))(this, a1);
		}

		::System::UInt32 get_ForgeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_GET_FORGEID_OFFSET))(this);
		}

		::System::Void set_ForgeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_SET_FORGEID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_ForgeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_GET_FORGENAME_OFFSET))(this);
		}

		::System::Void OnAvatarDataChanged(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_ONAVATARDATACHANGED_OFFSET))(this, a1);
		}

		::System::Void Update(::Class_1_FDFA365FE186E8F2_17* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FDFA365FE186E8F2_17*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_UPDATE_OFFSET))(this, a1);
		}

		::System::Void SyncHandleRsp(::Class_1_D17272E82AE804C2_507* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_507*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_SYNCHANDLERSP_OFFSET))(this, a1);
		}

		::System::Void Select(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_SELECT_OFFSET))(this, a1);
		}
	};
}
