#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipChangeEvent; }
namespace RPG::Client { class GridFightRole; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTEAMCHANGEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x98C6EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeamChangeEvent_TypeDefinitionIndex = 52901;

	class GridFightTeamChangeEvent : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipChangeEvent*>* EquipChanges; // 0x10
		::System::Action* returnCallback; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* StarChangeRoles; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCHANGEEVENT__CTOR_OFFSET))(this);
		}
	};
}
