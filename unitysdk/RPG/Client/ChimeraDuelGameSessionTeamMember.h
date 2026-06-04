#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_02098A44CBBFEEE1;
namespace RPG::Client { class ChimeraDuelGameSessionChimera; }

#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAMMEMBER_CREATEFAKE_OFFSET UNITYSDK_OFFSET(0xB691C40)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAMMEMBER_CREATE_OFFSET UNITYSDK_OFFSET(0xB690960)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAMMEMBER_GET_CHIMERA_OFFSET UNITYSDK_OFFSET(0xB6923E0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAMMEMBER_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xB68D9E0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAMMEMBER__CTOR_OFFSET UNITYSDK_OFFSET(0xB6923F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameSessionTeamMember_TypeDefinitionIndex = 59273;

	class ChimeraDuelGameSessionTeamMember : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDuelGameSessionChimera* _Chimera_k__BackingField; // 0x10

		::System::Void _ctor(::RPG::Client::ChimeraDuelGameSessionChimera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionChimera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAMMEMBER__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAMMEMBER_GET_UNIQUEID_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelGameSessionChimera* get_Chimera()
		{
			return ((::RPG::Client::ChimeraDuelGameSessionChimera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAMMEMBER_GET_CHIMERA_OFFSET))(this);
		}

		static ::RPG::Client::ChimeraDuelGameSessionTeamMember* Create(::Class_1_02098A44CBBFEEE1* a1)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionTeamMember*(*)(::Class_1_02098A44CBBFEEE1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAMMEMBER_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::ChimeraDuelGameSessionTeamMember* CreateFake(::RPG::Client::ChimeraDuelGameSessionChimera* a1)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionTeamMember*(*)(::RPG::Client::ChimeraDuelGameSessionChimera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAMMEMBER_CREATEFAKE_OFFSET))(a1);
		}
	};
}
