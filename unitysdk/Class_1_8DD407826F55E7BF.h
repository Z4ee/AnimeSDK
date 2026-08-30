#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_1_8DD407826F55E7BF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD13A30)
#define CLASS_1_8DD407826F55E7BF_METHOD_1_E1CE0A1C7957700D_OFFSET UNITYSDK_OFFSET(0xBD13AA0)
#define CLASS_1_8DD407826F55E7BF_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xBD13C00)
#define CLASS_1_8DD407826F55E7BF__CTOR_OFFSET UNITYSDK_OFFSET(0xBD138D0)

inline static constexpr unsigned int Class_1_8DD407826F55E7BF_TypeDefinitionIndex = 60315;

class Class_1_8DD407826F55E7BF : public ::System::Object
{
public:
	::RPG::GameCore::TransformComponent* PDGDCPLEPFC; // 0x10
	::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x18
	::System::Single EJGDNPHNEHG; // 0x20
	::System::Single GJMAJEOIEOP; // 0x24
	::System::Single KBDPMBDJIOF; // 0x28
	::System::Boolean PIPLLENMLIM; // 0x2C
	::UnityEngine::Vector3 BGNACBGBMHG; // 0x30
	::UnityEngine::Vector3 PDJBFBPEHFE; // 0x3C

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8DD407826F55E7BF__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DD407826F55E7BF_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E1CE0A1C7957700D(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8DD407826F55E7BF_METHOD_1_E1CE0A1C7957700D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DD407826F55E7BF_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
