#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureLinearMovementControlType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_D7A74C083376D5D6;
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::Client { class ClientInputData; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_1_58605927BBE9A4A2_METHOD_1_5B53C9AD9293CBEC_OFFSET UNITYSDK_OFFSET(0x19C2BC10)
#define CLASS_1_58605927BBE9A4A2_METHOD_1_7663268A7EE11871_OFFSET UNITYSDK_OFFSET(0x19C2C120)
#define CLASS_1_58605927BBE9A4A2_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x19C2C090)
#define CLASS_1_58605927BBE9A4A2_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x19C2C040)
#define CLASS_1_58605927BBE9A4A2_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19C2B6F0)
#define CLASS_1_58605927BBE9A4A2_METHOD_1_E926BF38832D60E1_OFFSET UNITYSDK_OFFSET(0x19C2B7D0)
#define CLASS_1_58605927BBE9A4A2__CTOR_OFFSET UNITYSDK_OFFSET(0x19C2D460)

inline static constexpr unsigned int Class_1_58605927BBE9A4A2_TypeDefinitionIndex = 57227;

class Class_1_58605927BBE9A4A2 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x10
	::Class_2_D7A74C083376D5D6* IBMFKOCNMIK; // 0x18
	::UnityEngine::Transform* AFIBNIPMICJ; // 0x20
	::RPG::Client::CameraBlendCurve* HDJMDBIPKOE; // 0x28
	::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x30
	::RPG::Client::CameraBlendCurve* LAKBFMFNOHK; // 0x38
	::UnityEngine::Transform* OPJNNDIALDC; // 0x40
	::RPG::GameCore::AdventureCharacterController* CACEADPJLPB; // 0x48
	::UnityEngine::Transform* OIGGFCOBKCG; // 0x50
	::System::Single LMCBEIHGLDF; // 0x58
	::System::Single KLJCDDBJHNE; // 0x5C
	::System::Single OMGMEIBDAOC; // 0x60
	::RPG::GameCore::AdventureLinearMovementControlType LFKIIDAMHEJ; // 0x64
	::UnityEngine::Vector3 BJNKIKNBFOJ; // 0x68
	::System::Single KKPEIMJKION; // 0x74
	::System::Single HBDJCFFDGDD; // 0x78
	::System::Single BLNLEHMDCGL; // 0x7C
	::System::Boolean MKLDGMLAONP; // 0x80
	::System::Boolean EIPEBNHHIAJ; // 0x81
	::System::Boolean FNAEPHCKFLK; // 0x82
	::System::Boolean CAGCHKJHMPD; // 0x83
	::System::Single PHGOEPOKMGE; // 0x84
	::UnityEngine::Vector3 EFLBANLKKAP; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58605927BBE9A4A2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58605927BBE9A4A2_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_E926BF38832D60E1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::RPG::Client::CameraBlendCurve* a8, ::System::Boolean a9)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::CameraBlendCurve*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_58605927BBE9A4A2_METHOD_1_E926BF38832D60E1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_1_5B53C9AD9293CBEC(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::RPG::Client::CameraBlendCurve* a7, ::RPG::Client::CameraBlendCurve* a8, ::System::Boolean a9)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::CameraBlendCurve*, ::RPG::Client::CameraBlendCurve*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_58605927BBE9A4A2_METHOD_1_5B53C9AD9293CBEC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58605927BBE9A4A2_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58605927BBE9A4A2_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}

	::System::Boolean Method_1_7663268A7EE11871(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::RPG::GameCore::AdventureCharacterController* a3, ::RPG::Client::ClientInputData* a4, ::System::Boolean& a5, ::UnityEngine::Vector3& a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::RPG::GameCore::AdventureCharacterController*, ::RPG::Client::ClientInputData*, ::System::Boolean&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_58605927BBE9A4A2_METHOD_1_7663268A7EE11871_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
