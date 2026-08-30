#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/Client/ModelFlipOption.h"
#include "unitysdk/RPG/Client/PositionFollowOption.h"
#include "unitysdk/RPG/Client/RotationFollowOption.h"
#include "unitysdk/RPG/Client/ScaleFollowOption.h"
#include "unitysdk/UnityEngine/ParticleSystem_MinMaxCurve.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_523C55AEA55804D8;
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class Effect_AfterImageNew; }
namespace RPG::Client { class MonoEffectPluginFollow; }
namespace RPG::Client { class NotifyHandler; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_0772661406F51ADB_OFFSET UNITYSDK_OFFSET(0xB9D5470)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_186AA054E8326968_OFFSET UNITYSDK_OFFSET(0xB9D5050)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_2934FD95900E25B5_OFFSET UNITYSDK_OFFSET(0xB9DA040)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_2AA27BA1D6C33879_OFFSET UNITYSDK_OFFSET(0xB9CF490)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_3008EB101AD8057B_OFFSET UNITYSDK_OFFSET(0xB9D95B0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_30D1209326FA87FC_1_OFFSET UNITYSDK_OFFSET(0xB9D0180)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xB9D49D0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_353E31384A248EED_OFFSET UNITYSDK_OFFSET(0xB9DADA0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_3C0F7658751C32B0_OFFSET UNITYSDK_OFFSET(0xB9D7BE0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_3DA91C9B57824EE6_OFFSET UNITYSDK_OFFSET(0xB9D5940)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_3E23A2EE3F65066B_OFFSET UNITYSDK_OFFSET(0xB9D4ED0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_3E4CBBD89B4FBE55_OFFSET UNITYSDK_OFFSET(0xB9D4540)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_44E1C4BA1123578B_OFFSET UNITYSDK_OFFSET(0xB9D91D0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_47B46C40CF547193_OFFSET UNITYSDK_OFFSET(0xB9D7C80)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_47F2555F83B8DAE1_OFFSET UNITYSDK_OFFSET(0xB9CF280)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_49F692C01A20E7F1_OFFSET UNITYSDK_OFFSET(0xB9D5740)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0xB9D0720)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_5E9906D613ECF25F_OFFSET UNITYSDK_OFFSET(0xB9D67B0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_602B796CAD5DBEDB_OFFSET UNITYSDK_OFFSET(0xB9D6120)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_6092608CF92684DE_OFFSET UNITYSDK_OFFSET(0xB9D4E80)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0xB9CFE10)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_6A21186282395464_OFFSET UNITYSDK_OFFSET(0xB9D8B60)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0xB9CF7F0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_7AB000B2DA3DF7D1_OFFSET UNITYSDK_OFFSET(0xB9D9750)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_7D7AA2DF949AC657_OFFSET UNITYSDK_OFFSET(0xB9D7DB0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_7D968026C2023C80_OFFSET UNITYSDK_OFFSET(0xB9D0230)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0xB9D8280)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_851CC87DBC0902F9_OFFSET UNITYSDK_OFFSET(0xB9D78F0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0xB9DA2F0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_8F6A1B72899F4EA4_OFFSET UNITYSDK_OFFSET(0xB9CF3A0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_9076BB310BB6989E_OFFSET UNITYSDK_OFFSET(0xB9D0850)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0xB9D4B20)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_9982841760D041C2_OFFSET UNITYSDK_OFFSET(0xB9DAAE0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_AC93B0A6D917A386_OFFSET UNITYSDK_OFFSET(0xB9D9990)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_B0091B0E1DC92674_OFFSET UNITYSDK_OFFSET(0xB9D9B00)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0xB9CF900)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_BC4D22544163BF30_OFFSET UNITYSDK_OFFSET(0xB9D7ED0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_C373CE9EE91987A2_OFFSET UNITYSDK_OFFSET(0xB9CF180)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_CB74603E77CF9AD9_OFFSET UNITYSDK_OFFSET(0xB9D6B50)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_D5C60D4BCF120194_OFFSET UNITYSDK_OFFSET(0xB9D9880)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_D8ACD155C8BD8238_OFFSET UNITYSDK_OFFSET(0xB9D9C00)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_D94D446371432B5F_OFFSET UNITYSDK_OFFSET(0xB9DA280)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_DDFCBBB54CA12CE0_OFFSET UNITYSDK_OFFSET(0xB9D7410)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_DFBFA538F7174FFF_OFFSET UNITYSDK_OFFSET(0xB9D8310)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_E305ECB63019269B_OFFSET UNITYSDK_OFFSET(0xB9DA390)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_E46BE7AABD43A71A_OFFSET UNITYSDK_OFFSET(0xB9D93A0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_ECF5752EC6D68585_OFFSET UNITYSDK_OFFSET(0xB9DAA40)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_EEED34E9AAC26D51_OFFSET UNITYSDK_OFFSET(0xB9CF970)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_F2C85D8580AEDBDE_OFFSET UNITYSDK_OFFSET(0xB9D0410)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0xB9D0A40)
#define CLASS_2_E4151F8C70CE8C1E__CTOR_OFFSET UNITYSDK_OFFSET(0xB9DADF0)

inline static constexpr unsigned int Class_2_E4151F8C70CE8C1E_TypeDefinitionIndex = 69843;

class Class_2_E4151F8C70CE8C1E : public ::RPG::Client::BehaviorBase
{
public:
	::Class_2_523C55AEA55804D8* PIAEMLOEJJC; // 0x18
	::RPG::Client::NotifyHandler* JAJKCJIDMPJ; // 0x20
	::RPG::GameCore::CharacterModelComponent* MCEKMAPNCKL; // 0x28
	::Il2CppArray<::RPG::Client::Effect_AfterImageNew*>* LOAACBNJABB; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* CPHHELOGCCL; // 0x38
	::UnityEngine::Transform* AHHCHFFGONL; // 0x40
	::System::Collections::Generic::HashSet_1<::System::Int32>* JEJFNGENNPI; // 0x48
	::RPG::Client::AttachPointMapping* FEFIGDAEGGI; // 0x50
	::UnityEngine::Transform* GLCKFPKNEIM; // 0x58
	::UnityEngine::Rigidbody* LHDDEIIFHLI; // 0x60
	::RPG::GameCore::GameEntity* ANFAHNJGAGG; // 0x68
	::RPG::GameCore::TransformComponent* NJINMJCLJNE; // 0x70
	::UnityEngine::Transform* DMBMOHJLNEN; // 0x78
	::RPG::Client::NotifyHandler* AFIPMMNJIJC; // 0x80
	::RPG::Client::NotifyHandler* OIJOCINPFLJ; // 0x88
	::RPG::Client::RotationFollowOption HEPOCPPCOLI; // 0x90
	::System::Single HPFGIPBAHCB; // 0x94
	::System::Boolean GPDGGNNBHJE; // 0x98
	::System::Boolean DPEJDIOGODF; // 0x99
	::System::Boolean LFOHPMLLAME; // 0x9A
	::System::Boolean HJMADNNHBHC; // 0x9B
	::UnityEngine::Vector3 CPEBEIGNAAK; // 0x9C
	::System::Single HLPBJKOOKOF; // 0xA8
	::UnityEngine::Vector3 CAPGLCKLIBK; // 0xAC
	::UnityEngine::Vector3 NMEBMMDAJKF; // 0xB8
	::System::Single CFCDBPNJPHN; // 0xC4
	::UnityEngine::Vector3 NLABAOCHHCK; // 0xC8
	::UnityEngine::Vector3 MMCEMCHNAGD; // 0xD4
	::System::Single IIFMKPHMONJ; // 0xE0
	::UnityEngine::Vector3 MEKFHKIIPAN; // 0xE4
	::RPG::Client::ScaleFollowOption LABCJMACDDI; // 0xF0
	::UnityEngine::Vector3 AMHNNDHJNKD; // 0xF4
	::System::Single CBIIFEGEPIP; // 0x100
	::System::Int32 ONJLDCPDKFD; // 0x104
	::RPG::Client::PositionFollowOption KMMPIAAPGKI; // 0x108
	::UnityEngine::Vector3 MKJBIBGMPPI; // 0x10C
	::RPG::Client::ModelFlipOption AEKBJMKAMPL; // 0x118
	::UnityEngine::Quaternion HEMFBLEPEFB; // 0x11C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C373CE9EE91987A2(::System::Boolean a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_C373CE9EE91987A2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8F6A1B72899F4EA4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_8F6A1B72899F4EA4_OFFSET))(this);
	}

	::System::Void Method_2_47F2555F83B8DAE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_47F2555F83B8DAE1_OFFSET))(this);
	}

	::System::Void Method_2_2AA27BA1D6C33879(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_2AA27BA1D6C33879_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Method_2_EEED34E9AAC26D51()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_EEED34E9AAC26D51_OFFSET))(this);
	}

	::System::Void Method_2_F2C85D8580AEDBDE(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_F2C85D8580AEDBDE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9076BB310BB6989E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_9076BB310BB6989E_OFFSET))(this);
	}

	::System::Void Method_2_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_6E6682ED9FD6F719_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_6092608CF92684DE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_6092608CF92684DE_OFFSET))(this);
	}

	::System::Void Method_2_186AA054E8326968(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_186AA054E8326968_OFFSET))(this, a1);
	}

	::System::Void Method_2_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Boolean Method_2_0772661406F51ADB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_0772661406F51ADB_OFFSET))(this);
	}

	::System::Void Method_2_DDFCBBB54CA12CE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_DDFCBBB54CA12CE0_OFFSET))(this);
	}

	::System::Void Method_2_3C0F7658751C32B0(::UnityEngine::ParticleSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_3C0F7658751C32B0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_47B46C40CF547193(::UnityEngine::ParticleSystem* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_47B46C40CF547193_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7D7AA2DF949AC657(::UnityEngine::ParticleSystem_MinMaxCurve a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_7D7AA2DF949AC657_OFFSET))(this, a1);
	}

	::System::Void Method_2_907E24F785836BA0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_907E24F785836BA0_OFFSET))(this);
	}

	::System::Void Method_2_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_67D41ACFEF39E84E_OFFSET))(this);
	}

	::System::Void Method_2_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Method_2_D8ACD155C8BD8238(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_D8ACD155C8BD8238_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2934FD95900E25B5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_2934FD95900E25B5_OFFSET))(this, a1);
	}

	::System::Void Method_2_D94D446371432B5F(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_D94D446371432B5F_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_3DA91C9B57824EE6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_3DA91C9B57824EE6_OFFSET))(this);
	}

	::System::Void Method_2_3E23A2EE3F65066B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_3E23A2EE3F65066B_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_30D1209326FA87FC_1_OFFSET))(this);
	}

	::System::Void Method_2_851CC87DBC0902F9(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_851CC87DBC0902F9_OFFSET))(this, a1);
	}

	::System::Void Method_2_602B796CAD5DBEDB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_602B796CAD5DBEDB_OFFSET))(this, a1);
	}

	static ::System::Single Method_2_ECF5752EC6D68585(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_ECF5752EC6D68585_OFFSET))(a1, a2);
	}

	::System::Void Method_2_CB74603E77CF9AD9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_CB74603E77CF9AD9_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_E305ECB63019269B(::System::Single a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_E305ECB63019269B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5E9906D613ECF25F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_5E9906D613ECF25F_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E4CBBD89B4FBE55(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_3E4CBBD89B4FBE55_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DFBFA538F7174FFF(::UnityEngine::Quaternion a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_DFBFA538F7174FFF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6A21186282395464(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_6A21186282395464_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_3008EB101AD8057B(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_3008EB101AD8057B_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_44E1C4BA1123578B()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_44E1C4BA1123578B_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_E46BE7AABD43A71A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_E46BE7AABD43A71A_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_BC4D22544163BF30()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_BC4D22544163BF30_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_9982841760D041C2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_9982841760D041C2_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_7AB000B2DA3DF7D1(::UnityEngine::Camera* a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Camera*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_7AB000B2DA3DF7D1_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_D5C60D4BCF120194(::UnityEngine::Camera* a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Camera*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_D5C60D4BCF120194_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_AC93B0A6D917A386(::UnityEngine::Camera* a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Camera*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_AC93B0A6D917A386_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_B0091B0E1DC92674(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_B0091B0E1DC92674_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::MonoEffectPluginFollow* Method_2_353E31384A248EED()
	{
		return ((::RPG::Client::MonoEffectPluginFollow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_353E31384A248EED_OFFSET))(this);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_49F692C01A20E7F1()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_49F692C01A20E7F1_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_7D968026C2023C80()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_7D968026C2023C80_OFFSET))(this);
	}
};
