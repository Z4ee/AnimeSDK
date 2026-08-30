#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class BloodFlowDrawInstance;
class Class_2_C7CF51A975AD5398;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }

#define BLOODFLOWMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A07FFA0)
#define BLOODFLOWMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A080080)
#define BLOODFLOWMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A080030)
#define BLOODFLOWMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A080130)

inline static constexpr unsigned int BloodFlowManager_TypeDefinitionIndex = 47911;

class BloodFlowManager : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Mesh* DrawMesh; // 0x18
	::UnityEngine::Material* DrawMat; // 0x20
	::System::Single Timer; // 0x28
	::System::Single PerElementTimeOffset; // 0x2C
	::Il2CppArray<::BloodFlowDrawInstance*>* BloodFlowDrawInstances; // 0x30
	::UnityEngine::MaterialPropertyBlock* AllMBs; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* AllMatrixs; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::Vector4>* PerInsProperties; // 0x48
	::UnityEngine::Vector3 BoundSize; // 0x50
	::Class_2_C7CF51A975AD5398* KADDKEGNCHE; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOODFLOWMANAGER__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOODFLOWMANAGER_AWAKE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOODFLOWMANAGER_UPDATE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOODFLOWMANAGER_ONDESTROY_OFFSET))(this);
	}
};
