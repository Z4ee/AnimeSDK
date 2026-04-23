#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraTeamData; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA085450)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA085480)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__GET_PLAYERFINISHWORKCNT_B__19_0_OFFSET UNITYSDK_OFFSET(0xA0854B0)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__SYNCPLAYERFINISHWORKCNT_B__5_0_OFFSET UNITYSDK_OFFSET(0xA085490)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraTeamRankManager___c_TypeDefinitionIndex = 58446;

	class ChimeraTeamRankManager___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::Client::ChimeraTeamData*>** StaticGet___9__5_0()
		{
			return (::System::Predicate_1<::RPG::Client::ChimeraTeamData*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraTeamRankManager___c_TypeDefinitionIndex)->GetStaticField(0x5BCA0);
		}
		static ::RPG::Client::ChimeraTeamRankManager___c** StaticGet___9()
		{
			return (::RPG::Client::ChimeraTeamRankManager___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraTeamRankManager___c_TypeDefinitionIndex)->GetStaticField(0x5BCA8);
		}
		static ::System::Predicate_1<::RPG::Client::ChimeraTeamData*>** StaticGet___9__19_0()
		{
			return (::System::Predicate_1<::RPG::Client::ChimeraTeamData*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraTeamRankManager___c_TypeDefinitionIndex)->GetStaticField(0x5BCB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _SyncPlayerFinishWorkCnt_b__5_0(::RPG::Client::ChimeraTeamData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraTeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__SYNCPLAYERFINISHWORKCNT_B__5_0_OFFSET))(this, data);
		}

		::System::Boolean _get_PlayerFinishWorkCnt_b__19_0(::RPG::Client::ChimeraTeamData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraTeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__GET_PLAYERFINISHWORKCNT_B__19_0_OFFSET))(this, data);
		}
	};
}
