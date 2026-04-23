#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_127EAB4936C75FCC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0B4A9CBAA4CAEC69;
namespace RPG::Client { class MapNpcDef; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_5C34FDAF2CB731CC_METHOD_1_4D74222C745CC12F_OFFSET UNITYSDK_OFFSET(0x902EA70)
#define CLASS_1_5C34FDAF2CB731CC_METHOD_1_F3F21020EB2FF614_OFFSET UNITYSDK_OFFSET(0x902EBB0)
#define CLASS_1_5C34FDAF2CB731CC__CTOR_OFFSET UNITYSDK_OFFSET(0x902EA40)

inline static constexpr unsigned int Class_1_5C34FDAF2CB731CC_TypeDefinitionIndex = 56150;

class Class_1_5C34FDAF2CB731CC : public ::System::Object
{
public:
	::Class_1_0B4A9CBAA4CAEC69* Field_1_3; // 0x10
	::Struct_2_127EAB4936C75FCC Field_1_2; // 0x18
	::UnityEngine::Vector3 Field_1_0; // 0x28
	::UnityEngine::Quaternion Field_1_1; // 0x34

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::Struct_2_127EAB4936C75FCC a3, ::Class_1_0B4A9CBAA4CAEC69* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Struct_2_127EAB4936C75FCC, ::Class_1_0B4A9CBAA4CAEC69*))((::PBYTE)hIl2Cpp + CLASS_1_5C34FDAF2CB731CC__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_4D74222C745CC12F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_5C34FDAF2CB731CC_METHOD_1_4D74222C745CC12F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F3F21020EB2FF614(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_1_5C34FDAF2CB731CC_METHOD_1_F3F21020EB2FF614_OFFSET))(this, a1);
	}
};
