#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C114C8ED995C1CDD_SelectTarget.h"
#include "unitysdk/RPG/Client/BattleInputProviderBlockReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace InControl { class PlayerAction; }
namespace RPG::Client { class BattleGamePhase; }

#define CLASS_1_C114C8ED995C1CDD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1192A6A0)
#define CLASS_1_C114C8ED995C1CDD_METHOD_1_07B7207727300C40_OFFSET UNITYSDK_OFFSET(0x1192A910)
#define CLASS_1_C114C8ED995C1CDD_METHOD_1_10254D6FB7A99E46_OFFSET UNITYSDK_OFFSET(0x11929E40)
#define CLASS_1_C114C8ED995C1CDD_METHOD_1_1CD1133DC003C11C_OFFSET UNITYSDK_OFFSET(0x1192A300)
#define CLASS_1_C114C8ED995C1CDD_METHOD_1_51182CD949BFE328_OFFSET UNITYSDK_OFFSET(0x1192A8C0)
#define CLASS_1_C114C8ED995C1CDD_METHOD_1_7243ADD7DCCD2F93_OFFSET UNITYSDK_OFFSET(0x1192AAE0)
#define CLASS_1_C114C8ED995C1CDD_METHOD_1_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0x1192AB30)
#define CLASS_1_C114C8ED995C1CDD_METHOD_1_8C2AA8452564A914_OFFSET UNITYSDK_OFFSET(0x1192A970)
#define CLASS_1_C114C8ED995C1CDD_METHOD_1_A5ED11100382FA9B_1_OFFSET UNITYSDK_OFFSET(0x1192A820)
#define CLASS_1_C114C8ED995C1CDD_METHOD_1_A5ED11100382FA9B_OFFSET UNITYSDK_OFFSET(0x1192A7D0)
#define CLASS_1_C114C8ED995C1CDD_METHOD_1_AA169839CB93802A_1_OFFSET UNITYSDK_OFFSET(0x1192A590)
#define CLASS_1_C114C8ED995C1CDD_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x1192A480)
#define CLASS_1_C114C8ED995C1CDD_METHOD_1_BA92DBF42B6660A9_OFFSET UNITYSDK_OFFSET(0x1192A100)
#define CLASS_1_C114C8ED995C1CDD_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1192A870)
#define CLASS_1_C114C8ED995C1CDD_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11929E30)
#define CLASS_1_C114C8ED995C1CDD_TICK_OFFSET UNITYSDK_OFFSET(0x11928FB0)
#define CLASS_1_C114C8ED995C1CDD__CTOR_OFFSET UNITYSDK_OFFSET(0x11928F50)

inline static constexpr unsigned int Class_1_C114C8ED995C1CDD_TypeDefinitionIndex = 49714;

class Class_1_C114C8ED995C1CDD : public ::System::Object
{
public:
	// static const ::System::Single Field_1_6; // 0x0
	::RPG::Client::BattleGamePhase* Field_1_0; // 0x10
	::System::Single Field_1_4; // 0x18
	::System::Single Field_1_5; // 0x1C
	::System::UInt32 Field_1_7; // 0x20
	::System::Boolean Field_1_1; // 0x24
	::System::Boolean Field_1_2; // 0x25
	::System::Single Field_1_3; // 0x28

	::System::Void _ctor(::RPG::Client::BattleGamePhase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleGamePhase*))((::PBYTE)hIl2Cpp + CLASS_1_C114C8ED995C1CDD__CTOR_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C114C8ED995C1CDD_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C114C8ED995C1CDD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A5ED11100382FA9B(::RPG::Client::BattleInputProviderBlockReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleInputProviderBlockReason))((::PBYTE)hIl2Cpp + CLASS_1_C114C8ED995C1CDD_METHOD_1_A5ED11100382FA9B_OFFSET))(this, a1);
	}

	::System::Void Method_1_A5ED11100382FA9B_1(::RPG::Client::BattleInputProviderBlockReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleInputProviderBlockReason))((::PBYTE)hIl2Cpp + CLASS_1_C114C8ED995C1CDD_METHOD_1_A5ED11100382FA9B_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C114C8ED995C1CDD_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_51182CD949BFE328(::RPG::Client::BattleInputProviderBlockReason a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BattleInputProviderBlockReason))((::PBYTE)hIl2Cpp + CLASS_1_C114C8ED995C1CDD_METHOD_1_51182CD949BFE328_OFFSET))(this, a1);
	}

	static ::UnityEngine::Vector2 Method_1_07B7207727300C40(::Class_1_C114C8ED995C1CDD_SelectTarget a1)
	{
		return ((::UnityEngine::Vector2(*)(::Class_1_C114C8ED995C1CDD_SelectTarget))((::PBYTE)hIl2Cpp + CLASS_1_C114C8ED995C1CDD_METHOD_1_07B7207727300C40_OFFSET))(a1);
	}

	::System::Void Method_1_8C2AA8452564A914(::Class_1_C114C8ED995C1CDD_SelectTarget a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C114C8ED995C1CDD_SelectTarget))((::PBYTE)hIl2Cpp + CLASS_1_C114C8ED995C1CDD_METHOD_1_8C2AA8452564A914_OFFSET))(this, a1);
	}

	::System::Void Method_1_1CD1133DC003C11C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C114C8ED995C1CDD_METHOD_1_1CD1133DC003C11C_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C114C8ED995C1CDD_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_1_AA169839CB93802A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C114C8ED995C1CDD_METHOD_1_AA169839CB93802A_1_OFFSET))(this);
	}

	::System::Void Method_1_BA92DBF42B6660A9(::InControl::PlayerAction* a1, ::InControl::PlayerAction* a2, ::Class_1_C114C8ED995C1CDD_SelectTarget a3)
	{
		return ((::System::Void(*)(::PVOID, ::InControl::PlayerAction*, ::InControl::PlayerAction*, ::Class_1_C114C8ED995C1CDD_SelectTarget))((::PBYTE)hIl2Cpp + CLASS_1_C114C8ED995C1CDD_METHOD_1_BA92DBF42B6660A9_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_10254D6FB7A99E46(::InControl::PlayerAction* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::InControl::PlayerAction*))((::PBYTE)hIl2Cpp + CLASS_1_C114C8ED995C1CDD_METHOD_1_10254D6FB7A99E46_OFFSET))(this, a1);
	}

	::System::Void Method_1_7243ADD7DCCD2F93(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C114C8ED995C1CDD_METHOD_1_7243ADD7DCCD2F93_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C114C8ED995C1CDD_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_7AEA4B2B25797605()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C114C8ED995C1CDD_METHOD_1_7AEA4B2B25797605_OFFSET))(this);
	}
};
