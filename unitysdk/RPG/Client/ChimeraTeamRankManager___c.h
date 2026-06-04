#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraTeamData; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB6C4AD0)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB6C4B00)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__GET_PLAYERFINISHWORKCNT_B__19_0_OFFSET UNITYSDK_OFFSET(0xB6C4B30)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__SYNCPLAYERFINISHWORKCNT_B__5_0_OFFSET UNITYSDK_OFFSET(0xB6C4B10)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraTeamRankManager___c_TypeDefinitionIndex = 59376;

	class ChimeraTeamRankManager___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChimeraTeamRankManager___c** StaticGet___9()
		{
			return (::RPG::Client::ChimeraTeamRankManager___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraTeamRankManager___c_TypeDefinitionIndex)->GetStaticField(0x650E0);
		}
		static ::System::Predicate_1<::RPG::Client::ChimeraTeamData*>** StaticGet___9__5_0()
		{
			return (::System::Predicate_1<::RPG::Client::ChimeraTeamData*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraTeamRankManager___c_TypeDefinitionIndex)->GetStaticField(0x650E8);
		}
		static ::System::Predicate_1<::RPG::Client::ChimeraTeamData*>** StaticGet___9__19_0()
		{
			return (::System::Predicate_1<::RPG::Client::ChimeraTeamData*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraTeamRankManager___c_TypeDefinitionIndex)->GetStaticField(0x650F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _SyncPlayerFinishWorkCnt_b__5_0(::RPG::Client::ChimeraTeamData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraTeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__SYNCPLAYERFINISHWORKCNT_B__5_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_PlayerFinishWorkCnt_b__19_0(::RPG::Client::ChimeraTeamData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraTeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__GET_PLAYERFINISHWORKCNT_B__19_0_OFFSET))(this, a1);
		}
	};
}
