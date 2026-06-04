#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingSelectableBaseAction.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_7FF19F6206AF6DD7_25;
class Class_1_D17272E82AE804C2_436;
namespace RPG::Client { class GridFightForgeExpertAwardData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTFORGEEXPERTSELECTIONACTION_GET_FORGEID_OFFSET UNITYSDK_OFFSET(0xBB3F030)
#define RPG_CLIENT_GRIDFIGHTFORGEEXPERTSELECTIONACTION_GET_FORGENAME_OFFSET UNITYSDK_OFFSET(0xBB3F050)
#define RPG_CLIENT_GRIDFIGHTFORGEEXPERTSELECTIONACTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xBB3EFB0)
#define RPG_CLIENT_GRIDFIGHTFORGEEXPERTSELECTIONACTION_ONAVATARDATACHANGED_OFFSET UNITYSDK_OFFSET(0xBB3F180)
#define RPG_CLIENT_GRIDFIGHTFORGEEXPERTSELECTIONACTION_SELECT_OFFSET UNITYSDK_OFFSET(0xBB3F580)
#define RPG_CLIENT_GRIDFIGHTFORGEEXPERTSELECTIONACTION_SET_FORGEID_OFFSET UNITYSDK_OFFSET(0xBB3F040)
#define RPG_CLIENT_GRIDFIGHTFORGEEXPERTSELECTIONACTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0xBB3F130)
#define RPG_CLIENT_GRIDFIGHTFORGEEXPERTSELECTIONACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xBB3F330)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightForgeExpertSelectionAction_TypeDefinitionIndex = 60867;

	class GridFightForgeExpertSelectionAction : public ::RPG::Client::GridFightPendingSelectableBaseAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightForgeExpertAwardData*>* Selections; // 0x18
		::System::Boolean _IsSelected; // 0x20
		::System::UInt32 _ForgeID_k__BackingField; // 0x24

		::System::Void _ctor(::Class_1_7FF19F6206AF6DD7_25* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_25*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEXPERTSELECTIONACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightForgeExpertAwardData* get_Item(::System::Int32 a1)
		{
			return ((::RPG::Client::GridFightForgeExpertAwardData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEXPERTSELECTIONACTION_GET_ITEM_OFFSET))(this, a1);
		}

		::System::UInt32 get_ForgeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEXPERTSELECTIONACTION_GET_FORGEID_OFFSET))(this);
		}

		::System::Void set_ForgeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEXPERTSELECTIONACTION_SET_FORGEID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_ForgeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEXPERTSELECTIONACTION_GET_FORGENAME_OFFSET))(this);
		}

		::System::Void SyncHandleRsp(::Class_1_D17272E82AE804C2_436* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_436*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEXPERTSELECTIONACTION_SYNCHANDLERSP_OFFSET))(this, a1);
		}

		::System::Void OnAvatarDataChanged(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEXPERTSELECTIONACTION_ONAVATARDATACHANGED_OFFSET))(this, a1);
		}

		::System::Void Select(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEXPERTSELECTIONACTION_SELECT_OFFSET))(this, a1);
		}
	};
}
