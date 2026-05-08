#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class NapLodController;
namespace UnityEngine { class Camera; }

#define NAPLODCONTROLLERGROUP_COOKDISTANCE_OFFSET UNITYSDK_OFFSET(0xEA6A400)
#define NAPLODCONTROLLERGROUP_GET_SIZE_OFFSET UNITYSDK_OFFSET(0xEA69780)
#define NAPLODCONTROLLERGROUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xEA69920)
#define NAPLODCONTROLLERGROUP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xEA69400)
#define NAPLODCONTROLLERGROUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0xEA69140)
#define NAPLODCONTROLLERGROUP_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xEA6A5E0)
#define NAPLODCONTROLLERGROUP_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0xEA696C0)
#define NAPLODCONTROLLERGROUP_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0xEA69720)
#define NAPLODCONTROLLERGROUP_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0xEA694C0)
#define NAPLODCONTROLLERGROUP_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0xEA69200)
#define NAPLODCONTROLLERGROUP_SETLODOFFSET_OFFSET UNITYSDK_OFFSET(0xEA6ABE0)
#define NAPLODCONTROLLERGROUP_START_OFFSET UNITYSDK_OFFSET(0xEA6A590)
#define NAPLODCONTROLLERGROUP__CCTOR_OFFSET UNITYSDK_OFFSET(0xEA6AE80)
#define NAPLODCONTROLLERGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xEA6ADD0)

inline static constexpr unsigned int NapLodControllerGroup_TypeDefinitionIndex = 42487;

class NapLodControllerGroup : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Boolean* StaticGet_gEnableDistance()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapLodControllerGroup_TypeDefinitionIndex)->GetStaticField(0xE7B0);
	}
	::Il2CppArray<::NapLodController*>* LodControllers; // 0x18
	::System::Boolean EnableDistance; // 0x20
	::Il2CppArray<::System::Single>* LodScreenRatios; // 0x28
	::Il2CppArray<::System::Single>* MaxDistances; // 0x30
	::UnityEngine::Vector3 BoundsExtents; // 0x38
	::UnityEngine::Camera* mCamera; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLERGROUP__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPLODCONTROLLERGROUP__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLERGROUP_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLERGROUP_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnLightweightActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLERGROUP_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
	}

	::System::Void OnLightweightDeactive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLERGROUP_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}

	::System::Single get_Size()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLERGROUP_GET_SIZE_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLERGROUP_INITIALIZE_OFFSET))(this);
	}

	::System::Boolean CookDistance()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLERGROUP_COOKDISTANCE_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLERGROUP_START_OFFSET))(this);
	}

	::System::Void OnRealEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLERGROUP_ONREALENABLE_OFFSET))(this);
	}

	::System::Void OnRealDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLERGROUP_ONREALDISABLE_OFFSET))(this);
	}

	::System::Void OnLateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODCONTROLLERGROUP_ONLATEUPDATE_OFFSET))(this);
	}

	::System::Void SetLodOffset(::System::Int32 offset)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPLODCONTROLLERGROUP_SETLODOFFSET_OFFSET))(this, offset);
	}
};
