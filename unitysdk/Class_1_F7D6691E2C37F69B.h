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

#define CLASS_1_F7D6691E2C37F69B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1385D150)
#define CLASS_1_F7D6691E2C37F69B_METHOD_1_0D45450AE641AE3C_OFFSET UNITYSDK_OFFSET(0x1385F790)
#define CLASS_1_F7D6691E2C37F69B_METHOD_1_0F04BDAB2C133994_OFFSET UNITYSDK_OFFSET(0x1385F2B0)
#define CLASS_1_F7D6691E2C37F69B_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x1385D4F0)
#define CLASS_1_F7D6691E2C37F69B_METHOD_1_151E25A63D14DDB0_1_OFFSET UNITYSDK_OFFSET(0x13860330)
#define CLASS_1_F7D6691E2C37F69B_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x138601E0)
#define CLASS_1_F7D6691E2C37F69B_METHOD_1_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0x138610E0)
#define CLASS_1_F7D6691E2C37F69B_METHOD_1_19C80401AB8E4125_OFFSET UNITYSDK_OFFSET(0x1385FE50)
#define CLASS_1_F7D6691E2C37F69B_METHOD_1_318B7533AD55A5D7_OFFSET UNITYSDK_OFFSET(0x1385FD70)
#define CLASS_1_F7D6691E2C37F69B_METHOD_1_450C96C0E0619688_OFFSET UNITYSDK_OFFSET(0x13861760)
#define CLASS_1_F7D6691E2C37F69B_METHOD_1_551C5F0EB7AEA2FF_OFFSET UNITYSDK_OFFSET(0x1385D1A0)
#define CLASS_1_F7D6691E2C37F69B_METHOD_1_75F57B02FCCE8F7F_OFFSET UNITYSDK_OFFSET(0x1385E2D0)
#define CLASS_1_F7D6691E2C37F69B_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x1385DC90)
#define CLASS_1_F7D6691E2C37F69B_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x13860480)
#define CLASS_1_F7D6691E2C37F69B_METHOD_1_AE828D899505A3B4_OFFSET UNITYSDK_OFFSET(0x13860530)
#define CLASS_1_F7D6691E2C37F69B_METHOD_1_AFAB48268B1DC353_OFFSET UNITYSDK_OFFSET(0x1385FF00)
#define CLASS_1_F7D6691E2C37F69B_METHOD_1_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x1385EA90)
#define CLASS_1_F7D6691E2C37F69B_METHOD_1_C50A2293958CA940_OFFSET UNITYSDK_OFFSET(0x1385EA10)
#define CLASS_1_F7D6691E2C37F69B_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x1385DA00)
#define CLASS_1_F7D6691E2C37F69B_METHOD_1_D5E029824E84DF2F_OFFSET UNITYSDK_OFFSET(0x1385DDB0)
#define CLASS_1_F7D6691E2C37F69B_METHOD_1_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x1385D710)
#define CLASS_1_F7D6691E2C37F69B_METHOD_1_EDAE9C595A474196_OFFSET UNITYSDK_OFFSET(0x1385D460)
#define CLASS_1_F7D6691E2C37F69B_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x13861560)
#define CLASS_1_F7D6691E2C37F69B__CTOR_OFFSET UNITYSDK_OFFSET(0x1385D140)

inline static constexpr unsigned int Class_1_F7D6691E2C37F69B_TypeDefinitionIndex = 71411;

class Class_1_F7D6691E2C37F69B : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::Class_2_F47F7A3F5E97970D* Field_1_1; // 0x10
	::Class_3_1E4F9B0ED3BF21DE* Field_1_2; // 0x18

	::System::Void _ctor(::Class_2_F47F7A3F5E97970D* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F47F7A3F5E97970D*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_F7D6691E2C37F69B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7D6691E2C37F69B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_551C5F0EB7AEA2FF(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F7D6691E2C37F69B_METHOD_1_551C5F0EB7AEA2FF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7D6691E2C37F69B_METHOD_1_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7D6691E2C37F69B_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7D6691E2C37F69B_METHOD_1_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void Method_1_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7D6691E2C37F69B_METHOD_1_DB67EEFB041425EC_OFFSET))(this);
	}

	::System::Boolean Method_1_EDAE9C595A474196(::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengePackData* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengePackData*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F7D6691E2C37F69B_METHOD_1_EDAE9C595A474196_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeState Method_1_D5E029824E84DF2F(::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengePackData* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeState(*)(::PVOID, ::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengePackData*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F7D6691E2C37F69B_METHOD_1_D5E029824E84DF2F_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_B9E8C2EEAA5C96EC* Method_1_75F57B02FCCE8F7F(::RPG::GameCore::MiniGameCollectCoin_CurveConfig* a1, ::System::Single a2)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::RPG::GameCore::MiniGameCollectCoin_CurveConfig*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F7D6691E2C37F69B_METHOD_1_75F57B02FCCE8F7F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C50A2293958CA940(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F7D6691E2C37F69B_METHOD_1_C50A2293958CA940_OFFSET))(this, a1);
	}

	::System::Void Method_1_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7D6691E2C37F69B_METHOD_1_BF5E2DCAE0BF038A_OFFSET))(this);
	}

	::Class_2_B9E8C2EEAA5C96EC* Method_1_0F04BDAB2C133994(::System::String* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::RPG::GameCore::HoyoTagContainer* a3)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::System::String*, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::HoyoTagContainer*))((::PBYTE)hIl2Cpp + CLASS_1_F7D6691E2C37F69B_METHOD_1_0F04BDAB2C133994_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0D45450AE641AE3C(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::RPG::GameCore::HoyoTagContainer* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::HoyoTagContainer*))((::PBYTE)hIl2Cpp + CLASS_1_F7D6691E2C37F69B_METHOD_1_0D45450AE641AE3C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_318B7533AD55A5D7(::System::Int32 a1, ::RPG::GameCore::FiveDimMiniGameCoinType a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::FiveDimMiniGameCoinType, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F7D6691E2C37F69B_METHOD_1_318B7533AD55A5D7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_19C80401AB8E4125(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F7D6691E2C37F69B_METHOD_1_19C80401AB8E4125_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AFAB48268B1DC353(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F7D6691E2C37F69B_METHOD_1_AFAB48268B1DC353_OFFSET))(this, a1);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7D6691E2C37F69B_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7D6691E2C37F69B_METHOD_1_151E25A63D14DDB0_1_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7D6691E2C37F69B_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_AE828D899505A3B4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7D6691E2C37F69B_METHOD_1_AE828D899505A3B4_OFFSET))(this);
	}

	::System::Void Method_1_1947BC35B7A7FCB8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7D6691E2C37F69B_METHOD_1_1947BC35B7A7FCB8_OFFSET))(this);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7D6691E2C37F69B_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimGameplayMode Method_1_450C96C0E0619688()
	{
		return ((::RPG::GameCore::FiveDimGameplayMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7D6691E2C37F69B_METHOD_1_450C96C0E0619688_OFFSET))(this);
	}
};
