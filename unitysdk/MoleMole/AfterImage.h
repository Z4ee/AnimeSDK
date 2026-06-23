#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AfterImage_MaterialProperty.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_AFTERIMAGE_ACTIVATEAFTERIMAGE_OFFSET UNITYSDK_OFFSET(0x13FEA170)
#define MOLEMOLE_AFTERIMAGE_AWAKE_OFFSET UNITYSDK_OFFSET(0x13FE7C10)
#define MOLEMOLE_AFTERIMAGE_DEACTIVATEAFTERIMAGE_OFFSET UNITYSDK_OFFSET(0x13FEAD80)
#define MOLEMOLE_AFTERIMAGE_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x13FE8500)
#define MOLEMOLE_AFTERIMAGE_GENERALTRANSDICT_OFFSET UNITYSDK_OFFSET(0x13FE7C60)
#define MOLEMOLE_AFTERIMAGE_GET_IMAGELIFETIME_OFFSET UNITYSDK_OFFSET(0x13FE7BB0)
#define MOLEMOLE_AFTERIMAGE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x13FE9350)
#define MOLEMOLE_AFTERIMAGE_METHOD_5_0817012C9B9D8577_OFFSET UNITYSDK_OFFSET(0x13FEB0E0)
#define MOLEMOLE_AFTERIMAGE_METHOD_5_1D37DB4BA1163395_OFFSET UNITYSDK_OFFSET(0x13FEAE80)
#define MOLEMOLE_AFTERIMAGE_METHOD_5_32A907AC3D1A4D45_OFFSET UNITYSDK_OFFSET(0x13FE9520)
#define MOLEMOLE_AFTERIMAGE_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x13FE94C0)
#define MOLEMOLE_AFTERIMAGE_METHOD_5_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x13FE8550)
#define MOLEMOLE_AFTERIMAGE_METHOD_5_CD28994AFE636FFF_OFFSET UNITYSDK_OFFSET(0x13FEA3C0)
#define MOLEMOLE_AFTERIMAGE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x13FE84A0)
#define MOLEMOLE_AFTERIMAGE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x13FE8450)
#define MOLEMOLE_AFTERIMAGE_SET_IMAGELIFETIME_OFFSET UNITYSDK_OFFSET(0x13FE7C00)
#define MOLEMOLE_AFTERIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x13FEADD0)

namespace MoleMole
{
	inline static constexpr unsigned int AfterImage_TypeDefinitionIndex = 54411;

	class AfterImage : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Int32 ImageLimit = 0x14; // 0x0
		::System::Boolean UseLowPrefab; // 0x18
		::UnityEngine::Animator* TargetAnimator; // 0x20
		::UnityEngine::Transform* TargetRoot; // 0x28
		::UnityEngine::Transform* BoneToot; // 0x30
		::System::Boolean useTargetPos; // 0x38
		::System::Boolean useFrameMode; // 0x39
		::System::Single timeLimit; // 0x3C
		::System::Int32 imageNumber; // 0x40
		::System::Single Field_5_9; // 0x44
		::Il2CppArray<::MoleMole::AfterImage_MaterialProperty>* materialProperty; // 0x48
		::System::Boolean useFixedMaterial; // 0x50
		::UnityEngine::Material* fixedMaterial; // 0x58
		::System::Boolean use2ndFixedMaterial; // 0x60
		::UnityEngine::Material* fixedMaterial2nd; // 0x68
		::System::Boolean SimpleMode; // 0x70
		::System::Boolean Acitveed; // 0x71
		::System::Single Field_5_17; // 0x74
		::System::Single Field_5_18; // 0x78
		::Il2CppArray<::System::Single>* Field_5_19; // 0x80
		::System::Int32 Field_5_20; // 0x88
		::System::Int32 Field_5_21; // 0x8C
		::System::Int32 Field_5_22; // 0x90
		::Il2CppArray<::UnityEngine::Mesh*>* Field_5_23; // 0x98
		::Il2CppArray<::UnityEngine::Mesh*>* Field_5_24; // 0xA0
		::Il2CppArray<::Il2CppArray<::UnityEngine::Material*>*>* Field_5_25; // 0xA8
		::Il2CppArray<::UnityEngine::Matrix4x4>* Field_5_26; // 0xB0
		::Il2CppArray<::UnityEngine::Transform*>* Field_5_27; // 0xB8
		::Il2CppArray<::UnityEngine::Vector3>* Field_5_28; // 0xC0
		::System::Boolean Field_5_29; // 0xC8
		::UnityEngine::Color Field_5_30; // 0xCC
		::UnityEngine::MaterialPropertyBlock* Field_5_31; // 0xE0
		::Il2CppArray<::UnityEngine::Matrix4x4>* Field_5_32; // 0xE8
		::UnityEngine::Vector3 Field_5_33; // 0xF0
		::Il2CppArray<::UnityEngine::MeshFilter*>* Field_5_34; // 0x100
		::Il2CppArray<::UnityEngine::SkinnedMeshRenderer*>* Field_5_35; // 0x108
		::System::Boolean Field_5_36; // 0x110
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::UnityEngine::Transform*>* Field_5_37; // 0x118
		::UnityEngine::Transform* Field_5_38; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE__CTOR_OFFSET))(this);
		}

		::System::Single get_ImageLifeTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE_GET_IMAGELIFETIME_OFFSET))(this);
		}

		::System::Void set_ImageLifeTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE_SET_IMAGELIFETIME_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE_AWAKE_OFFSET))(this);
		}

		::System::Void GeneralTransDict(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE_GENERALTRANSDICT_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE_ONDISABLE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void ActivateAfterImage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE_ACTIVATEAFTERIMAGE_OFFSET))(this, a1);
		}

		::System::Void DeactivateAfterImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE_DEACTIVATEAFTERIMAGE_OFFSET))(this);
		}

		::UnityEngine::Material* Method_5_1D37DB4BA1163395()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE_METHOD_5_1D37DB4BA1163395_OFFSET))(this);
		}

		::System::Void Method_5_32A907AC3D1A4D45(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE_METHOD_5_32A907AC3D1A4D45_OFFSET))(this, a1);
		}

		::System::Void Method_5_96189EDEF38976A6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE_METHOD_5_96189EDEF38976A6_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_5_CD28994AFE636FFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE_METHOD_5_CD28994AFE636FFF_OFFSET))(this);
		}

		::System::Boolean Method_5_0817012C9B9D8577()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGE_METHOD_5_0817012C9B9D8577_OFFSET))(this);
		}
	};
}
