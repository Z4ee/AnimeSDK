#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define PAMUBANGBOOFACEEFFECTPLUGIN_APPLYOFFSETSCALETOBONE_OFFSET UNITYSDK_OFFSET(0x18786130)
#define PAMUBANGBOOFACEEFFECTPLUGIN_CACHEBONELOCALBASESIFNEEDED_OFFSET UNITYSDK_OFFSET(0x18784210)
#define PAMUBANGBOOFACEEFFECTPLUGIN_CENTERLOCALOFFSETTOPARENTLOCAL_OFFSET UNITYSDK_OFFSET(0x18785D30)
#define PAMUBANGBOOFACEEFFECTPLUGIN_GETEFFECTCAMERA_OFFSET UNITYSDK_OFFSET(0x18785610)
#define PAMUBANGBOOFACEEFFECTPLUGIN_GETSYMMETRYAXISOFFSET_OFFSET UNITYSDK_OFFSET(0x18785F80)
#define PAMUBANGBOOFACEEFFECTPLUGIN_GETWORLDAXISDIRECTION_OFFSET UNITYSDK_OFFSET(0x18785A30)
#define PAMUBANGBOOFACEEFFECTPLUGIN_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18784600)
#define PAMUBANGBOOFACEEFFECTPLUGIN_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x187855A0)
#define PAMUBANGBOOFACEEFFECTPLUGIN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x187854E0)
#define PAMUBANGBOOFACEEFFECTPLUGIN_ONENABLE_OFFSET UNITYSDK_OFFSET(0x187841C0)
#define PAMUBANGBOOFACEEFFECTPLUGIN_RESETBONEANDFLAG_OFFSET UNITYSDK_OFFSET(0x18785550)
#define PAMUBANGBOOFACEEFFECTPLUGIN_RESETOFFSETSCALETOBONE_OFFSET UNITYSDK_OFFSET(0x18786270)
#define PAMUBANGBOOFACEEFFECTPLUGIN_UPDATELEFTRIGHTFACEBONESBYCAMERAAXES_OFFSET UNITYSDK_OFFSET(0x18784650)
#define PAMUBANGBOOFACEEFFECTPLUGIN_UPDATESTENCILVALUE_OFFSET UNITYSDK_OFFSET(0x18784F90)
#define PAMUBANGBOOFACEEFFECTPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x18786840)
#define PAMUBANGBOOFACEEFFECTPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x187866D0)

inline static constexpr unsigned int PamuBangbooFaceEffectPlugin_TypeDefinitionIndex = 41824;

class PamuBangbooFaceEffectPlugin : public ::UnityEngine::MonoBehaviour
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_AxisDropListValue()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PamuBangbooFaceEffectPlugin_TypeDefinitionIndex)->GetStaticField(0x4DD60);
	}
	::UnityEngine::GameObject* centerBone; // 0x18
	::UnityEngine::GameObject* leftFaceEffectBone; // 0x20
	::UnityEngine::GameObject* rightFaceEffectBone; // 0x28
	::System::String* axisofSymmetry; // 0x30
	::System::String* axisofFrontBack; // 0x38
	::UnityEngine::Vector4 frontOffsetScale; // 0x40
	::UnityEngine::Vector4 sideOffsetScale; // 0x50
	::System::Boolean updateFaceBonesEveryFrame; // 0x60
	::UnityEngine::SkinnedMeshRenderer* faceEffectRenderer; // 0x68
	::UnityEngine::SkinnedMeshRenderer* faceRenderer; // 0x70
	::System::Int32 stencilMaskValue; // 0x78
	::System::Int32 faceSubMeshID; // 0x7C
	::UnityEngine::Vector3 _baseLeftLocalPos; // 0x80
	::UnityEngine::Vector3 _baseRightLocalPos; // 0x8C
	::UnityEngine::Vector3 _baseLeftLocalScale; // 0x98
	::UnityEngine::Vector3 _baseRightLocalScale; // 0xA4
	::System::Boolean _basesCached; // 0xB0
	::System::Int32 _stencilRef; // 0xB4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMUBANGBOOFACEEFFECTPLUGIN__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAMUBANGBOOFACEEFFECTPLUGIN__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMUBANGBOOFACEEFFECTPLUGIN_ONENABLE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMUBANGBOOFACEEFFECTPLUGIN_LATEUPDATE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMUBANGBOOFACEEFFECTPLUGIN_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMUBANGBOOFACEEFFECTPLUGIN_ONDESTROY_OFFSET))(this);
	}

	::System::Void UpdateLeftRightFaceBonesByCameraAxes()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMUBANGBOOFACEEFFECTPLUGIN_UPDATELEFTRIGHTFACEBONESBYCAMERAAXES_OFFSET))(this);
	}

	::UnityEngine::Vector3 CenterLocalOffsetToParentLocal(::UnityEngine::Transform* center, ::UnityEngine::Transform* targetParent, ::UnityEngine::Vector3 offsetCenterLocal)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PAMUBANGBOOFACEEFFECTPLUGIN_CENTERLOCALOFFSETTOPARENTLOCAL_OFFSET))(this, center, targetParent, offsetCenterLocal);
	}

	::UnityEngine::Camera* GetEffectCamera()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMUBANGBOOFACEEFFECTPLUGIN_GETEFFECTCAMERA_OFFSET))(this);
	}

	::System::Void CacheBoneLocalBasesIfNeeded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMUBANGBOOFACEEFFECTPLUGIN_CACHEBONELOCALBASESIFNEEDED_OFFSET))(this);
	}

	::System::Void ResetBoneAndFlag()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMUBANGBOOFACEEFFECTPLUGIN_RESETBONEANDFLAG_OFFSET))(this);
	}

	::System::Void ResetOffsetScaleToBone()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMUBANGBOOFACEEFFECTPLUGIN_RESETOFFSETSCALETOBONE_OFFSET))(this);
	}

	::System::Void ApplyOffsetScaleToBone(::UnityEngine::Transform* bone, ::UnityEngine::Vector3 baseLocalPos, ::UnityEngine::Vector3 baseLocalScale, ::UnityEngine::Vector3 offsetInParentLocal, ::System::Single uniformScaleMul)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + PAMUBANGBOOFACEEFFECTPLUGIN_APPLYOFFSETSCALETOBONE_OFFSET))(this, bone, baseLocalPos, baseLocalScale, offsetInParentLocal, uniformScaleMul);
	}

	::UnityEngine::Vector3 GetWorldAxisDirection(::UnityEngine::Transform* t, ::System::String* axis)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + PAMUBANGBOOFACEEFFECTPLUGIN_GETWORLDAXISDIRECTION_OFFSET))(this, t, axis);
	}

	::UnityEngine::Vector3 GetSymmetryAxisOffset(::UnityEngine::Vector3 offset, ::System::String* axis)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + PAMUBANGBOOFACEEFFECTPLUGIN_GETSYMMETRYAXISOFFSET_OFFSET))(this, offset, axis);
	}

	::System::Void UpdateStencilValue()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMUBANGBOOFACEEFFECTPLUGIN_UPDATESTENCILVALUE_OFFSET))(this);
	}
};
