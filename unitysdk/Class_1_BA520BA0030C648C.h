#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_16;
namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client { class ChallengePeak; }
namespace RPG::Client { class ChallengePeakBoss; }
namespace RPG::Client { class ChallengePeakGroup; }

#define CLASS_1_BA520BA0030C648C_GET_BOSSBUFFID_OFFSET UNITYSDK_OFFSET(0x1A6B77D0)
#define CLASS_1_BA520BA0030C648C_GET_BOSSCHALLENGE_OFFSET UNITYSDK_OFFSET(0x1A6B7750)
#define CLASS_1_BA520BA0030C648C_GET_NORMALCHALLENGE_OFFSET UNITYSDK_OFFSET(0x1A6B7740)
#define CLASS_1_BA520BA0030C648C_METHOD_1_172E4C97B6F73FCA_OFFSET UNITYSDK_OFFSET(0x1A6B78D0)
#define CLASS_1_BA520BA0030C648C_METHOD_1_2BE97901201987D5_OFFSET UNITYSDK_OFFSET(0x1A6B77F0)
#define CLASS_1_BA520BA0030C648C_METHOD_1_D1A503BD643A7C3D_OFFSET UNITYSDK_OFFSET(0x1A6B7760)
#define CLASS_1_BA520BA0030C648C_SET_BOSSBUFFID_OFFSET UNITYSDK_OFFSET(0x1A6B77E0)
#define CLASS_1_BA520BA0030C648C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6B78C0)

inline static constexpr unsigned int Class_1_BA520BA0030C648C_TypeDefinitionIndex = 63242;

class Class_1_BA520BA0030C648C : public ::System::Object
{
public:
	::RPG::Client::ChallengePeakBoss* _BossChallenge_k__BackingField; // 0x10
	::RPG::Client::ChallengePeak* _NormalChallenge_k__BackingField; // 0x18
	::System::UInt32 _BossBuffID_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::Client::ChallengePeak* a1, ::RPG::Client::ChallengePeakBoss* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeak*, ::RPG::Client::ChallengePeakBoss*))((::PBYTE)hIl2Cpp + CLASS_1_BA520BA0030C648C__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::ChallengePeak* get_NormalChallenge()
	{
		return ((::RPG::Client::ChallengePeak*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA520BA0030C648C_GET_NORMALCHALLENGE_OFFSET))(this);
	}

	::RPG::Client::ChallengePeakBoss* get_BossChallenge()
	{
		return ((::RPG::Client::ChallengePeakBoss*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA520BA0030C648C_GET_BOSSCHALLENGE_OFFSET))(this);
	}

	::RPG::Client::ChallengePeakGroup* Method_1_D1A503BD643A7C3D()
	{
		return ((::RPG::Client::ChallengePeakGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA520BA0030C648C_METHOD_1_D1A503BD643A7C3D_OFFSET))(this);
	}

	::System::UInt32 get_BossBuffID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA520BA0030C648C_GET_BOSSBUFFID_OFFSET))(this);
	}

	::System::Void set_BossBuffID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BA520BA0030C648C_SET_BOSSBUFFID_OFFSET))(this, a1);
	}

	static ::Class_1_BA520BA0030C648C* Method_1_2BE97901201987D5(::RPG::Client::ChallengePeak* a1, ::RPG::Client::ChallengePeakBoss* a2, ::Class_1_21C7581DFE99F091_16* a3)
	{
		return ((::Class_1_BA520BA0030C648C*(*)(::RPG::Client::ChallengePeak*, ::RPG::Client::ChallengePeakBoss*, ::Class_1_21C7581DFE99F091_16*))((::PBYTE)hIl2Cpp + CLASS_1_BA520BA0030C648C_METHOD_1_2BE97901201987D5_OFFSET))(a1, a2, a3);
	}

	::RPG::Client::BaseGameFlow* Method_1_172E4C97B6F73FCA()
	{
		return ((::RPG::Client::BaseGameFlow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA520BA0030C648C_METHOD_1_172E4C97B6F73FCA_OFFSET))(this);
	}
};
