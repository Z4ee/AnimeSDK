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

#define CLASS_1_7E0DCA9D208905FE_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x95549B0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_01BDAF089E563EBF_OFFSET UNITYSDK_OFFSET(0x9554900)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_02FE3E91638825D2_OFFSET UNITYSDK_OFFSET(0x95532B0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x95518F0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_099C229CF1BB9083_OFFSET UNITYSDK_OFFSET(0x95539F0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_0B3092ADB189C6A2_OFFSET UNITYSDK_OFFSET(0x9552620)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x9550F70)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x9552170)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x9551BB0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_1E325D3CDDFBC683_OFFSET UNITYSDK_OFFSET(0x9552B60)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_243A0E15571C2748_OFFSET UNITYSDK_OFFSET(0x9553A80)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x95529F0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_283228DCA08F69C7_1_OFFSET UNITYSDK_OFFSET(0x9553360)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x9553130)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_28E8445D0FA0ECAA_OFFSET UNITYSDK_OFFSET(0x9553BE0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_29E4C9AAAC329E6C_OFFSET UNITYSDK_OFFSET(0x95527F0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_303079AD8576320C_OFFSET UNITYSDK_OFFSET(0x9553B00)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_33AC9EB73CAD7838_OFFSET UNITYSDK_OFFSET(0x9551150)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_46DF29ACE60986D7_OFFSET UNITYSDK_OFFSET(0x9551D90)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_4A37AFB19C9B61F8_OFFSET UNITYSDK_OFFSET(0x9552A70)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_4AB9012B5D01108B_OFFSET UNITYSDK_OFFSET(0x9554820)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_4BD2BFB48FF90060_OFFSET UNITYSDK_OFFSET(0x9551940)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0x95518A0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_54B7BFF8A34CD1AA_OFFSET UNITYSDK_OFFSET(0x95540F0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_6C2FB5ADB3B81368_OFFSET UNITYSDK_OFFSET(0x9552260)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x9554390)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_6F592BA490B2EB87_OFFSET UNITYSDK_OFFSET(0x9552BC0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_705FFC79B57F4953_OFFSET UNITYSDK_OFFSET(0x9551ED0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_7865C2E7793795CC_OFFSET UNITYSDK_OFFSET(0x95530A0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_7C398F4FA6AEBB51_OFFSET UNITYSDK_OFFSET(0x9552C90)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_80F50AEFC2A3FDEC_OFFSET UNITYSDK_OFFSET(0x9552DC0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_82FDFD4FAE50986E_OFFSET UNITYSDK_OFFSET(0x9551A60)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_8B5DB4ACDAC4F04A_OFFSET UNITYSDK_OFFSET(0x9552D20)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_96E11419209C03EC_OFFSET UNITYSDK_OFFSET(0x9553320)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_96F674FB9A99092A_OFFSET UNITYSDK_OFFSET(0x9553710)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0x95543E0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x9551E80)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_A66A64149D4F3438_OFFSET UNITYSDK_OFFSET(0x9551200)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_AA357C2E4B6A63F8_OFFSET UNITYSDK_OFFSET(0x9553F10)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_AF769CD15806BD66_OFFSET UNITYSDK_OFFSET(0x95521D0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x9550E50)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_B1B73B351BCF2EE9_OFFSET UNITYSDK_OFFSET(0x9552FF0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_B4F2C80C7DC7A0B7_OFFSET UNITYSDK_OFFSET(0x9553790)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_BFAD9E795CFA7062_OFFSET UNITYSDK_OFFSET(0x9552F70)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_C0B9D1B2E5611154_OFFSET UNITYSDK_OFFSET(0x9551C20)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_C3C02139EBFD4E4B_OFFSET UNITYSDK_OFFSET(0x95531C0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x9554430)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_C836268BEBB9DBE1_OFFSET UNITYSDK_OFFSET(0x9552E70)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_C8AA73BEAA347C1E_OFFSET UNITYSDK_OFFSET(0x9554200)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_C9258AAEB225D88E_OFFSET UNITYSDK_OFFSET(0x9551250)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9550DE0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9550D90)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x9553650)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_EADDF1782C977BCA_OFFSET UNITYSDK_OFFSET(0x9552040)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_F2F9BCFB5C6AC1C0_OFFSET UNITYSDK_OFFSET(0x9553420)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_F4FDA15C28A64059_OFFSET UNITYSDK_OFFSET(0x95538F0)
#define CLASS_1_7E0DCA9D208905FE_METHOD_1_FD97D2244C0FF5A9_OFFSET UNITYSDK_OFFSET(0x9551D30)
#define CLASS_1_7E0DCA9D208905FE_SET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x95549C0)
#define CLASS_1_7E0DCA9D208905FE__CTOR_OFFSET UNITYSDK_OFFSET(0x95549D0)

inline static constexpr unsigned int Class_1_7E0DCA9D208905FE_TypeDefinitionIndex = 69597;

class Class_1_7E0DCA9D208905FE : public ::System::Object
{
public:
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::String* Field_1_12; // 0x0
	::System::String* _UniqueName_k__BackingField; // 0x10
	::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* Field_1_10; // 0x18
	::RPG::Client::AttachPointMapping* Field_1_5; // 0x20
	::RPG::GameCore::TaskContext* Field_1_1; // 0x28
	::System::Collections::Generic::List_1<::Class_1_82D1CF7388B55201*>* Field_1_11; // 0x30
	::RPG::GameCore::CharacterModelComponent* Field_1_3; // 0x38
	::Il2CppArray<::System::String*>* Field_1_13; // 0x40
	::RPG::GameCore::GameEntity* Field_1_2; // 0x48
	::System::String* Field_1_14; // 0x50
	::System::String* Field_1_4; // 0x58
	::RPG::Client::ActivityHipplen::MonoBabyHipplen* Field_1_7; // 0x60
	::System::UInt32 Field_1_8; // 0x68
	::System::Single Field_1_9; // 0x6C
	::System::Int32 Field_1_15; // 0x70
	::System::Boolean Field_1_17; // 0x74
	::System::Single Field_1_16; // 0x78

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

	::System::Void Method_1_B4F2C80C7DC7A0B7(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_B4F2C80C7DC7A0B7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F4FDA15C28A64059(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_F4FDA15C28A64059_OFFSET))(this, a1);
	}

	::System::Void Method_1_099C229CF1BB9083()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_099C229CF1BB9083_OFFSET))(this);
	}

	::System::Void Method_1_243A0E15571C2748(::System::Int32 a1, ::System::Action_2<::RPG::GameCore::CharacterInputData*, ::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_2<::RPG::GameCore::CharacterInputData*, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_243A0E15571C2748_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_303079AD8576320C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_303079AD8576320C_OFFSET))(this, a1);
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

	::System::Void Method_1_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE_METHOD_1_C7BF9C1E6A78DCAB_OFFSET))(this);
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
