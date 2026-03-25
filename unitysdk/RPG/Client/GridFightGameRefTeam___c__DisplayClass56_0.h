#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F1E9B98123CB5682;
class Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B;
namespace RPG::Client { class GridFightGameRefTeam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS56_0__CTOR_OFFSET UNITYSDK_OFFSET(0x983A6B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS56_0___SYNCTEAM_B__0_OFFSET UNITYSDK_OFFSET(0x983B270)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefTeam___c__DisplayClass56_0_TypeDefinitionIndex = 52618;

	class GridFightGameRefTeam___c__DisplayClass56_0 : public ::System::Object
	{
	public:
		::Class_1_F1E9B98123CB5682* teamFactory; // 0x10
		::System::Collections::Generic::List_1<::Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B*>* appendingFinalRoles; // 0x18
		::RPG::Client::GridFightGameRefTeam* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS56_0__CTOR_OFFSET))(this);
		}

		::System::Void __SyncTeam_b__0(::Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B* role)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS56_0___SYNCTEAM_B__0_OFFSET))(this, role);
		}
	};
}
