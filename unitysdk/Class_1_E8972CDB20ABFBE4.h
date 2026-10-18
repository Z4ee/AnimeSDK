#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_1_E8972CDB20ABFBE4_CLEAR_OFFSET UNITYSDK_OFFSET(0xB5F5C60)
#define CLASS_1_E8972CDB20ABFBE4_METHOD_1_4AB9012B5D01108B_OFFSET UNITYSDK_OFFSET(0xB5F60B0)
#define CLASS_1_E8972CDB20ABFBE4_METHOD_1_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0xB5F5CB0)
#define CLASS_1_E8972CDB20ABFBE4_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xB5F5DC0)
#define CLASS_1_E8972CDB20ABFBE4_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xB5F61C0)
#define CLASS_1_E8972CDB20ABFBE4_METHOD_1_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0xB5F5FF0)
#define CLASS_1_E8972CDB20ABFBE4_METHOD_1_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0xB5F6210)
#define CLASS_1_E8972CDB20ABFBE4_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0xB5F5D30)
#define CLASS_1_E8972CDB20ABFBE4__CTOR_OFFSET UNITYSDK_OFFSET(0xB5F6280)

inline static constexpr unsigned int Class_1_E8972CDB20ABFBE4_TypeDefinitionIndex = 73249;

class Class_1_E8972CDB20ABFBE4 : public ::System::Object
{
public:
	::UnityEngine::Collider* CLFOJDPNEPD; // 0x10
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x18
	::RPG::Client::BaseShaderPropertyTransition* EMIGJFKIAEF; // 0x20
	::UnityEngine::Transform* PDJGEDNLBKJ; // 0x28
	::System::Boolean DMODDCDAFJJ; // 0x30
	::System::Boolean AKBPNMEFGAO; // 0x31
	::UnityEngine::Vector3 KFJPKPKPEOJ; // 0x34
	::System::Single COAELIHGAHH; // 0x40
	::UnityEngine::Vector3 MEEAANFOAAM; // 0x44

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
