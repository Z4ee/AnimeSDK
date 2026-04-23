#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingSelectableBaseAction.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_7FF19F6206AF6DD7_24;
class Class_1_D17272E82AE804C2_423;
namespace RPG::Client { class GridFightForgeExpertAwardData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTFORGEEXPERTSELECTIONACTION_GET_FORGEID_OFFSET UNITYSDK_OFFSET(0xA49F870)
#define RPG_CLIENT_GRIDFIGHTFORGEEXPERTSELECTIONACTION_GET_FORGENAME_OFFSET UNITYSDK_OFFSET(0xA49F890)
#define RPG_CLIENT_GRIDFIGHTFORGEEXPERTSELECTIONACTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA49F7E0)
#define RPG_CLIENT_GRIDFIGHTFORGEEXPERTSELECTIONACTION_ONAVATARDATACHANGED_OFFSET UNITYSDK_OFFSET(0xA49F9C0)
#define RPG_CLIENT_GRIDFIGHTFORGEEXPERTSELECTIONACTION_SELECT_OFFSET UNITYSDK_OFFSET(0xA49FD30)
#define RPG_CLIENT_GRIDFIGHTFORGEEXPERTSELECTIONACTION_SET_FORGEID_OFFSET UNITYSDK_OFFSET(0xA49F880)
#define RPG_CLIENT_GRIDFIGHTFORGEEXPERTSELECTIONACTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0xA49F970)
#define RPG_CLIENT_GRIDFIGHTFORGEEXPERTSELECTIONACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA49FB60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightForgeExpertSelectionAction_TypeDefinitionIndex = 59932;

	class GridFightForgeExpertSelectionAction : public ::RPG::Client::GridFightPendingSelectableBaseAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightForgeExpertAwardData*>* Selections; // 0x18
		::System::UInt32 _ForgeID_k__BackingField; // 0x20
		::System::Boolean _IsSelected; // 0x24

		::System::Void _ctor(::Class_1_7FF19F6206AF6DD7_24* selection, ::System::UInt32 actionID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_24*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEXPERTSELECTIONACTION__CTOR_OFFSET))(this, selection, actionID);
		}

		::RPG::Client::GridFightForgeExpertAwardData* get_Item(::System::Int32 index)
		{
			return ((::RPG::Client::GridFightForgeExpertAwardData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEXPERTSELECTIONACTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::UInt32 get_ForgeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEXPERTSELECTIONACTION_GET_FORGEID_OFFSET))(this);
		}

		::System::Void set_ForgeID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEXPERTSELECTIONACTION_SET_FORGEID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_ForgeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEXPERTSELECTIONACTION_GET_FORGENAME_OFFSET))(this);
		}

		::System::Void SyncHandleRsp(::Class_1_D17272E82AE804C2_423* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_423*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEXPERTSELECTIONACTION_SYNCHANDLERSP_OFFSET))(this, rsp);
		}

		::System::Void OnAvatarDataChanged(::System::UInt32 avatarRealID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEXPERTSELECTIONACTION_ONAVATARDATACHANGED_OFFSET))(this, avatarRealID);
		}

		::System::Void Select(::System::UInt32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEXPERTSELECTIONACTION_SELECT_OFFSET))(this, index);
		}
	};
}
