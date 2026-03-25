#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_82D1CF7388B55201;
class Class_3_9B28A54582B92258;
class Class_3_CD04D3296DF4C842_4;
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client::ActivityHipplen { class MonoBabyHipplen; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifyAdventureCharacterRunSpeedRatio; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_1_7E0DCA9D208905FE_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0xEA51B00)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_01BDAF089E563EBF_OFFSET UNITYSDK_OFFSET(0xEA51A40)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_02FE3E91638825D2_OFFSET UNITYSDK_OFFSET(0xE486B60)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0xE485200)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_099C229CF1BB9083_OFFSET UNITYSDK_OFFSET(0xEA50310)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_0B3092ADB189C6A2_OFFSET UNITYSDK_OFFSET(0xE485ED0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0xEA51780)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xEA4FCD0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_19118D240EF68C32_OFFSET UNITYSDK_OFFSET(0xEA503A0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xE4854C0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0xEA50D70)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_1E325D3CDDFBC683_OFFSET UNITYSDK_OFFSET(0xE486410)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0xE4862A0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_283228DCA08F69C7_1_OFFSET UNITYSDK_OFFSET(0xEA4FC10)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0xE4869E0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_28E8445D0FA0ECAA_OFFSET UNITYSDK_OFFSET(0xEA50520)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_29E4C9AAAC329E6C_OFFSET UNITYSDK_OFFSET(0xE4860A0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_2C1F3F888AA5ADD5_OFFSET UNITYSDK_OFFSET(0xEA50460)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_33AC9EB73CAD7838_OFFSET UNITYSDK_OFFSET(0xE4850B0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_46DF29ACE60986D7_OFFSET UNITYSDK_OFFSET(0xE4856A0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_4A37AFB19C9B61F8_OFFSET UNITYSDK_OFFSET(0xE486320)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_4AB9012B5D01108B_OFFSET UNITYSDK_OFFSET(0xEA51960)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_4BD2BFB48FF90060_OFFSET UNITYSDK_OFFSET(0xE485250)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0xE4851B0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_547A1B7EE65F0F14_OFFSET UNITYSDK_OFFSET(0xEA500B0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_54B7BFF8A34CD1AA_OFFSET UNITYSDK_OFFSET(0xEA50A30)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_6C2FB5ADB3B81368_OFFSET UNITYSDK_OFFSET(0xE485B10)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0xEA50CD0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_6F592BA490B2EB87_OFFSET UNITYSDK_OFFSET(0xE486470)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_705FFC79B57F4953_OFFSET UNITYSDK_OFFSET(0xE4857E0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_7865C2E7793795CC_OFFSET UNITYSDK_OFFSET(0xE486950)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_7C398F4FA6AEBB51_OFFSET UNITYSDK_OFFSET(0xE486540)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_80F50AEFC2A3FDEC_OFFSET UNITYSDK_OFFSET(0xE486670)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_82FDFD4FAE50986E_OFFSET UNITYSDK_OFFSET(0xE485370)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_8B5DB4ACDAC4F04A_OFFSET UNITYSDK_OFFSET(0xE4865D0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_96E11419209C03EC_OFFSET UNITYSDK_OFFSET(0xEA4FBD0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_96F674FB9A99092A_OFFSET UNITYSDK_OFFSET(0xEA50030)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0xEA50D20)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xE485790)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_A66A64149D4F3438_OFFSET UNITYSDK_OFFSET(0xE485160)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_AA357C2E4B6A63F8_OFFSET UNITYSDK_OFFSET(0xEA50850)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_AF769CD15806BD66_OFFSET UNITYSDK_OFFSET(0xE485A80)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xE484F90)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_B1B73B351BCF2EE9_OFFSET UNITYSDK_OFFSET(0xE4868A0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_BFAD9E795CFA7062_OFFSET UNITYSDK_OFFSET(0xE486820)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_C0B9D1B2E5611154_OFFSET UNITYSDK_OFFSET(0xE485530)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_C3C02139EBFD4E4B_OFFSET UNITYSDK_OFFSET(0xE486A70)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_C836268BEBB9DBE1_OFFSET UNITYSDK_OFFSET(0xE486720)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_C8AA73BEAA347C1E_OFFSET UNITYSDK_OFFSET(0xEA50B40)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_C9258AAEB225D88E_OFFSET UNITYSDK_OFFSET(0xEA510C0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xE484F20)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE484ED0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0xEA4FF70)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_EADDF1782C977BCA_OFFSET UNITYSDK_OFFSET(0xE485950)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_F2F9BCFB5C6AC1C0_OFFSET UNITYSDK_OFFSET(0xEA4FD30)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_F4FDA15C28A64059_OFFSET UNITYSDK_OFFSET(0xEA50210)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_FD97D2244C0FF5A9_OFFSET UNITYSDK_OFFSET(0xE485640)
#define CLASS_1_7E0DCA9D208905FE_SET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0xEA51B10)
#define CLASS_1_7E0DCA9D208905FE__CTOR_OFFSET UNITYSDK_OFFSET(0xEA51B20)

inline static constexpr unsigned int Class_1_7E0DCA9D208905FE_TypeDefinitionIndex = 61687;

class Class_1_7E0DCA9D208905FE : public ::System::Object
{
public:
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::String* Field_1_12; // 0x0
	::Il2CppArray<::System::String*>* Field_1_13; // 0x10
	::System::String* _UniqueName_k__BackingField; // 0x18
	::RPG::GameCore::TaskContext* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::Class_1_82D1CF7388B55201*>* Field_1_11; // 0x28
	::RPG::GameCore::CharacterModelComponent* Field_1_3; // 0x30
	::System::String* Field_1_4; // 0x38
	::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* Field_1_10; // 0x40
	::RPG::GameCore::GameEntity* Field_1_2; // 0x48
	::RPG::Client::ActivityHipplen::MonoBabyHipplen* Field_1_7; // 0x50
	::System::String* Field_1_14; // 0x58
	::RPG::Client::AttachPointMapping* Field_1_5; // 0x60
	::System::Single Field_1_16; // 0x68
	::System::Boolean Field_1_17; // 0x6C
	::System::UInt32 Field_1_8; // 0x70
	::System::Int32 Field_1_15; // 0x74
	::System::Single Field_1_9; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_33AC9EB73CAD7838(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_33AC9EB73CAD7838_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_A66A64149D4F3438()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_A66A64149D4F3438_OFFSET))(this);
	}

	::System::Void Method_1_4D2A473556700CDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_4D2A473556700CDC_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_1_4BD2BFB48FF90060(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_4BD2BFB48FF90060_OFFSET))(this, a1);
	}

	::System::Void Method_1_82FDFD4FAE50986E(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_82FDFD4FAE50986E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C0B9D1B2E5611154(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_C0B9D1B2E5611154_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD97D2244C0FF5A9(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_FD97D2244C0FF5A9_OFFSET))(this, a1);
	}

	::System::Void Method_1_46DF29ACE60986D7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_46DF29ACE60986D7_OFFSET))(this, a1);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_1_705FFC79B57F4953(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_705FFC79B57F4953_OFFSET))(this, a1);
	}

	::System::Void Method_1_EADDF1782C977BCA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_EADDF1782C977BCA_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_6C2FB5ADB3B81368(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_6C2FB5ADB3B81368_OFFSET))(this, a1);
	}

	::System::Void Method_1_29E4C9AAAC329E6C(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_29E4C9AAAC329E6C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_2566AD459572DFC3_OFFSET))(this);
	}

	::RPG::GameCore::TaskContext* Method_1_4A37AFB19C9B61F8()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_4A37AFB19C9B61F8_OFFSET))(this);
	}

	::System::Void Method_1_1E325D3CDDFBC683(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_1E325D3CDDFBC683_OFFSET))(this, a1);
	}

	::System::Void Method_1_AF769CD15806BD66(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_AF769CD15806BD66_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_6F592BA490B2EB87(::System::String* a1, ::System::Boolean a2)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_6F592BA490B2EB87_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0B3092ADB189C6A2(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_0B3092ADB189C6A2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7C398F4FA6AEBB51(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_7C398F4FA6AEBB51_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8B5DB4ACDAC4F04A(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_8B5DB4ACDAC4F04A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_80F50AEFC2A3FDEC(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_80F50AEFC2A3FDEC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C836268BEBB9DBE1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_C836268BEBB9DBE1_OFFSET))(this, a1);
	}

	::System::Void Method_1_BFAD9E795CFA7062(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_BFAD9E795CFA7062_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B1B73B351BCF2EE9(::UnityEngine::Collider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_B1B73B351BCF2EE9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7865C2E7793795CC(::UnityEngine::Collider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_7865C2E7793795CC_OFFSET))(this, a1);
	}

	::System::Void Method_1_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_C3C02139EBFD4E4B(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_C3C02139EBFD4E4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_02FE3E91638825D2(::UnityEngine::Transform* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_02FE3E91638825D2_OFFSET))(this, a1, a2);
	}

	::RPG::Client::ActivityHipplen::MonoBabyHipplen* Method_1_96E11419209C03EC()
	{
		return ((::RPG::Client::ActivityHipplen::MonoBabyHipplen*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_96E11419209C03EC_OFFSET))(this);
	}

	::System::Void Method_1_283228DCA08F69C7_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_283228DCA08F69C7_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F2F9BCFB5C6AC1C0(::UnityEngine::Vector3 a1, ::System::Nullable_1<::UnityEngine::Quaternion> a2, ::Class_3_CD04D3296DF4C842_4* a3, ::Class_3_9B28A54582B92258* a4, ::RPG::GameCore::CharacterMotionFlag a5, ::System::Boolean a6, ::System::Single a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Quaternion>, ::Class_3_CD04D3296DF4C842_4*, ::Class_3_9B28A54582B92258*, ::RPG::GameCore::CharacterMotionFlag, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_F2F9BCFB5C6AC1C0_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_1_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_DB67EEFB041425EC_OFFSET))(this);
	}

	::System::Void Method_1_96F674FB9A99092A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_96F674FB9A99092A_OFFSET))(this, a1);
	}

	::System::Void Method_1_547A1B7EE65F0F14(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_547A1B7EE65F0F14_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F4FDA15C28A64059(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_F4FDA15C28A64059_OFFSET))(this, a1);
	}

	::System::Void Method_1_099C229CF1BB9083()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_099C229CF1BB9083_OFFSET))(this);
	}

	::System::Void Method_1_19118D240EF68C32(::System::Int32 a1, ::System::Action_2<::RPG::GameCore::CharacterInputData*, ::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_2<::RPG::GameCore::CharacterInputData*, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_19118D240EF68C32_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2C1F3F888AA5ADD5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_2C1F3F888AA5ADD5_OFFSET))(this, a1);
	}

	::System::Void Method_1_28E8445D0FA0ECAA(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::RPG::MVector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_28E8445D0FA0ECAA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_AA357C2E4B6A63F8(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_AA357C2E4B6A63F8_OFFSET))(this, a1);
	}

	::System::Void Method_1_C8AA73BEAA347C1E(::System::Single a1, ::System::Single a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_C8AA73BEAA347C1E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Single Method_1_A36150C5DCC8409E_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_A36150C5DCC8409E_1_OFFSET))(this);
	}

	::System::Void Method_1_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_C9258AAEB225D88E()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_C9258AAEB225D88E_OFFSET))(this);
	}

	::System::Void Method_1_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_54B7BFF8A34CD1AA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_54B7BFF8A34CD1AA_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_4AB9012B5D01108B()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_4AB9012B5D01108B_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_01BDAF089E563EBF()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_01BDAF089E563EBF_OFFSET))(this);
	}

	::System::String* get_UniqueName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_GET_UNIQUENAME_OFFSET))(this);
	}

	::System::Void set_UniqueName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_SET_UNIQUENAME_OFFSET))(this, value);
	}
};
