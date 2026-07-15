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

#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_0772661406F51ADB_OFFSET UNITYSDK_OFFSET(0x15E4B980)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_186AA054E8326968_OFFSET UNITYSDK_OFFSET(0x15E4B560)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_2934FD95900E25B5_OFFSET UNITYSDK_OFFSET(0x15E50630)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_2AA27BA1D6C33879_OFFSET UNITYSDK_OFFSET(0x15E45AB0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_3008EB101AD8057B_OFFSET UNITYSDK_OFFSET(0x15E4FBA0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x15E46720)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_353E31384A248EED_OFFSET UNITYSDK_OFFSET(0x15E51300)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_3C0F7658751C32B0_OFFSET UNITYSDK_OFFSET(0x15E4E1D0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_3DA91C9B57824EE6_OFFSET UNITYSDK_OFFSET(0x15E4BE50)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_3E23A2EE3F65066B_OFFSET UNITYSDK_OFFSET(0x15E4B3E0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_3E4CBBD89B4FBE55_OFFSET UNITYSDK_OFFSET(0x15E4AAD0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_44E1C4BA1123578B_OFFSET UNITYSDK_OFFSET(0x15E4F7C0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_47B46C40CF547193_OFFSET UNITYSDK_OFFSET(0x15E4E270)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_47F2555F83B8DAE1_OFFSET UNITYSDK_OFFSET(0x15E458A0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_49F692C01A20E7F1_OFFSET UNITYSDK_OFFSET(0x15E4BC50)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x15E46CC0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_5E9906D613ECF25F_OFFSET UNITYSDK_OFFSET(0x15E4CCD0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_602B796CAD5DBEDB_OFFSET UNITYSDK_OFFSET(0x15E4C640)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_6092608CF92684DE_OFFSET UNITYSDK_OFFSET(0x15E4B390)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x15E463B0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_6A21186282395464_OFFSET UNITYSDK_OFFSET(0x15E4F150)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0x15E45E10)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_7AB000B2DA3DF7D1_OFFSET UNITYSDK_OFFSET(0x15E4FD40)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_7D7AA2DF949AC657_OFFSET UNITYSDK_OFFSET(0x15E4E3A0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_7D968026C2023C80_OFFSET UNITYSDK_OFFSET(0x15E467D0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x15E4E870)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_851CC87DBC0902F9_OFFSET UNITYSDK_OFFSET(0x15E4DEE0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_8F6A1B72899F4EA4_OFFSET UNITYSDK_OFFSET(0x15E459C0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_9076BB310BB6989E_OFFSET UNITYSDK_OFFSET(0x15E46DF0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0x15E4B030)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15E4AF60)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_9982841760D041C2_OFFSET UNITYSDK_OFFSET(0x15E51040)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_AC93B0A6D917A386_OFFSET UNITYSDK_OFFSET(0x15E4FF80)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_B0091B0E1DC92674_OFFSET UNITYSDK_OFFSET(0x15E500F0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x15E45F20)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_BC4D22544163BF30_OFFSET UNITYSDK_OFFSET(0x15E4E4C0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_C373CE9EE91987A2_OFFSET UNITYSDK_OFFSET(0x15E457A0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_CB74603E77CF9AD9_OFFSET UNITYSDK_OFFSET(0x15E4D070)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_D5C60D4BCF120194_OFFSET UNITYSDK_OFFSET(0x15E4FE70)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_D8ACD155C8BD8238_OFFSET UNITYSDK_OFFSET(0x15E501F0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_D94D446371432B5F_OFFSET UNITYSDK_OFFSET(0x15E50880)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_DDFCBBB54CA12CE0_OFFSET UNITYSDK_OFFSET(0x15E4DA00)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_DFBFA538F7174FFF_OFFSET UNITYSDK_OFFSET(0x15E4E900)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_E305ECB63019269B_OFFSET UNITYSDK_OFFSET(0x15E508F0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_E46BE7AABD43A71A_OFFSET UNITYSDK_OFFSET(0x15E4F990)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_ECF5752EC6D68585_OFFSET UNITYSDK_OFFSET(0x15E50FA0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_EEED34E9AAC26D51_OFFSET UNITYSDK_OFFSET(0x15E45F90)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_F2C85D8580AEDBDE_OFFSET UNITYSDK_OFFSET(0x15E469B0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x15E46FD0)
#define CLASS_2_E4151F8C70CE8C1E__CTOR_OFFSET UNITYSDK_OFFSET(0x15E51350)

inline static constexpr unsigned int Class_2_E4151F8C70CE8C1E_TypeDefinitionIndex = 66741;

class Class_2_E4151F8C70CE8C1E : public ::RPG::Client::BehaviorBase
{
public:
	::Class_2_523C55AEA55804D8* Field_2_0; // 0x18
	::RPG::Client::NotifyHandler* Field_2_1; // 0x20
	::UnityEngine::Transform* Field_2_2; // 0x28
	::UnityEngine::Rigidbody* Field_2_3; // 0x30
	::UnityEngine::Transform* Field_2_4; // 0x38
	::RPG::GameCore::TransformComponent* Field_2_5; // 0x40
	::RPG::GameCore::GameEntity* Field_2_6; // 0x48
	::RPG::Client::NotifyHandler* Field_2_7; // 0x50
	::Il2CppArray<::RPG::Client::Effect_AfterImageNew*>* Field_2_8; // 0x58
	::UnityEngine::Transform* Field_2_9; // 0x60
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_10; // 0x68
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_11; // 0x70
	::RPG::Client::AttachPointMapping* Field_2_12; // 0x78
	::RPG::GameCore::CharacterModelComponent* Field_2_13; // 0x80
	::UnityEngine::Vector3 Field_2_14; // 0x88
	::System::Single Field_2_15; // 0x94
	::System::Single Field_2_16; // 0x98
	::UnityEngine::Vector3 Field_2_17; // 0x9C
	::RPG::Client::ModelFlipOption Field_2_18; // 0xA8
	::System::Boolean Field_2_19; // 0xAC
	::System::Boolean Field_2_20; // 0xAD
	::System::Boolean Field_2_21; // 0xAE
	::System::Boolean Field_2_22; // 0xAF
	::UnityEngine::Vector3 Field_2_23; // 0xB0
	::System::Single Field_2_24; // 0xBC
	::RPG::Client::PositionFollowOption Field_2_25; // 0xC0
	::UnityEngine::Vector3 Field_2_26; // 0xC4
	::UnityEngine::Vector3 Field_2_27; // 0xD0
	::UnityEngine::Vector3 Field_2_28; // 0xDC
	::UnityEngine::Vector3 Field_2_29; // 0xE8
	::UnityEngine::Quaternion Field_2_30; // 0xF4
	::System::Single Field_2_31; // 0x104
	::System::Single Field_2_32; // 0x108
	::RPG::Client::ScaleFollowOption Field_2_33; // 0x10C
	::System::Int32 Field_2_34; // 0x110
	::UnityEngine::Vector3 Field_2_35; // 0x114
	::RPG::Client::RotationFollowOption Field_2_36; // 0x120

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

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_9681042564541CD6_OFFSET))(this);
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

	::System::Void Method_2_3DA91C9B57824EE6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_3DA91C9B57824EE6_OFFSET))(this);
	}

	::System::Void Method_2_3E23A2EE3F65066B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_3E23A2EE3F65066B_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_30D1209326FA87FC_OFFSET))(this);
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
