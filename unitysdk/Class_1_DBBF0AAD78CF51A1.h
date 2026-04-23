#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingGameBoy/ChenLingGameBoyChallengeState.h"
#include "unitysdk/RPG/GameCore/FiveDimGameplayMode.h"
#include "unitysdk/RPG/GameCore/FiveDimMiniGameCoinType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_9DD8A46984F1AFFD;
class Class_2_F47F7A3F5E97970D;
class Class_3_1A92845FAFA5EC77;
namespace RPG::Client::ChenLingGameBoy { class ChenLingGameBoyChallengePackData; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class MiniGameCollectCoin_CurveConfig; }
namespace System { class String; }

#define CLASS_1_DBBF0AAD78CF51A1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7A5500)
#define CLASS_1_DBBF0AAD78CF51A1_METHOD_1_0018C4D19F68A646_OFFSET UNITYSDK_OFFSET(0xB7A6070)
#define CLASS_1_DBBF0AAD78CF51A1_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0xB7A9070)
#define CLASS_1_DBBF0AAD78CF51A1_METHOD_1_1D51F0C49307B9B9_OFFSET UNITYSDK_OFFSET(0xB7A8260)
#define CLASS_1_DBBF0AAD78CF51A1_METHOD_1_28BC18DF7ADC9545_OFFSET UNITYSDK_OFFSET(0xB7A5550)
#define CLASS_1_DBBF0AAD78CF51A1_METHOD_1_3048C4D8E34A704E_OFFSET UNITYSDK_OFFSET(0xB7A8180)
#define CLASS_1_DBBF0AAD78CF51A1_METHOD_1_4805283D59625FD9_OFFSET UNITYSDK_OFFSET(0xB7A88A0)
#define CLASS_1_DBBF0AAD78CF51A1_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xB7A5CE0)
#define CLASS_1_DBBF0AAD78CF51A1_METHOD_1_640514F2FC7A7607_OFFSET UNITYSDK_OFFSET(0xB7A6DD0)
#define CLASS_1_DBBF0AAD78CF51A1_METHOD_1_75F57B02FCCE8F7F_OFFSET UNITYSDK_OFFSET(0xB7A6590)
#define CLASS_1_DBBF0AAD78CF51A1_METHOD_1_784C4F7291D47E63_OFFSET UNITYSDK_OFFSET(0xB7A94F0)
#define CLASS_1_DBBF0AAD78CF51A1_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xB7A87F0)
#define CLASS_1_DBBF0AAD78CF51A1_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xB7A5F60)
#define CLASS_1_DBBF0AAD78CF51A1_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xB7A8550)
#define CLASS_1_DBBF0AAD78CF51A1_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0xB7A58A0)
#define CLASS_1_DBBF0AAD78CF51A1_METHOD_1_CBF2E14EE4BD9E4F_OFFSET UNITYSDK_OFFSET(0xB7A7B60)
#define CLASS_1_DBBF0AAD78CF51A1_METHOD_1_D0AD31CF3BA617E7_OFFSET UNITYSDK_OFFSET(0xB7A7600)
#define CLASS_1_DBBF0AAD78CF51A1_METHOD_1_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0xB7A5AC0)
#define CLASS_1_DBBF0AAD78CF51A1_METHOD_1_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0xB7A6EB0)
#define CLASS_1_DBBF0AAD78CF51A1_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xB7A8630)
#define CLASS_1_DBBF0AAD78CF51A1_METHOD_1_EDAE9C595A474196_OFFSET UNITYSDK_OFFSET(0xB7A5810)
#define CLASS_1_DBBF0AAD78CF51A1_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xB7A92F0)
#define CLASS_1_DBBF0AAD78CF51A1_METHOD_1_F7F49600522ABF51_OFFSET UNITYSDK_OFFSET(0xB7A8310)
#define CLASS_1_DBBF0AAD78CF51A1__CTOR_OFFSET UNITYSDK_OFFSET(0xB7A54F0)

inline static constexpr unsigned int Class_1_DBBF0AAD78CF51A1_TypeDefinitionIndex = 70593;

class Class_1_DBBF0AAD78CF51A1 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_2; // 0x0
	::Class_3_1A92845FAFA5EC77* Field_1_1; // 0x10
	::Class_2_F47F7A3F5E97970D* Field_1_0; // 0x18

	::System::Void _ctor(::Class_2_F47F7A3F5E97970D* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F47F7A3F5E97970D*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_DBBF0AAD78CF51A1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBBF0AAD78CF51A1_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_28BC18DF7ADC9545(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DBBF0AAD78CF51A1_METHOD_1_28BC18DF7ADC9545_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBBF0AAD78CF51A1_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBBF0AAD78CF51A1_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_1_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBBF0AAD78CF51A1_METHOD_1_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_1_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBBF0AAD78CF51A1_METHOD_1_DB67EEFB041425EC_OFFSET))(this);
	}

	::System::Boolean Method_1_EDAE9C595A474196(::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengePackData* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengePackData*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DBBF0AAD78CF51A1_METHOD_1_EDAE9C595A474196_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeState Method_1_0018C4D19F68A646(::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengePackData* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeState(*)(::PVOID, ::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengePackData*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DBBF0AAD78CF51A1_METHOD_1_0018C4D19F68A646_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_9DD8A46984F1AFFD* Method_1_75F57B02FCCE8F7F(::RPG::GameCore::MiniGameCollectCoin_CurveConfig* a1, ::System::Single a2)
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID, ::RPG::GameCore::MiniGameCollectCoin_CurveConfig*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DBBF0AAD78CF51A1_METHOD_1_75F57B02FCCE8F7F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_640514F2FC7A7607(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DBBF0AAD78CF51A1_METHOD_1_640514F2FC7A7607_OFFSET))(this, a1);
	}

	::System::Void Method_1_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBBF0AAD78CF51A1_METHOD_1_DD784213055292FB_OFFSET))(this);
	}

	::Class_2_9DD8A46984F1AFFD* Method_1_D0AD31CF3BA617E7(::System::String* a1, ::Class_2_9DD8A46984F1AFFD* a2, ::RPG::GameCore::HoyoTagContainer* a3)
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID, ::System::String*, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::HoyoTagContainer*))((::PBYTE)hIl2Cpp + CLASS_1_DBBF0AAD78CF51A1_METHOD_1_D0AD31CF3BA617E7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CBF2E14EE4BD9E4F(::Class_2_9DD8A46984F1AFFD* a1, ::Class_2_9DD8A46984F1AFFD* a2, ::RPG::GameCore::HoyoTagContainer* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::HoyoTagContainer*))((::PBYTE)hIl2Cpp + CLASS_1_DBBF0AAD78CF51A1_METHOD_1_CBF2E14EE4BD9E4F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3048C4D8E34A704E(::System::Int32 a1, ::RPG::GameCore::FiveDimMiniGameCoinType a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::FiveDimMiniGameCoinType, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_DBBF0AAD78CF51A1_METHOD_1_3048C4D8E34A704E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1D51F0C49307B9B9(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DBBF0AAD78CF51A1_METHOD_1_1D51F0C49307B9B9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F7F49600522ABF51(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DBBF0AAD78CF51A1_METHOD_1_F7F49600522ABF51_OFFSET))(this, a1);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBBF0AAD78CF51A1_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBBF0AAD78CF51A1_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBBF0AAD78CF51A1_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_4805283D59625FD9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBBF0AAD78CF51A1_METHOD_1_4805283D59625FD9_OFFSET))(this);
	}

	::System::Void Method_1_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBBF0AAD78CF51A1_METHOD_1_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBBF0AAD78CF51A1_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimGameplayMode Method_1_784C4F7291D47E63()
	{
		return ((::RPG::GameCore::FiveDimGameplayMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBBF0AAD78CF51A1_METHOD_1_784C4F7291D47E63_OFFSET))(this);
	}
};
