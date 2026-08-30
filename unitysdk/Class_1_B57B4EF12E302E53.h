#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2BF31F3092BDFD9E;
class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class MonoWolfBroBulletLine; }
namespace RPG::Client { class MonoWolfBroBulletPoint; }
namespace RPG::Client { class WolfBroGunPlayerProjectile; }
namespace RPG::Client { class WolfBroGunTargetProjectile; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_B57B4EF12E302E53_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1727C710)
#define CLASS_1_B57B4EF12E302E53_GET_ROADMAP_OFFSET UNITYSDK_OFFSET(0x1727D340)
#define CLASS_1_B57B4EF12E302E53_METHOD_1_0798AB0C5AC86AC4_OFFSET UNITYSDK_OFFSET(0x1727D410)
#define CLASS_1_B57B4EF12E302E53_METHOD_1_2A7447376B5B0FB7_OFFSET UNITYSDK_OFFSET(0x1727DA10)
#define CLASS_1_B57B4EF12E302E53_METHOD_1_39B42B26FBA3BA01_OFFSET UNITYSDK_OFFSET(0x1727D0D0)
#define CLASS_1_B57B4EF12E302E53_METHOD_1_82BF62BDABFA00B1_OFFSET UNITYSDK_OFFSET(0x1727C9F0)
#define CLASS_1_B57B4EF12E302E53_METHOD_1_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x1727D430)
#define CLASS_1_B57B4EF12E302E53_METHOD_1_A1C464B05BB7A5C1_OFFSET UNITYSDK_OFFSET(0x1727D360)
#define CLASS_1_B57B4EF12E302E53_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x1727C980)
#define CLASS_1_B57B4EF12E302E53_METHOD_1_DF249C0E36759C3F_OFFSET UNITYSDK_OFFSET(0x1727C580)
#define CLASS_1_B57B4EF12E302E53_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1727D350)
#define CLASS_1_B57B4EF12E302E53_METHOD_1_F2808815D7152326_OFFSET UNITYSDK_OFFSET(0x1727C0E0)
#define CLASS_1_B57B4EF12E302E53_METHOD_1_F3CF8C6DA493C7E7_OFFSET UNITYSDK_OFFSET(0x1727CDE0)
#define CLASS_1_B57B4EF12E302E53_METHOD_1_FA7F07669215B524_OFFSET UNITYSDK_OFFSET(0x1727D2B0)
#define CLASS_1_B57B4EF12E302E53__CTOR_OFFSET UNITYSDK_OFFSET(0x1727BDF0)

inline static constexpr unsigned int Class_1_B57B4EF12E302E53_TypeDefinitionIndex = 68728;

class Class_1_B57B4EF12E302E53 : public ::System::Object
{
public:
	::Class_1_2BF31F3092BDFD9E* _RoadMap_k__BackingField; // 0x10
	::RPG::Client::WolfBroGunPlayerProjectile* LAEMELONLDO; // 0x18
	::RPG::Client::MonoWolfBroBulletLine* KHNHANNJFBH; // 0x20
	::UnityEngine::Transform* EKODGCDDPNI; // 0x28
	::RPG::Client::MonoWolfBroBulletPoint* NMAFKIEHMBB; // 0x30
	::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x38
	::UnityEngine::Vector3 KBNLFEJALEO; // 0x40
	::UnityEngine::Quaternion PLKDOIPKLHO; // 0x4C
	::System::Single HACBICLKMDA; // 0x5C
	::System::Single GJGBBOBGACM; // 0x60

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Transform* a2, ::RPG::Client::WolfBroGunPlayerProjectile* a3, ::Class_1_2BF31F3092BDFD9E* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Transform*, ::RPG::Client::WolfBroGunPlayerProjectile*, ::Class_1_2BF31F3092BDFD9E*))((::PBYTE)hIl2Cpp + CLASS_1_B57B4EF12E302E53__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_F2808815D7152326(::System::String* a1, ::RPG::Client::MonoWolfBroBulletLine* a2, ::RPG::Client::MonoWolfBroBulletPoint* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::MonoWolfBroBulletLine*, ::RPG::Client::MonoWolfBroBulletPoint*))((::PBYTE)hIl2Cpp + CLASS_1_B57B4EF12E302E53_METHOD_1_F2808815D7152326_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_DF249C0E36759C3F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B57B4EF12E302E53_METHOD_1_DF249C0E36759C3F_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B57B4EF12E302E53_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B57B4EF12E302E53_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_82BF62BDABFA00B1(::RPG::GameCore::AdventureCharacterController* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_1_B57B4EF12E302E53_METHOD_1_82BF62BDABFA00B1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F3CF8C6DA493C7E7(::UnityEngine::Vector3 a1, ::Class_3_07C3C4D2990C49EE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + CLASS_1_B57B4EF12E302E53_METHOD_1_F3CF8C6DA493C7E7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_39B42B26FBA3BA01(::RPG::Client::WolfBroGunTargetProjectile* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::WolfBroGunTargetProjectile*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B57B4EF12E302E53_METHOD_1_39B42B26FBA3BA01_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Quaternion Method_1_FA7F07669215B524()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B57B4EF12E302E53_METHOD_1_FA7F07669215B524_OFFSET))(this);
	}

	::Class_1_2BF31F3092BDFD9E* get_RoadMap()
	{
		return ((::Class_1_2BF31F3092BDFD9E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B57B4EF12E302E53_GET_ROADMAP_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B57B4EF12E302E53_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_A1C464B05BB7A5C1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B57B4EF12E302E53_METHOD_1_A1C464B05BB7A5C1_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_0798AB0C5AC86AC4()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B57B4EF12E302E53_METHOD_1_0798AB0C5AC86AC4_OFFSET))(this);
	}

	::System::Void Method_1_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B57B4EF12E302E53_METHOD_1_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_1_2A7447376B5B0FB7(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B57B4EF12E302E53_METHOD_1_2A7447376B5B0FB7_OFFSET))(this, a1, a2);
	}
};
