#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_02098A44CBBFEEE1;
namespace RPG::Client { class ChimeraDuelGameSessionChimera; }

#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAMMEMBER_CREATEFAKE_OFFSET UNITYSDK_OFFSET(0x93A4B20)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAMMEMBER_CREATE_OFFSET UNITYSDK_OFFSET(0x93A26D0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAMMEMBER_GET_CHIMERA_OFFSET UNITYSDK_OFFSET(0x93A5380)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAMMEMBER_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x93A2750)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAMMEMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x93A5390)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameSessionTeamMember_TypeDefinitionIndex = 51405;

	class ChimeraDuelGameSessionTeamMember : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDuelGameSessionChimera* _Chimera_k__BackingField; // 0x10

		::System::Void _ctor(::RPG::Client::ChimeraDuelGameSessionChimera* chimera)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionChimera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAMMEMBER__CTOR_OFFSET))(this, chimera);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAMMEMBER_GET_UNIQUEID_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelGameSessionChimera* get_Chimera()
		{
			return ((::RPG::Client::ChimeraDuelGameSessionChimera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAMMEMBER_GET_CHIMERA_OFFSET))(this);
		}

		static ::RPG::Client::ChimeraDuelGameSessionTeamMember* Create(::Class_1_02098A44CBBFEEE1* serverData)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionTeamMember*(*)(::Class_1_02098A44CBBFEEE1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAMMEMBER_CREATE_OFFSET))(serverData);
		}

		static ::RPG::Client::ChimeraDuelGameSessionTeamMember* CreateFake(::RPG::Client::ChimeraDuelGameSessionChimera* chimera)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionTeamMember*(*)(::RPG::Client::ChimeraDuelGameSessionChimera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAMMEMBER_CREATEFAKE_OFFSET))(chimera);
		}
	};
}
