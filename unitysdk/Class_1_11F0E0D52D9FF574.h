#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SurfCameraContext.h"
#include "unitysdk/Struct_2_36EB6F1AC5D5C0B3.h"
#include "unitysdk/Struct_2_7E3479235D2579FF.h"
#include "unitysdk/Struct_2_AACEDD85A6FDFBD8.h"
#include "unitysdk/Struct_2_CD2E1A9CC3537EBD.h"
#include "unitysdk/Struct_2_F92440AF7804F46F.h"
#include "unitysdk/System/Object.h"

class Class_1_C5F6CE4894BCA161;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigSurfVehicle; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_11F0E0D52D9FF574_METHOD_1_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0x17042280)
#define CLASS_1_11F0E0D52D9FF574__CTOR_OFFSET UNITYSDK_OFFSET(0x17042210)

inline static constexpr unsigned int Class_1_11F0E0D52D9FF574_TypeDefinitionIndex = 72064;

class Class_1_11F0E0D52D9FF574 : public ::System::Object
{
public:
	::Class_1_C5F6CE4894BCA161* Field_1_9; // 0x10
	::UnityEngine::GameObject* Field_1_1; // 0x18
	::MoleMole::Battle::Entity* Field_1_2; // 0x20
	::Struct_2_36EB6F1AC5D5C0B3 Field_1_6; // 0x28
	::Struct_2_CD2E1A9CC3537EBD Field_1_5; // 0x138
	::Struct_2_7E3479235D2579FF Field_1_4; // 0x168
	::MoleMole::Config::ConfigSurfVehicle* Field_1_0; // 0x208
	::MoleMole::SurfCameraContext Field_1_11; // 0x210
	::Struct_2_F92440AF7804F46F Field_1_10; // 0x244
	::Struct_2_AACEDD85A6FDFBD8 Field_1_7; // 0x254

	::System::Void _ctor(::MoleMole::Battle::Entity* a1, ::UnityEngine::GameObject* a2, ::MoleMole::Config::ConfigSurfVehicle* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::GameObject*, ::MoleMole::Config::ConfigSurfVehicle*))((::PBYTE)hIl2Cpp + CLASS_1_11F0E0D52D9FF574__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11F0E0D52D9FF574_METHOD_1_64501B5CB67A94C3_OFFSET))(this);
	}
};
