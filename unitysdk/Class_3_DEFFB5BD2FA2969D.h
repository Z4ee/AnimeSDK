#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleByTeamRound; }

#define CLASS_3_DEFFB5BD2FA2969D_METHOD_3_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x1C971220)
#define CLASS_3_DEFFB5BD2FA2969D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C971200)

inline static constexpr unsigned int Class_3_DEFFB5BD2FA2969D_TypeDefinitionIndex = 43156;

class Class_3_DEFFB5BD2FA2969D : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByTeamRound* IGHAHBNLIJA; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleByTeamRound* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByTeamRound*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_3_DEFFB5BD2FA2969D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DEFFB5BD2FA2969D_METHOD_3_A3FAE12D7B6ACD62_OFFSET))(this);
	}
};
