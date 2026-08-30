#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_264335E607A0B8B4_SelectTarget.h"
#include "unitysdk/RPG/Client/BattleInputProviderBlockReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace InControl { class PlayerAction; }
namespace RPG::Client { class BattleGamePhase; }

#define CLASS_1_264335E607A0B8B4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15928450)
#define CLASS_1_264335E607A0B8B4_METHOD_1_07B7207727300C40_OFFSET UNITYSDK_OFFSET(0x159286F0)
#define CLASS_1_264335E607A0B8B4_METHOD_1_0C726E1A401D0413_OFFSET UNITYSDK_OFFSET(0x159288D0)
#define CLASS_1_264335E607A0B8B4_METHOD_1_51182CD949BFE328_OFFSET UNITYSDK_OFFSET(0x159286A0)
#define CLASS_1_264335E607A0B8B4_METHOD_1_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x15928920)
#define CLASS_1_264335E607A0B8B4_METHOD_1_8EAFEE79CC0C0578_OFFSET UNITYSDK_OFFSET(0x15927EF0)
#define CLASS_1_264335E607A0B8B4_METHOD_1_A1ADC999CFACEB89_1_OFFSET UNITYSDK_OFFSET(0x15928340)
#define CLASS_1_264335E607A0B8B4_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x15928230)
#define CLASS_1_264335E607A0B8B4_METHOD_1_A5ED11100382FA9B_1_OFFSET UNITYSDK_OFFSET(0x15928600)
#define CLASS_1_264335E607A0B8B4_METHOD_1_A5ED11100382FA9B_OFFSET UNITYSDK_OFFSET(0x159285B0)
#define CLASS_1_264335E607A0B8B4_METHOD_1_A73B8662804238D6_OFFSET UNITYSDK_OFFSET(0x15928090)
#define CLASS_1_264335E607A0B8B4_METHOD_1_AE9B7F49BA81FE5D_OFFSET UNITYSDK_OFFSET(0x15927C60)
#define CLASS_1_264335E607A0B8B4_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15928650)
#define CLASS_1_264335E607A0B8B4_METHOD_1_E6C993D8433E8264_OFFSET UNITYSDK_OFFSET(0x15928750)
#define CLASS_1_264335E607A0B8B4_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15927C50)
#define CLASS_1_264335E607A0B8B4_TICK_OFFSET UNITYSDK_OFFSET(0x15926F40)
#define CLASS_1_264335E607A0B8B4__CTOR_OFFSET UNITYSDK_OFFSET(0x15926ED0)

inline static constexpr unsigned int Class_1_264335E607A0B8B4_TypeDefinitionIndex = 61402;

class Class_1_264335E607A0B8B4 : public ::System::Object
{
public:
	// static const ::System::Single GNMLDPIMPJK; // 0x0
	::RPG::Client::BattleGamePhase* JOJHDAKBNMF; // 0x10
	::System::Single MNFMDLIMKEB; // 0x18
	::System::UInt32 FEGIFKAGPMN; // 0x1C
	::System::Boolean NOPKMKHHBFH; // 0x20
	::System::Boolean IEKGNOEHEOO; // 0x21
	::System::Single HHINGCOFADB; // 0x24
	::System::Single BAGPJLJPKBP; // 0x28

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
