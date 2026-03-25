#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2BF31F3092BDFD9E;
class Class_3_5775A4FEC79026BC;
namespace RPG::Client { class MonoWolfBroBulletLine; }
namespace RPG::Client { class MonoWolfBroBulletPoint; }
namespace RPG::Client { class WolfBroGunPlayerProjectile; }
namespace RPG::Client { class WolfBroGunTargetProjectile; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_A66D7C1E06495A1A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B30D50)
#define CLASS_1_A66D7C1E06495A1A_GET_ROADMAP_OFFSET UNITYSDK_OFFSET(0x10B31940)
#define CLASS_1_A66D7C1E06495A1A_METHOD_1_0798AB0C5AC86AC4_OFFSET UNITYSDK_OFFSET(0x10B31A10)
#define CLASS_1_A66D7C1E06495A1A_METHOD_1_2A7447376B5B0FB7_OFFSET UNITYSDK_OFFSET(0x10B32010)
#define CLASS_1_A66D7C1E06495A1A_METHOD_1_39B42B26FBA3BA01_OFFSET UNITYSDK_OFFSET(0x10B316D0)
#define CLASS_1_A66D7C1E06495A1A_METHOD_1_82BF62BDABFA00B1_OFFSET UNITYSDK_OFFSET(0x10B30FF0)
#define CLASS_1_A66D7C1E06495A1A_METHOD_1_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x10B31A30)
#define CLASS_1_A66D7C1E06495A1A_METHOD_1_A1C464B05BB7A5C1_OFFSET UNITYSDK_OFFSET(0x10B31960)
#define CLASS_1_A66D7C1E06495A1A_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x10B30F80)
#define CLASS_1_A66D7C1E06495A1A_METHOD_1_DF249C0E36759C3F_OFFSET UNITYSDK_OFFSET(0x10B30BC0)
#define CLASS_1_A66D7C1E06495A1A_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x10B31950)
#define CLASS_1_A66D7C1E06495A1A_METHOD_1_F2808815D7152326_OFFSET UNITYSDK_OFFSET(0x10B30720)
#define CLASS_1_A66D7C1E06495A1A_METHOD_1_F3CF8C6DA493C7E7_OFFSET UNITYSDK_OFFSET(0x10B313E0)
#define CLASS_1_A66D7C1E06495A1A_METHOD_1_FA7F07669215B524_OFFSET UNITYSDK_OFFSET(0x10B318B0)
#define CLASS_1_A66D7C1E06495A1A__CTOR_OFFSET UNITYSDK_OFFSET(0x10B303F0)

inline static constexpr unsigned int Class_1_A66D7C1E06495A1A_TypeDefinitionIndex = 56160;

class Class_1_A66D7C1E06495A1A : public ::System::Object
{
public:
	::RPG::Client::MonoWolfBroBulletPoint* Field_1_7; // 0x10
	::RPG::GameCore::AdventureCharacterController* Field_1_1; // 0x18
	::UnityEngine::Transform* Field_1_2; // 0x20
	::Class_1_2BF31F3092BDFD9E* _RoadMap_k__BackingField; // 0x28
	::RPG::Client::WolfBroGunPlayerProjectile* Field_1_3; // 0x30
	::RPG::Client::MonoWolfBroBulletLine* Field_1_6; // 0x38
	::System::Single Field_1_8; // 0x40
	::System::Single Field_1_9; // 0x44
	::UnityEngine::Quaternion Field_1_5; // 0x48
	::UnityEngine::Vector3 Field_1_4; // 0x58

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Transform* a2, ::RPG::Client::WolfBroGunPlayerProjectile* a3, ::Class_1_2BF31F3092BDFD9E* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Transform*, ::RPG::Client::WolfBroGunPlayerProjectile*, ::Class_1_2BF31F3092BDFD9E*))((::PBYTE)hIl2Cpp + CLASS_1_A66D7C1E06495A1A__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_F2808815D7152326(::System::String* a1, ::RPG::Client::MonoWolfBroBulletLine* a2, ::RPG::Client::MonoWolfBroBulletPoint* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::MonoWolfBroBulletLine*, ::RPG::Client::MonoWolfBroBulletPoint*))((::PBYTE)hIl2Cpp + CLASS_1_A66D7C1E06495A1A_METHOD_1_F2808815D7152326_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_DF249C0E36759C3F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A66D7C1E06495A1A_METHOD_1_DF249C0E36759C3F_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A66D7C1E06495A1A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A66D7C1E06495A1A_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_82BF62BDABFA00B1(::RPG::GameCore::AdventureCharacterController* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_1_A66D7C1E06495A1A_METHOD_1_82BF62BDABFA00B1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F3CF8C6DA493C7E7(::UnityEngine::Vector3 a1, ::Class_3_5775A4FEC79026BC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::Class_3_5775A4FEC79026BC*))((::PBYTE)hIl2Cpp + CLASS_1_A66D7C1E06495A1A_METHOD_1_F3CF8C6DA493C7E7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_39B42B26FBA3BA01(::RPG::Client::WolfBroGunTargetProjectile* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::WolfBroGunTargetProjectile*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A66D7C1E06495A1A_METHOD_1_39B42B26FBA3BA01_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Quaternion Method_1_FA7F07669215B524()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A66D7C1E06495A1A_METHOD_1_FA7F07669215B524_OFFSET))(this);
	}

	::Class_1_2BF31F3092BDFD9E* get_RoadMap()
	{
		return ((::Class_1_2BF31F3092BDFD9E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A66D7C1E06495A1A_GET_ROADMAP_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A66D7C1E06495A1A_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_A1C464B05BB7A5C1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A66D7C1E06495A1A_METHOD_1_A1C464B05BB7A5C1_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_0798AB0C5AC86AC4()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A66D7C1E06495A1A_METHOD_1_0798AB0C5AC86AC4_OFFSET))(this);
	}

	::System::Void Method_1_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A66D7C1E06495A1A_METHOD_1_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_1_2A7447376B5B0FB7(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A66D7C1E06495A1A_METHOD_1_2A7447376B5B0FB7_OFFSET))(this, a1, a2);
	}
};
