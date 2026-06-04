#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CelestialBodyType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CelestialBodyData;
class Class_1_535E4088B549C341;
class Class_1_C7C4EDD02A4426B2;
class OrbitData;
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CLIENT_CELESTIALRENDERER_BINDTOSOLARSYSTEM_OFFSET UNITYSDK_OFFSET(0xB4BF4A0)
#define RPG_CLIENT_CELESTIALRENDERER_GET_BODYTYPE_OFFSET UNITYSDK_OFFSET(0xB4BF480)
#define RPG_CLIENT_CELESTIALRENDERER_GET_SOLARSYSTEM_OFFSET UNITYSDK_OFFSET(0xB4BF460)
#define RPG_CLIENT_CELESTIALRENDERER_SET_BODYTYPE_OFFSET UNITYSDK_OFFSET(0xB4BF490)
#define RPG_CLIENT_CELESTIALRENDERER_SET_SOLARSYSTEM_OFFSET UNITYSDK_OFFSET(0xB4BF470)
#define RPG_CLIENT_CELESTIALRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0xB4BF5F0)

namespace RPG::Client
{
	inline static constexpr unsigned int CelestialRenderer_TypeDefinitionIndex = 65247;

	class CelestialRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 Field_5_0; // 0x18
		::Class_1_C7C4EDD02A4426B2* Field_5_1; // 0x28
		::Class_1_535E4088B549C341* _SolarSystem_k__BackingField; // 0x30
		::CelestialBodyType _BodyType_k__BackingField; // 0x38
		::OrbitData* Field_5_4; // 0x40
		::CelestialBodyData* Field_5_5; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CELESTIALRENDERER__CTOR_OFFSET))(this);
		}

		::Class_1_535E4088B549C341* get_SolarSystem()
		{
			return ((::Class_1_535E4088B549C341*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CELESTIALRENDERER_GET_SOLARSYSTEM_OFFSET))(this);
		}

		::System::Void set_SolarSystem(::Class_1_535E4088B549C341* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_535E4088B549C341*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CELESTIALRENDERER_SET_SOLARSYSTEM_OFFSET))(this, a1);
		}

		::CelestialBodyType get_BodyType()
		{
			return ((::CelestialBodyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CELESTIALRENDERER_GET_BODYTYPE_OFFSET))(this);
		}

		::System::Void set_BodyType(::CelestialBodyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::CelestialBodyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CELESTIALRENDERER_SET_BODYTYPE_OFFSET))(this, a1);
		}

		::System::Void BindToSolarSystem(::Class_1_535E4088B549C341* a1, ::CelestialBodyType a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_535E4088B549C341*, ::CelestialBodyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CELESTIALRENDERER_BINDTOSOLARSYSTEM_OFFSET))(this, a1, a2);
		}
	};
}
