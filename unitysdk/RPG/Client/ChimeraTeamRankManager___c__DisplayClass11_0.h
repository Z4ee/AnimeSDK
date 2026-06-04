#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraTeamData; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB6C4480)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__DISPLAYCLASS11_0___SORTTEAMDATA_B__0_OFFSET UNITYSDK_OFFSET(0xB6C4D40)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraTeamRankManager___c__DisplayClass11_0_TypeDefinitionIndex = 59378;

	class ChimeraTeamRankManager___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::Predicate_1<::RPG::Client::ChimeraTeamData*>* __9__0; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChimeraTeamData*>* sortTeamDatas; // 0x18
		::System::Int32 i; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __SortTeamData_b__0(::RPG::Client::ChimeraTeamData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraTeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__DISPLAYCLASS11_0___SORTTEAMDATA_B__0_OFFSET))(this, a1);
		}
	};
}
