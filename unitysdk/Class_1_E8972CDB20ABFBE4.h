#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_1_E8972CDB20ABFBE4_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AF2EDF0)
#define CLASS_1_E8972CDB20ABFBE4_METHOD_1_4AB9012B5D01108B_OFFSET UNITYSDK_OFFSET(0x1AF2F250)
#define CLASS_1_E8972CDB20ABFBE4_METHOD_1_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x1AF2EE50)
#define CLASS_1_E8972CDB20ABFBE4_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1AF2EF60)
#define CLASS_1_E8972CDB20ABFBE4_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x1AF2F360)
#define CLASS_1_E8972CDB20ABFBE4_METHOD_1_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x1AF2F190)
#define CLASS_1_E8972CDB20ABFBE4_METHOD_1_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x1AF2F3B0)
#define CLASS_1_E8972CDB20ABFBE4_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x1AF2EED0)
#define CLASS_1_E8972CDB20ABFBE4__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF2F420)

inline static constexpr unsigned int Class_1_E8972CDB20ABFBE4_TypeDefinitionIndex = 73153;

class Class_1_E8972CDB20ABFBE4 : public ::System::Object
{
public:
	::RPG::Client::BaseShaderPropertyTransition* EMIGJFKIAEF; // 0x10
	::UnityEngine::Transform* PDJGEDNLBKJ; // 0x18
	::UnityEngine::Collider* CLFOJDPNEPD; // 0x20
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x28
	::System::Boolean DMODDCDAFJJ; // 0x30
	::System::Boolean AKBPNMEFGAO; // 0x31
	::UnityEngine::Vector3 KFJPKPKPEOJ; // 0x34
	::UnityEngine::Vector3 MEEAANFOAAM; // 0x40
	::System::Single COAELIHGAHH; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8972CDB20ABFBE4__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8972CDB20ABFBE4_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E8972CDB20ABFBE4_METHOD_1_57D80B372834C5D1_OFFSET))(this, a1);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E8972CDB20ABFBE4_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8972CDB20ABFBE4_METHOD_1_C2245EC58D417830_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_4AB9012B5D01108B()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8972CDB20ABFBE4_METHOD_1_4AB9012B5D01108B_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8972CDB20ABFBE4_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8972CDB20ABFBE4_METHOD_1_F10A0D072D26C4BF_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8972CDB20ABFBE4_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}
};
