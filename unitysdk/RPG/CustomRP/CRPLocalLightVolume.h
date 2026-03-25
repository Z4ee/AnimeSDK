#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/AABB.h"
#include "unitysdk/RPG/CustomRP/POSMType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rendering/CRPLightInfoCommon.h"
#include "unitysdk/UnityEngine/Rendering/LightVolumeInfo.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::CustomRP { class POSMParams; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Transform; }

#define RPG_CUSTOMRP_CRPLOCALLIGHTVOLUME_CALCAABBAUTO_OFFSET UNITYSDK_OFFSET(0x16A72940)
#define RPG_CUSTOMRP_CRPLOCALLIGHTVOLUME_COPY_OFFSET UNITYSDK_OFFSET(0x16A727F0)
#define RPG_CUSTOMRP_CRPLOCALLIGHTVOLUME_GETWEIGHT_OFFSET UNITYSDK_OFFSET(0x16A72390)
#define RPG_CUSTOMRP_CRPLOCALLIGHTVOLUME_GET_POSMLIGHT_OFFSET UNITYSDK_OFFSET(0x16A72E30)
#define RPG_CUSTOMRP_CRPLOCALLIGHTVOLUME_GET_POSMPARAMS_OFFSET UNITYSDK_OFFSET(0x16A72E70)
#define RPG_CUSTOMRP_CRPLOCALLIGHTVOLUME_GET_POSMROTATION_OFFSET UNITYSDK_OFFSET(0x16A72EA0)
#define RPG_CUSTOMRP_CRPLOCALLIGHTVOLUME_GET_USEBOUND_OFFSET UNITYSDK_OFFSET(0x16A72E80)
#define RPG_CUSTOMRP_CRPLOCALLIGHTVOLUME_INTERSECTS_OFFSET UNITYSDK_OFFSET(0x16A722A0)
#define RPG_CUSTOMRP_CRPLOCALLIGHTVOLUME_ISINTERSECAABB_OFFSET UNITYSDK_OFFSET(0x16A719E0)
#define RPG_CUSTOMRP_CRPLOCALLIGHTVOLUME_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16A711A0)
#define RPG_CUSTOMRP_CRPLOCALLIGHTVOLUME_SET_POSMLIGHT_OFFSET UNITYSDK_OFFSET(0x16A72E40)
#define RPG_CUSTOMRP_CRPLOCALLIGHTVOLUME__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A72EE0)
#define RPG_CUSTOMRP_CRPLOCALLIGHTVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x16A72EB0)
#define RPG_CUSTOMRP_CRPLOCALLIGHTVOLUME__ISPOINTINBOUNDS_OFFSET UNITYSDK_OFFSET(0x16A721C0)
#define RPG_CUSTOMRP_CRPLOCALLIGHTVOLUME__UPDATEPOSMPARAMS_OFFSET UNITYSDK_OFFSET(0x16A711B0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPLocalLightVolume_TypeDefinitionIndex = 29300;

	class CRPLocalLightVolume : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3* StaticGet_temp()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(CRPLocalLightVolume_TypeDefinitionIndex)->GetStaticField(0xFB00);
		}
		::System::Boolean useBoundsRender; // 0x10
		::RPG::CustomRP::POSMType type; // 0x14
		::UnityEngine::Bounds _Bounds; // 0x18
		::UnityEngine::Quaternion _BoundsRotation; // 0x30
		::System::Boolean _OverrideBounds; // 0x40
		::UnityEngine::Vector3 offset; // 0x44
		::UnityEngine::Quaternion _Rot; // 0x50
		::UnityEngine::Light* _POSMLight; // 0x60
		::UnityEngine::Transform* _POSMTrans; // 0x68
		::RPG::CustomRP::POSMParams* _PosmParams; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPLOCALLIGHTVOLUME__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPLOCALLIGHTVOLUME__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPLOCALLIGHTVOLUME_ONENABLE_OFFSET))(this);
		}

		::System::Boolean IsIntersecAABB(::RPG::CustomRP::AABB& casterAABB)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::AABB&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPLOCALLIGHTVOLUME_ISINTERSECAABB_OFFSET))(this, casterAABB);
		}

		::System::Boolean Intersects(::UnityEngine::Vector3& pos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPLOCALLIGHTVOLUME_INTERSECTS_OFFSET))(this, pos);
		}

		::System::Single GetWeight(::UnityEngine::Vector3& location, ::System::Single radius)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPLOCALLIGHTVOLUME_GETWEIGHT_OFFSET))(this, location, radius);
		}

		::System::Void Copy(::UnityEngine::Rendering::LightVolumeInfo& lvi, ::UnityEngine::Rendering::CRPLightInfoCommon& lightInfo)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::LightVolumeInfo&, ::UnityEngine::Rendering::CRPLightInfoCommon&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPLOCALLIGHTVOLUME_COPY_OFFSET))(this, lvi, lightInfo);
		}

		::System::Void CalcAABBAuto(::UnityEngine::Light* light, ::UnityEngine::Transform* trans)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPLOCALLIGHTVOLUME_CALCAABBAUTO_OFFSET))(this, light, trans);
		}

		::UnityEngine::Light* get_POSMLight()
		{
			return ((::UnityEngine::Light*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPLOCALLIGHTVOLUME_GET_POSMLIGHT_OFFSET))(this);
		}

		::System::Void set_POSMLight(::UnityEngine::Light* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPLOCALLIGHTVOLUME_SET_POSMLIGHT_OFFSET))(this, value);
		}

		::RPG::CustomRP::POSMParams* get_posmParams()
		{
			return ((::RPG::CustomRP::POSMParams*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPLOCALLIGHTVOLUME_GET_POSMPARAMS_OFFSET))(this);
		}

		::System::Boolean get_UseBound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPLOCALLIGHTVOLUME_GET_USEBOUND_OFFSET))(this);
		}

		::System::Boolean _IsPointInBounds(::UnityEngine::Vector3& worldPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPLOCALLIGHTVOLUME__ISPOINTINBOUNDS_OFFSET))(this, worldPos);
		}

		::System::Void _UpdatePosmParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPLOCALLIGHTVOLUME__UPDATEPOSMPARAMS_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_posmRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPLOCALLIGHTVOLUME_GET_POSMROTATION_OFFSET))(this);
		}
	};
}
