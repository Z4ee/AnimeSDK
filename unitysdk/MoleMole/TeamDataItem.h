#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TeamUniqueAbility.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole { class InLevelBuddyDataItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_TEAMDATAITEM_CONFIRMFIRSTAVAILABLEAVATARINDEX_OFFSET UNITYSDK_OFFSET(0x11D739A0)
#define MOLEMOLE_TEAMDATAITEM_GET_SELECTINDEX_OFFSET UNITYSDK_OFFSET(0x11D73940)
#define MOLEMOLE_TEAMDATAITEM_MARKCLEARRECREATE_OFFSET UNITYSDK_OFFSET(0x11D73CA0)
#define MOLEMOLE_TEAMDATAITEM_RUNTIMEREMOVEAVATARDATAITEMBYINDEX_OFFSET UNITYSDK_OFFSET(0x11D737E0)
#define MOLEMOLE_TEAMDATAITEM__CONFIRMFIRSTAVAILABLEAVATARINDEX_G___MARKLOADSHOW_8_0_OFFSET UNITYSDK_OFFSET(0x11D73C80)
#define MOLEMOLE_TEAMDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x11D73D90)

namespace MoleMole
{
	inline static constexpr unsigned int TeamDataItem_TypeDefinitionIndex = 88847;

	class TeamDataItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>* partnerAvatarMemberList; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* EquipedBuddys; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TeamUniqueAbility>* teamUniqueAbility; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>* avatarMemberList; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::InLevelAvatarDataItem*>* removedAvatarMemberList; // 0x30
		::System::Boolean excludePartnerMainTeam; // 0x38
		::System::Int32 initTeamMemberIndex; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEAMDATAITEM__CTOR_OFFSET))(this);
		}

		::System::Void RuntimeRemoveAvatarDataItemByIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TEAMDATAITEM_RUNTIMEREMOVEAVATARDATAITEMBYINDEX_OFFSET))(this, index);
		}

		::System::Int32 get_SelectIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEAMDATAITEM_GET_SELECTINDEX_OFFSET))(this);
		}

		::System::Boolean ConfirmFirstAvailableAvatarIndex(::System::UInt32 priorityLocalAvatarId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_TEAMDATAITEM_CONFIRMFIRSTAVAILABLEAVATARINDEX_OFFSET))(this, priorityLocalAvatarId);
		}

		::System::Void MarkClearReCreate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEAMDATAITEM_MARKCLEARRECREATE_OFFSET))(this);
		}

		static ::System::Boolean _ConfirmFirstAvailableAvatarIndex_g___MarkLoadShow_8_0(::MoleMole::InLevelAvatarDataItem* inData)
		{
			return ((::System::Boolean(*)(::MoleMole::InLevelAvatarDataItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_TEAMDATAITEM__CONFIRMFIRSTAVAILABLEAVATARINDEX_G___MARKLOADSHOW_8_0_OFFSET))(inData);
		}
	};
}
