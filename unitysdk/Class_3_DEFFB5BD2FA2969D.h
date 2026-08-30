#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_EFDEDB2BC2764B7D;
namespace RPG::GameCore { class MarbleByTeamRound; }

#define CLASS_3_DEFFB5BD2FA2969D_METHOD_3_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x1D051070)
#define CLASS_3_DEFFB5BD2FA2969D__CTOR_OFFSET UNITYSDK_OFFSET(0x1D051050)

inline static constexpr unsigned int Class_3_DEFFB5BD2FA2969D_TypeDefinitionIndex = 41516;

class Class_3_DEFFB5BD2FA2969D : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByTeamRound* IGHAHBNLIJA; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleByTeamRound* a1, ::Class_1_EFDEDB2BC2764B7D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByTeamRound*, ::Class_1_EFDEDB2BC2764B7D*))((::PBYTE)hIl2Cpp + CLASS_3_DEFFB5BD2FA2969D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DEFFB5BD2FA2969D_METHOD_3_A3FAE12D7B6ACD62_OFFSET))(this);
	}
};
