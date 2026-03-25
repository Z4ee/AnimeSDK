#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CelestialBodyType.h"
#include "unitysdk/CelestialShadowProxy.h"
#include "unitysdk/RPG/Client/CelestialRenderer.h"

class CelestialBodyData;
class Class_1_C7C4EDD02A4426B2;
class Class_1_C7C4EDD02A4426B2_Class_1_B96114C165E9AA6B;
class OrbitData;
namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_APPLY_OFFSET UNITYSDK_OFFSET(0xFBC6A40)
#define ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_AWAKE_OFFSET UNITYSDK_OFFSET(0xFBC6F10)
#define ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0xFBC69A0)
#define ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_METHOD_6_3D4699CA181772DC_OFFSET UNITYSDK_OFFSET(0xFBC6500)
#define ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_METHOD_6_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xFBC6D20)
#define ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_REFRESHCELESTIAL_OFFSET UNITYSDK_OFFSET(0xFBC6230)
#define ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_SETOBSERVER_OFFSET UNITYSDK_OFFSET(0xFBC66F0)
#define ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_TICK_OFFSET UNITYSDK_OFFSET(0xFBC69B0)
#define ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_UPDATEFROMDATA_OFFSET UNITYSDK_OFFSET(0xFBC6320)
#define ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL__CCTOR_OFFSET UNITYSDK_OFFSET(0xFBC6F80)
#define ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL__CTOR_OFFSET UNITYSDK_OFFSET(0xFBC6F60)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int AtmosphereCelestial_TypeDefinitionIndex = 40047;

	class AtmosphereCelestial : public ::RPG::Client::CelestialRenderer
	{
	public:
		static ::System::Int32* StaticGet_Field_6_6()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AtmosphereCelestial_TypeDefinitionIndex)->GetStaticField(0x5220);
		}
		::System::String* Field_6_0; // 0x50
		::CelestialBodyType Field_6_1; // 0x58
		::CelestialBodyType celestialType; // 0x59
		::CelestialShadowProxy celestialShadowProxy; // 0x5C
		::System::Single viewSize; // 0x60
		::System::Boolean _IsVisible_k__BackingField; // 0x64
		::UnityEngine::MaterialPropertyBlock* Field_6_7; // 0x68
		::UnityEngine::Renderer* Field_6_8; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL__CCTOR_OFFSET))();
		}

		::System::Void RefreshCelestial(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_REFRESHCELESTIAL_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateFromData(::OrbitData* a1, ::CelestialBodyData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OrbitData*, ::CelestialBodyData*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_UPDATEFROMDATA_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_3D4699CA181772DC(::Class_1_C7C4EDD02A4426B2_Class_1_B96114C165E9AA6B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C7C4EDD02A4426B2_Class_1_B96114C165E9AA6B*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_METHOD_6_3D4699CA181772DC_OFFSET))(this, a1);
		}

		::System::Void SetObserver(::Class_1_C7C4EDD02A4426B2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C7C4EDD02A4426B2*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_SETOBSERVER_OFFSET))(this, a1);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::Void Tick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_TICK_OFFSET))(this);
		}

		::System::Void Apply(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_APPLY_OFFSET))(this, a1);
		}

		::System::Void Method_6_51CFFE2AF748ECD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_METHOD_6_51CFFE2AF748ECD7_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_AWAKE_OFFSET))(this);
		}
	};
}
