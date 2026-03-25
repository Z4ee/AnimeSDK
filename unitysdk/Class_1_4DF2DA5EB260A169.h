#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_375;
namespace RPG::GameCore { class FoundationAndBallBind; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace UnityEngine { class Transform; }

#define CLASS_1_4DF2DA5EB260A169_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D52920)
#define CLASS_1_4DF2DA5EB260A169_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x8D53130)
#define CLASS_1_4DF2DA5EB260A169_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x8D52880)
#define CLASS_1_4DF2DA5EB260A169_METHOD_1_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x8D536B0)
#define CLASS_1_4DF2DA5EB260A169_METHOD_1_614288621F812149_OFFSET UNITYSDK_OFFSET(0x8D53190)
#define CLASS_1_4DF2DA5EB260A169_METHOD_1_6DC60149A270E0D4_OFFSET UNITYSDK_OFFSET(0x8D52810)
#define CLASS_1_4DF2DA5EB260A169_METHOD_1_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0x8D53020)
#define CLASS_1_4DF2DA5EB260A169_METHOD_1_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0x8D53750)
#define CLASS_1_4DF2DA5EB260A169_METHOD_1_A7B1B50781373DB6_OFFSET UNITYSDK_OFFSET(0x8D531D0)
#define CLASS_1_4DF2DA5EB260A169_METHOD_1_A913C7AA4DDC5C98_OFFSET UNITYSDK_OFFSET(0x8D52AB0)
#define CLASS_1_4DF2DA5EB260A169_METHOD_1_BB051D090FC3F71E_OFFSET UNITYSDK_OFFSET(0x8D52480)
#define CLASS_1_4DF2DA5EB260A169_METHOD_1_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x8D52DE0)
#define CLASS_1_4DF2DA5EB260A169_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8D530E0)
#define CLASS_1_4DF2DA5EB260A169_METHOD_1_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0x8D53280)
#define CLASS_1_4DF2DA5EB260A169__CTOR_OFFSET UNITYSDK_OFFSET(0x8D537E0)

inline static constexpr unsigned int Class_1_4DF2DA5EB260A169_TypeDefinitionIndex = 46309;

class Class_1_4DF2DA5EB260A169 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_1; // 0x10
	::RPG::GameCore::PropComponent* Field_1_3; // 0x18
	::RPG::GameCore::FoundationAndBallBind* Field_1_4; // 0x20
	::RPG::GameCore::GameEntity* Field_1_0; // 0x28
	::RPG::GameCore::PropComponent* Field_1_2; // 0x30
	::UnityEngine::Transform* Field_1_5; // 0x38
	::System::Single Field_1_8; // 0x40
	::System::Single Field_1_7; // 0x44
	::System::Single Field_1_9; // 0x48
	::System::Single Field_1_10; // 0x4C
	::System::Single Field_1_6; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DF2DA5EB260A169__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BB051D090FC3F71E(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FoundationAndBallBind* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FoundationAndBallBind*))((::PBYTE)hIl2Cpp + CLASS_1_4DF2DA5EB260A169_METHOD_1_BB051D090FC3F71E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DF2DA5EB260A169_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A913C7AA4DDC5C98(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4DF2DA5EB260A169_METHOD_1_A913C7AA4DDC5C98_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C4AEC0BC1CA0CB4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4DF2DA5EB260A169_METHOD_1_8C4AEC0BC1CA0CB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DF2DA5EB260A169_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DF2DA5EB260A169_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DF2DA5EB260A169_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_614288621F812149()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DF2DA5EB260A169_METHOD_1_614288621F812149_OFFSET))(this);
	}

	::System::Void Method_1_A7B1B50781373DB6(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_4DF2DA5EB260A169_METHOD_1_A7B1B50781373DB6_OFFSET))(this, a1);
	}

	::System::Void Method_1_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DF2DA5EB260A169_METHOD_1_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Void Method_1_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DF2DA5EB260A169_METHOD_1_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Void Method_1_6DC60149A270E0D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DF2DA5EB260A169_METHOD_1_6DC60149A270E0D4_OFFSET))(this);
	}

	::System::Void Method_1_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_4DF2DA5EB260A169_METHOD_1_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_1_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DF2DA5EB260A169_METHOD_1_9A6DA36CCAE7D188_OFFSET))(this);
	}
};
