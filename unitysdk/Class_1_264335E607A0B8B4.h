#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_264335E607A0B8B4_SelectTarget.h"
#include "unitysdk/RPG/Client/BattleInputProviderBlockReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace InControl { class PlayerAction; }
namespace RPG::Client { class BattleGamePhase; }

#define CLASS_1_264335E607A0B8B4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A4D060)
#define CLASS_1_264335E607A0B8B4_METHOD_1_07B7207727300C40_OFFSET UNITYSDK_OFFSET(0x13A4D300)
#define CLASS_1_264335E607A0B8B4_METHOD_1_0C726E1A401D0413_OFFSET UNITYSDK_OFFSET(0x13A4D4E0)
#define CLASS_1_264335E607A0B8B4_METHOD_1_51182CD949BFE328_OFFSET UNITYSDK_OFFSET(0x13A4D2B0)
#define CLASS_1_264335E607A0B8B4_METHOD_1_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x13A4D530)
#define CLASS_1_264335E607A0B8B4_METHOD_1_8EAFEE79CC0C0578_OFFSET UNITYSDK_OFFSET(0x13A4CB00)
#define CLASS_1_264335E607A0B8B4_METHOD_1_A1ADC999CFACEB89_1_OFFSET UNITYSDK_OFFSET(0x13A4CF50)
#define CLASS_1_264335E607A0B8B4_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x13A4CE40)
#define CLASS_1_264335E607A0B8B4_METHOD_1_A5ED11100382FA9B_1_OFFSET UNITYSDK_OFFSET(0x13A4D210)
#define CLASS_1_264335E607A0B8B4_METHOD_1_A5ED11100382FA9B_OFFSET UNITYSDK_OFFSET(0x13A4D1C0)
#define CLASS_1_264335E607A0B8B4_METHOD_1_A73B8662804238D6_OFFSET UNITYSDK_OFFSET(0x13A4CCA0)
#define CLASS_1_264335E607A0B8B4_METHOD_1_AE9B7F49BA81FE5D_OFFSET UNITYSDK_OFFSET(0x13A4C870)
#define CLASS_1_264335E607A0B8B4_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13A4D260)
#define CLASS_1_264335E607A0B8B4_METHOD_1_E6C993D8433E8264_OFFSET UNITYSDK_OFFSET(0x13A4D360)
#define CLASS_1_264335E607A0B8B4_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13A4C860)
#define CLASS_1_264335E607A0B8B4_TICK_OFFSET UNITYSDK_OFFSET(0x13A4BB50)
#define CLASS_1_264335E607A0B8B4__CTOR_OFFSET UNITYSDK_OFFSET(0x13A4BAE0)

inline static constexpr unsigned int Class_1_264335E607A0B8B4_TypeDefinitionIndex = 58572;

class Class_1_264335E607A0B8B4 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	::RPG::Client::BattleGamePhase* Field_1_1; // 0x10
	::System::Single Field_1_2; // 0x18
	::System::Single Field_1_3; // 0x1C
	::System::Boolean Field_1_4; // 0x20
	::System::Boolean Field_1_5; // 0x21
	::System::Single Field_1_6; // 0x24
	::System::UInt32 Field_1_7; // 0x28

	::System::Void _ctor(::RPG::Client::BattleGamePhase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleGamePhase*))((::PBYTE)hIl2Cpp + CLASS_1_264335E607A0B8B4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_264335E607A0B8B4_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_264335E607A0B8B4_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A5ED11100382FA9B(::RPG::Client::BattleInputProviderBlockReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleInputProviderBlockReason))((::PBYTE)hIl2Cpp + CLASS_1_264335E607A0B8B4_METHOD_1_A5ED11100382FA9B_OFFSET))(this, a1);
	}

	::System::Void Method_1_A5ED11100382FA9B_1(::RPG::Client::BattleInputProviderBlockReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleInputProviderBlockReason))((::PBYTE)hIl2Cpp + CLASS_1_264335E607A0B8B4_METHOD_1_A5ED11100382FA9B_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_264335E607A0B8B4_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_51182CD949BFE328(::RPG::Client::BattleInputProviderBlockReason a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BattleInputProviderBlockReason))((::PBYTE)hIl2Cpp + CLASS_1_264335E607A0B8B4_METHOD_1_51182CD949BFE328_OFFSET))(this, a1);
	}

	static ::UnityEngine::Vector2 Method_1_07B7207727300C40(::Class_1_264335E607A0B8B4_SelectTarget a1)
	{
		return ((::UnityEngine::Vector2(*)(::Class_1_264335E607A0B8B4_SelectTarget))((::PBYTE)hIl2Cpp + CLASS_1_264335E607A0B8B4_METHOD_1_07B7207727300C40_OFFSET))(a1);
	}

	::System::Void Method_1_E6C993D8433E8264(::Class_1_264335E607A0B8B4_SelectTarget a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_264335E607A0B8B4_SelectTarget))((::PBYTE)hIl2Cpp + CLASS_1_264335E607A0B8B4_METHOD_1_E6C993D8433E8264_OFFSET))(this, a1);
	}

	::System::Void Method_1_A73B8662804238D6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_264335E607A0B8B4_METHOD_1_A73B8662804238D6_OFFSET))(this, a1);
	}

	::System::Void Method_1_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_264335E607A0B8B4_METHOD_1_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_1_A1ADC999CFACEB89_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_264335E607A0B8B4_METHOD_1_A1ADC999CFACEB89_1_OFFSET))(this);
	}

	::System::Void Method_1_8EAFEE79CC0C0578(::InControl::PlayerAction* a1, ::InControl::PlayerAction* a2, ::Class_1_264335E607A0B8B4_SelectTarget a3)
	{
		return ((::System::Void(*)(::PVOID, ::InControl::PlayerAction*, ::InControl::PlayerAction*, ::Class_1_264335E607A0B8B4_SelectTarget))((::PBYTE)hIl2Cpp + CLASS_1_264335E607A0B8B4_METHOD_1_8EAFEE79CC0C0578_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_AE9B7F49BA81FE5D(::InControl::PlayerAction* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::InControl::PlayerAction*))((::PBYTE)hIl2Cpp + CLASS_1_264335E607A0B8B4_METHOD_1_AE9B7F49BA81FE5D_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C726E1A401D0413(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_264335E607A0B8B4_METHOD_1_0C726E1A401D0413_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_264335E607A0B8B4_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_264335E607A0B8B4_METHOD_1_568AE7A1499723FD_OFFSET))(this);
	}
};
