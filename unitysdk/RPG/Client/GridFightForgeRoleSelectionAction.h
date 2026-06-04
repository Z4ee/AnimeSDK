#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingSelectableBaseAction.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_7FF19F6206AF6DD7_24;
class Class_1_D17272E82AE804C2_436;
namespace RPG::Client { class GridFightForgeRoleAwardData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_GET_FORGEID_OFFSET UNITYSDK_OFFSET(0xBB40DE0)
#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_GET_FORGENAME_OFFSET UNITYSDK_OFFSET(0xBB40E00)
#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xBB40D60)
#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_ONAVATARDATACHANGED_OFFSET UNITYSDK_OFFSET(0xBB40EE0)
#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_SELECT_OFFSET UNITYSDK_OFFSET(0xBB41810)
#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_SET_FORGEID_OFFSET UNITYSDK_OFFSET(0xBB40DF0)
#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0xBB417A0)
#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xBB41410)
#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xBB410A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightForgeRoleSelectionAction_TypeDefinitionIndex = 60868;

	class GridFightForgeRoleSelectionAction : public ::RPG::Client::GridFightPendingSelectableBaseAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightForgeRoleAwardData*>* Selections; // 0x18
		::System::Boolean _IsSelected; // 0x20
		::System::UInt32 _ForgeID_k__BackingField; // 0x24
		::System::Int32 PendingSelectID; // 0x28

		::System::Void _ctor(::Class_1_7FF19F6206AF6DD7_24* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_24*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION__CTOR_OFFSET))(this, a1, a2);
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

		::System::Void Update(::Class_1_7FF19F6206AF6DD7_24* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_24*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_UPDATE_OFFSET))(this, a1);
		}

		::System::Void SyncHandleRsp(::Class_1_D17272E82AE804C2_436* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_436*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_SYNCHANDLERSP_OFFSET))(this, a1);
		}

		::System::Void Select(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_SELECT_OFFSET))(this, a1);
		}
	};
}
