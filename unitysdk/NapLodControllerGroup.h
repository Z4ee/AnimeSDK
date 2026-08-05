#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class NapLodController;
namespace UnityEngine { class Camera; }

#define NAPLODCONTROLLERGROUP_COOKDISTANCE_OFFSET UNITYSDK_OFFSET(0x954BE00)
#define NAPLODCONTROLLERGROUP_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x954B180)
#define NAPLODCONTROLLERGROUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x954B320)
#define NAPLODCONTROLLERGROUP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x954AD70)
#define NAPLODCONTROLLERGROUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x954AA20)
#define NAPLODCONTROLLERGROUP_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x954C090)
#define NAPLODCONTROLLERGROUP_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x954B0C0)
#define NAPLODCONTROLLERGROUP_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x954B120)
#define NAPLODCONTROLLERGROUP_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x954AE30)
#define NAPLODCONTROLLERGROUP_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x954AAE0)
#define NAPLODCONTROLLERGROUP_SETLODOFFSET_OFFSET UNITYSDK_OFFSET(0x954C680)
#define NAPLODCONTROLLERGROUP_START_OFFSET UNITYSDK_OFFSET(0x954C040)
#define NAPLODCONTROLLERGROUP__CCTOR_OFFSET UNITYSDK_OFFSET(0x954C920)
#define NAPLODCONTROLLERGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x954C870)

inline static constexpr unsigned int NapLodControllerGroup_TypeDefinitionIndex = 73736;

class NapLodControllerGroup : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Boolean* StaticGet_gEnableDistance()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapLodControllerGroup_TypeDefinitionIndex)->GetStaticField(0x11E10);
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
