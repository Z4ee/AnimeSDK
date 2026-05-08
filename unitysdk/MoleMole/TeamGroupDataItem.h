#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class TeamDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_TEAMGROUPDATAITEM_GETSELECTTEAM_OFFSET UNITYSDK_OFFSET(0x13EBC360)
#define MOLEMOLE_TEAMGROUPDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x13EBC400)

namespace MoleMole
{
	inline static constexpr unsigned int TeamGroupDataItem_TypeDefinitionIndex = 77045;

	class TeamGroupDataItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::TeamDataItem*>* teamList; // 0x10
		::System::Int32 initTeamIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEAMGROUPDATAITEM__CTOR_OFFSET))(this);
		}

		::MoleMole::TeamDataItem* GetSelectTeam()
		{
			return ((::MoleMole::TeamDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEAMGROUPDATAITEM_GETSELECTTEAM_OFFSET))(this);
		}
	};
}
