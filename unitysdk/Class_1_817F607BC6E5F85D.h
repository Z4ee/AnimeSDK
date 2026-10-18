#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingGameBoy/ChenLingGameBoyChallengeState.h"
#include "unitysdk/RPG/GameCore/FiveDimGameplayMode.h"
#include "unitysdk/RPG/GameCore/FiveDimMiniGameCoinType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_B9E8C2EEAA5C96EC;
class Class_2_F47F7A3F5E97970D;
class Class_3_1E4F9B0ED3BF21DE;
namespace RPG::Client::ChenLingGameBoy { class ChenLingGameBoyChallengePackData; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class MiniGameCollectCoin_CurveConfig; }
namespace System { class String; }

#define CLASS_1_817F607BC6E5F85D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15960FB0)
#define CLASS_1_817F607BC6E5F85D_METHOD_1_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x159619D0)
#define CLASS_1_817F607BC6E5F85D_METHOD_1_0AB5D31C44CC5C88_OFFSET UNITYSDK_OFFSET(0x15961B20)
#define CLASS_1_817F607BC6E5F85D_METHOD_1_0D45450AE641AE3C_OFFSET UNITYSDK_OFFSET(0x15963AA0)
#define CLASS_1_817F607BC6E5F85D_METHOD_1_0F04BDAB2C133994_OFFSET UNITYSDK_OFFSET(0x159635C0)
#define CLASS_1_817F607BC6E5F85D_METHOD_1_151E25A63D14DDB0_1_OFFSET UNITYSDK_OFFSET(0x15964650)
#define CLASS_1_817F607BC6E5F85D_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x15964500)
#define CLASS_1_817F607BC6E5F85D_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x159616E0)
#define CLASS_1_817F607BC6E5F85D_METHOD_1_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0x159654C0)
#define CLASS_1_817F607BC6E5F85D_METHOD_1_19C80401AB8E4125_OFFSET UNITYSDK_OFFSET(0x15964170)
#define CLASS_1_817F607BC6E5F85D_METHOD_1_221C996C1195AF5B_OFFSET UNITYSDK_OFFSET(0x15961000)
#define CLASS_1_817F607BC6E5F85D_METHOD_1_318B7533AD55A5D7_OFFSET UNITYSDK_OFFSET(0x15964090)
#define CLASS_1_817F607BC6E5F85D_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x159647A0)
#define CLASS_1_817F607BC6E5F85D_METHOD_1_450C96C0E0619688_OFFSET UNITYSDK_OFFSET(0x15965B40)
#define CLASS_1_817F607BC6E5F85D_METHOD_1_5F460513E88C2405_OFFSET UNITYSDK_OFFSET(0x15961280)
#define CLASS_1_817F607BC6E5F85D_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x15961590)
#define CLASS_1_817F607BC6E5F85D_METHOD_1_75F57B02FCCE8F7F_OFFSET UNITYSDK_OFFSET(0x15962210)
#define CLASS_1_817F607BC6E5F85D_METHOD_1_AE828D899505A3B4_OFFSET UNITYSDK_OFFSET(0x159648B0)
#define CLASS_1_817F607BC6E5F85D_METHOD_1_AFAB48268B1DC353_OFFSET UNITYSDK_OFFSET(0x15964220)
#define CLASS_1_817F607BC6E5F85D_METHOD_1_C50A2293958CA940_OFFSET UNITYSDK_OFFSET(0x15962AF0)
#define CLASS_1_817F607BC6E5F85D_METHOD_1_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0x15962B70)
#define CLASS_1_817F607BC6E5F85D_METHOD_1_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x15961340)
#define CLASS_1_817F607BC6E5F85D_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x15965940)
#define CLASS_1_817F607BC6E5F85D__CTOR_OFFSET UNITYSDK_OFFSET(0x15960FA0)

inline static constexpr unsigned int Class_1_817F607BC6E5F85D_TypeDefinitionIndex = 76887;

class Class_1_817F607BC6E5F85D : public ::System::Object
{
public:
	// static const ::System::String* CPKKDEOABPF; // 0x0
	::Class_3_1E4F9B0ED3BF21DE* PDENFEFCAGN; // 0x10
	::Class_2_F47F7A3F5E97970D* EEFMDEHLLFI; // 0x18

	::System::Void _ctor(::Class_2_F47F7A3F5E97970D* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F47F7A3F5E97970D*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_817F607BC6E5F85D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_817F607BC6E5F85D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_221C996C1195AF5B(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_817F607BC6E5F85D_METHOD_1_221C996C1195AF5B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_817F607BC6E5F85D_METHOD_1_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_817F607BC6E5F85D_METHOD_1_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_1_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_817F607BC6E5F85D_METHOD_1_0868EF727040C390_OFFSET))(this);
	}

	::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_817F607BC6E5F85D_METHOD_1_6B72D4EE8C6E907F_OFFSET))(this);
	}

	::System::Boolean Method_1_5F460513E88C2405(::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengePackData* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengePackData*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_817F607BC6E5F85D_METHOD_1_5F460513E88C2405_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeState Method_1_0AB5D31C44CC5C88(::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengePackData* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeState(*)(::PVOID, ::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengePackData*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_817F607BC6E5F85D_METHOD_1_0AB5D31C44CC5C88_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_B9E8C2EEAA5C96EC* Method_1_75F57B02FCCE8F7F(::RPG::GameCore::MiniGameCollectCoin_CurveConfig* a1, ::System::Single a2)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::RPG::GameCore::MiniGameCollectCoin_CurveConfig*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_817F607BC6E5F85D_METHOD_1_75F57B02FCCE8F7F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C50A2293958CA940(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_817F607BC6E5F85D_METHOD_1_C50A2293958CA940_OFFSET))(this, a1);
	}

	::System::Void Method_1_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_817F607BC6E5F85D_METHOD_1_CBDC22058B67F0FE_OFFSET))(this);
	}

	::Class_2_B9E8C2EEAA5C96EC* Method_1_0F04BDAB2C133994(::System::String* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::RPG::GameCore::HoyoTagContainer* a3)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::System::String*, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::HoyoTagContainer*))((::PBYTE)hIl2Cpp + CLASS_1_817F607BC6E5F85D_METHOD_1_0F04BDAB2C133994_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0D45450AE641AE3C(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::RPG::GameCore::HoyoTagContainer* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::HoyoTagContainer*))((::PBYTE)hIl2Cpp + CLASS_1_817F607BC6E5F85D_METHOD_1_0D45450AE641AE3C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_318B7533AD55A5D7(::System::Int32 a1, ::RPG::GameCore::FiveDimMiniGameCoinType a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::FiveDimMiniGameCoinType, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_817F607BC6E5F85D_METHOD_1_318B7533AD55A5D7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_19C80401AB8E4125(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_817F607BC6E5F85D_METHOD_1_19C80401AB8E4125_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AFAB48268B1DC353(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_817F607BC6E5F85D_METHOD_1_AFAB48268B1DC353_OFFSET))(this, a1);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_817F607BC6E5F85D_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_817F607BC6E5F85D_METHOD_1_151E25A63D14DDB0_1_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_817F607BC6E5F85D_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_AE828D899505A3B4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_817F607BC6E5F85D_METHOD_1_AE828D899505A3B4_OFFSET))(this);
	}

	::System::Void Method_1_1947BC35B7A7FCB8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_817F607BC6E5F85D_METHOD_1_1947BC35B7A7FCB8_OFFSET))(this);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_817F607BC6E5F85D_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimGameplayMode Method_1_450C96C0E0619688()
	{
		return ((::RPG::GameCore::FiveDimGameplayMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_817F607BC6E5F85D_METHOD_1_450C96C0E0619688_OFFSET))(this);
	}
};
