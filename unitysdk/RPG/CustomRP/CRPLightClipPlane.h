#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/ClipPlaneType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }

#define RPG_CUSTOMRP_CRPLIGHTCLIPPLANE_GET_LIGHT_OFFSET UNITYSDK_OFFSET(0x18114250)
#define RPG_CUSTOMRP_CRPLIGHTCLIPPLANE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18113AF0)
#define RPG_CUSTOMRP_CRPLIGHTCLIPPLANE_SET_LIGHT_OFFSET UNITYSDK_OFFSET(0x18114260)
#define RPG_CUSTOMRP_CRPLIGHTCLIPPLANE_UPDATELIGHTCLIPPLANES_OFFSET UNITYSDK_OFFSET(0x18113B00)
#define RPG_CUSTOMRP_CRPLIGHTCLIPPLANE__CTOR_OFFSET UNITYSDK_OFFSET(0x18114270)
#define RPG_CUSTOMRP_CRPLIGHTCLIPPLANE__SETCLIPPLANELOCALDATA_OFFSET UNITYSDK_OFFSET(0x18113DC0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPLightClipPlane_TypeDefinitionIndex = 35064;

	class CRPLightClipPlane : public ::System::Object
	{
	public:
		::System::Int32 numLightClipPlane; // 0x10
		::UnityEngine::GameObject* clipPlane0; // 0x18
		::UnityEngine::GameObject* clipPlane1; // 0x20
		::UnityEngine::GameObject* clipPlane2; // 0x28
		::UnityEngine::GameObject* clipPlane3; // 0x30
		::Il2CppArray<::UnityEngine::Vector3>* clipPlaneLocalPos; // 0x38
		::Il2CppArray<::UnityEngine::Quaternion>* clipPlaneLocalRot; // 0x40
		::System::Single clipPlaneFadeDistance0; // 0x48
		::System::Single clipPlaneFadeDistance1; // 0x4C
		::System::Single clipPlaneFadeDistance2; // 0x50
		::System::Single clipPlaneFadeDistance3; // 0x54
		::UnityEngine::Light* _Light; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPLIGHTCLIPPLANE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPLIGHTCLIPPLANE_ONENABLE_OFFSET))(this);
		}

		::System::Void UpdateLightClipPlanes(::RPG::CustomRP::ClipPlaneType clipPlaneType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::ClipPlaneType))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPLIGHTCLIPPLANE_UPDATELIGHTCLIPPLANES_OFFSET))(this, clipPlaneType);
		}

		::System::Void _SetClipPlaneLocalData(::System::Int32 index, ::UnityEngine::GameObject*& go)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPLIGHTCLIPPLANE__SETCLIPPLANELOCALDATA_OFFSET))(this, index, go);
		}

		::UnityEngine::Light* get_Light()
		{
			return ((::UnityEngine::Light*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPLIGHTCLIPPLANE_GET_LIGHT_OFFSET))(this);
		}

		::System::Void set_Light(::UnityEngine::Light* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPLIGHTCLIPPLANE_SET_LIGHT_OFFSET))(this, value);
		}
	};
}
