#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_127EAB4936C75FCC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0B4A9CBAA4CAEC69;
namespace RPG::Client { class MapNpcDef; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_5C34FDAF2CB731CC_METHOD_1_A9E32200961C2120_OFFSET UNITYSDK_OFFSET(0x1A485FC0)
#define CLASS_1_5C34FDAF2CB731CC_METHOD_1_DA7DFC1C4D0CC1B1_OFFSET UNITYSDK_OFFSET(0x1A485EE0)
#define CLASS_1_5C34FDAF2CB731CC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A485EB0)

inline static constexpr unsigned int Class_1_5C34FDAF2CB731CC_TypeDefinitionIndex = 60986;

class Class_1_5C34FDAF2CB731CC : public ::System::Object
{
public:
	::Struct_2_127EAB4936C75FCC JINLCKIALKC; // 0x10
	::Class_1_0B4A9CBAA4CAEC69* CGPOGMMADPN; // 0x20
	::UnityEngine::Quaternion NCMEPPHLGEG; // 0x28
	::UnityEngine::Vector3 MIFKHBDOGLN; // 0x38

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::Struct_2_127EAB4936C75FCC a3, ::Class_1_0B4A9CBAA4CAEC69* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Struct_2_127EAB4936C75FCC, ::Class_1_0B4A9CBAA4CAEC69*))((::PBYTE)hIl2Cpp + CLASS_1_5C34FDAF2CB731CC__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_DA7DFC1C4D0CC1B1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_5C34FDAF2CB731CC_METHOD_1_DA7DFC1C4D0CC1B1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A9E32200961C2120(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_1_5C34FDAF2CB731CC_METHOD_1_A9E32200961C2120_OFFSET))(this, a1);
	}
};
