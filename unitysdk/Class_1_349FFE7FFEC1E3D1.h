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

#define CLASS_1_349FFE7FFEC1E3D1_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x1577CDB0)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_01BDAF089E563EBF_OFFSET UNITYSDK_OFFSET(0x1577CD00)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_02FE3E91638825D2_OFFSET UNITYSDK_OFFSET(0x1577B6D0)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x15779D90)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_099C229CF1BB9083_OFFSET UNITYSDK_OFFSET(0x1577BDE0)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_0B3092ADB189C6A2_OFFSET UNITYSDK_OFFSET(0x1577A9E0)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_12821291AE99B448_OFFSET UNITYSDK_OFFSET(0x1577C310)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_1353DF8C18C6947E_OFFSET UNITYSDK_OFFSET(0x1577ADD0)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1577A610)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x1577A050)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_1E325D3CDDFBC683_OFFSET UNITYSDK_OFFSET(0x1577AF20)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_24243725469ECB40_OFFSET UNITYSDK_OFFSET(0x1577C4C0)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_26E509975F92479C_OFFSET UNITYSDK_OFFSET(0x1577A370)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_283228DCA08F69C7_1_OFFSET UNITYSDK_OFFSET(0x1577B780)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x1577B550)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_2C1F3F888AA5ADD5_OFFSET UNITYSDK_OFFSET(0x1577BEF0)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_33AC9EB73CAD7838_OFFSET UNITYSDK_OFFSET(0x157795E0)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_3CCEFF635DC9EF7B_OFFSET UNITYSDK_OFFSET(0x1577B410)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_3CE8A1831DA14AB7_OFFSET UNITYSDK_OFFSET(0x1577B180)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_46DF29ACE60986D7_OFFSET UNITYSDK_OFFSET(0x1577A230)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_4AB9012B5D01108B_OFFSET UNITYSDK_OFFSET(0x1577CC20)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_4BD2BFB48FF90060_OFFSET UNITYSDK_OFFSET(0x15779DE0)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_51875DD155771455_OFFSET UNITYSDK_OFFSET(0x1577BE70)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_5D3D37F2BAE9FB65_OFFSET UNITYSDK_OFFSET(0x1577BA70)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_5FA7B5B551061F7C_OFFSET UNITYSDK_OFFSET(0x1577BBB0)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_6A4F5D96119B67F1_OFFSET UNITYSDK_OFFSET(0x1577ABB0)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x1577C790)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_6F592BA490B2EB87_OFFSET UNITYSDK_OFFSET(0x1577AF80)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_736EFAF4152D13AF_OFFSET UNITYSDK_OFFSET(0x1577BD10)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_7865C2E7793795CC_OFFSET UNITYSDK_OFFSET(0x1577B4C0)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_79734A163132F053_OFFSET UNITYSDK_OFFSET(0x1577B330)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_7C398F4FA6AEBB51_OFFSET UNITYSDK_OFFSET(0x1577B050)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_82FDFD4FAE50986E_OFFSET UNITYSDK_OFFSET(0x15779F00)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_8B5DB4ACDAC4F04A_OFFSET UNITYSDK_OFFSET(0x1577B0E0)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_8CF4463BE0D6CFEF_OFFSET UNITYSDK_OFFSET(0x1577B840)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x157793D0)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_935FE3E8747E5A32_OFFSET UNITYSDK_OFFSET(0x1577A700)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x15779D40)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_96E11419209C03EC_OFFSET UNITYSDK_OFFSET(0x1577B740)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_96F674FB9A99092A_OFFSET UNITYSDK_OFFSET(0x1577BB30)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_9BB24E239DBC4C07_OFFSET UNITYSDK_OFFSET(0x1577BFD0)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0x1577C7E0)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x1577A320)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_A66A64149D4F3438_OFFSET UNITYSDK_OFFSET(0x15779690)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_AF769CD15806BD66_OFFSET UNITYSDK_OFFSET(0x1577A670)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x157792B0)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_C0B9D1B2E5611154_OFFSET UNITYSDK_OFFSET(0x1577A0C0)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_C3C02139EBFD4E4B_OFFSET UNITYSDK_OFFSET(0x1577B5E0)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x1577C830)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_C8AA73BEAA347C1E_OFFSET UNITYSDK_OFFSET(0x1577C5F0)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_C9258AAEB225D88E_OFFSET UNITYSDK_OFFSET(0x157796E0)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15779240)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x157791F0)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_DF249C0E36759C3F_OFFSET UNITYSDK_OFFSET(0x1577B230)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_E21AC6EE08DC160A_OFFSET UNITYSDK_OFFSET(0x1577AD50)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_EADDF1782C977BCA_OFFSET UNITYSDK_OFFSET(0x1577A4E0)
#define CLASS_1_349FFE7FFEC1E3D1_METHOD_1_FD97D2244C0FF5A9_OFFSET UNITYSDK_OFFSET(0x1577A1D0)
#define CLASS_1_349FFE7FFEC1E3D1_SET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x1577CDC0)
#define CLASS_1_349FFE7FFEC1E3D1__CTOR_OFFSET UNITYSDK_OFFSET(0x1577CDD0)

inline static constexpr unsigned int Class_1_349FFE7FFEC1E3D1_TypeDefinitionIndex = 75239;

class Class_1_349FFE7FFEC1E3D1 : public ::System::Object
{
public:
	// static const ::System::String* BCGIMAIKLIN; // 0x0
	// static const ::System::String* DBHBHILPLEA; // 0x0
	::System::Collections::Generic::List_1<::Class_1_82D1CF7388B55201*>* GOCHMLGFPGN; // 0x10
	::System::String* _UniqueName_k__BackingField; // 0x18
	::System::String* LHIIKJMPHCE; // 0x20
	::RPG::GameCore::CharacterModelComponent* EHFENKGDGJD; // 0x28
	::System::String* NIDFIDGCPEC; // 0x30
	::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* NBHMNNAJIOH; // 0x38
	::RPG::GameCore::GameEntity* OBNGMEFNDLF; // 0x40
	::Il2CppArray<::System::String*>* NFMGAMLFOCL; // 0x48
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x50
	::RPG::Client::AttachPointMapping* MDOMBPFNPGB; // 0x58
	::RPG::Client::ActivityHipplen::MonoBabyHipplen* KDIPIJCAAEG; // 0x60
	::System::Int32 PECPFKOMODN; // 0x68
	::System::Boolean DJIPGHOJEKL; // 0x6C
	::System::Single PEHHBBNAMEH; // 0x70
	::System::Single PCABEJLHMBG; // 0x74
	::System::UInt32 POHKENBNFIG; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_33AC9EB73CAD7838(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_33AC9EB73CAD7838_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_A66A64149D4F3438()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_A66A64149D4F3438_OFFSET))(this);
	}

	::System::Void Method_1_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_96A53A17AC5D0E93_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_1_4BD2BFB48FF90060(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_4BD2BFB48FF90060_OFFSET))(this, a1);
	}

	::System::Void Method_1_82FDFD4FAE50986E(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_82FDFD4FAE50986E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C0B9D1B2E5611154(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_C0B9D1B2E5611154_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD97D2244C0FF5A9(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_FD97D2244C0FF5A9_OFFSET))(this, a1);
	}

	::System::Void Method_1_46DF29ACE60986D7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_46DF29ACE60986D7_OFFSET))(this, a1);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_1_26E509975F92479C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_26E509975F92479C_OFFSET))(this, a1);
	}

	::System::Void Method_1_EADDF1782C977BCA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_EADDF1782C977BCA_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_935FE3E8747E5A32(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_935FE3E8747E5A32_OFFSET))(this, a1);
	}

	::System::Void Method_1_6A4F5D96119B67F1(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_6A4F5D96119B67F1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E21AC6EE08DC160A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_E21AC6EE08DC160A_OFFSET))(this);
	}

	::RPG::GameCore::TaskContext* Method_1_1353DF8C18C6947E()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_1353DF8C18C6947E_OFFSET))(this);
	}

	::System::Void Method_1_1E325D3CDDFBC683(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_1E325D3CDDFBC683_OFFSET))(this, a1);
	}

	::System::Void Method_1_AF769CD15806BD66(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_AF769CD15806BD66_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_6F592BA490B2EB87(::System::String* a1, ::System::Boolean a2)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_6F592BA490B2EB87_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0B3092ADB189C6A2(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_0B3092ADB189C6A2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7C398F4FA6AEBB51(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_7C398F4FA6AEBB51_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8B5DB4ACDAC4F04A(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_8B5DB4ACDAC4F04A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3CE8A1831DA14AB7(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_3CE8A1831DA14AB7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DF249C0E36759C3F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_DF249C0E36759C3F_OFFSET))(this, a1);
	}

	::System::Void Method_1_79734A163132F053(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_79734A163132F053_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3CCEFF635DC9EF7B(::UnityEngine::Collider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_3CCEFF635DC9EF7B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7865C2E7793795CC(::UnityEngine::Collider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_7865C2E7793795CC_OFFSET))(this, a1);
	}

	::System::Void Method_1_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_C3C02139EBFD4E4B(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_C3C02139EBFD4E4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_02FE3E91638825D2(::UnityEngine::Transform* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_02FE3E91638825D2_OFFSET))(this, a1, a2);
	}

	::RPG::Client::ActivityHipplen::MonoBabyHipplen* Method_1_96E11419209C03EC()
	{
		return ((::RPG::Client::ActivityHipplen::MonoBabyHipplen*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_96E11419209C03EC_OFFSET))(this);
	}

	::System::Void Method_1_283228DCA08F69C7_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_283228DCA08F69C7_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_8CF4463BE0D6CFEF(::UnityEngine::Vector3 a1, ::System::Nullable_1<::UnityEngine::Quaternion> a2, ::Class_3_CD04D3296DF4C842_4* a3, ::Class_3_9B28A54582B92258* a4, ::RPG::GameCore::CharacterMotionFlag a5, ::System::Boolean a6, ::System::Single a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Quaternion>, ::Class_3_CD04D3296DF4C842_4*, ::Class_3_9B28A54582B92258*, ::RPG::GameCore::CharacterMotionFlag, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_8CF4463BE0D6CFEF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_1_5D3D37F2BAE9FB65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_5D3D37F2BAE9FB65_OFFSET))(this);
	}

	::System::Void Method_1_96F674FB9A99092A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_96F674FB9A99092A_OFFSET))(this, a1);
	}

	::System::Void Method_1_5FA7B5B551061F7C(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_5FA7B5B551061F7C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_736EFAF4152D13AF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_736EFAF4152D13AF_OFFSET))(this, a1);
	}

	::System::Void Method_1_099C229CF1BB9083()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_099C229CF1BB9083_OFFSET))(this);
	}

	::System::Void Method_1_51875DD155771455(::System::Int32 a1, ::System::Action_2<::RPG::GameCore::CharacterInputData*, ::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_2<::RPG::GameCore::CharacterInputData*, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_51875DD155771455_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2C1F3F888AA5ADD5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_2C1F3F888AA5ADD5_OFFSET))(this, a1);
	}

	::System::Void Method_1_9BB24E239DBC4C07(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::RPG::MVector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_9BB24E239DBC4C07_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_12821291AE99B448(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_12821291AE99B448_OFFSET))(this, a1);
	}

	::System::Void Method_1_C8AA73BEAA347C1E(::System::Single a1, ::System::Single a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_C8AA73BEAA347C1E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Single Method_1_A36150C5DCC8409E_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_A36150C5DCC8409E_1_OFFSET))(this);
	}

	::System::Void Method_1_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_C7BF9C1E6A78DCAB_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_C9258AAEB225D88E()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_C9258AAEB225D88E_OFFSET))(this);
	}

	::System::Void Method_1_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_921C3C3E09D59CD4_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_24243725469ECB40(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_24243725469ECB40_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_4AB9012B5D01108B()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_4AB9012B5D01108B_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_01BDAF089E563EBF()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_METHOD_1_01BDAF089E563EBF_OFFSET))(this);
	}

	::System::String* get_UniqueName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_GET_UNIQUENAME_OFFSET))(this);
	}

	::System::Void set_UniqueName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1_SET_UNIQUENAME_OFFSET))(this, a1);
	}
};
