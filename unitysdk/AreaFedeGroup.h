#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AreaFedeGroup_AreaFadeMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Material; }

#define AREAFEDEGROUP_GET_FADEMODE_OFFSET UNITYSDK_OFFSET(0x158D42E0)
#define AREAFEDEGROUP_METHOD_5_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x158D4A10)
#define AREAFEDEGROUP_METHOD_5_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x158D44F0)
#define AREAFEDEGROUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x158D44A0)
#define AREAFEDEGROUP_SET_FADEMODE_OFFSET UNITYSDK_OFFSET(0x158D42F0)
#define AREAFEDEGROUP_UPDATE_OFFSET UNITYSDK_OFFSET(0x158D49C0)
#define AREAFEDEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x158D4ED0)

inline static constexpr unsigned int AreaFedeGroup_TypeDefinitionIndex = 45549;

class AreaFedeGroup : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Light* ControllerLight; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_5_1; // 0x20
	::System::Int32 Field_5_2; // 0x28
	::System::Int32 Field_5_3; // 0x2C
	::System::Int32 Field_5_4; // 0x30
	::AreaFedeGroup_AreaFadeMode _FadeMode; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AREAFEDEGROUP__CTOR_OFFSET))(this);
	}

	::AreaFedeGroup_AreaFadeMode get_FadeMode()
	{
		return ((::AreaFedeGroup_AreaFadeMode(*)(::PVOID))((::PBYTE)hIl2Cpp + AREAFEDEGROUP_GET_FADEMODE_OFFSET))(this);
	}

	::System::Void set_FadeMode(::AreaFedeGroup_AreaFadeMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::AreaFedeGroup_AreaFadeMode))((::PBYTE)hIl2Cpp + AREAFEDEGROUP_SET_FADEMODE_OFFSET))(this, a1);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AREAFEDEGROUP_ONENABLE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AREAFEDEGROUP_UPDATE_OFFSET))(this);
	}

	::System::Void Method_5_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AREAFEDEGROUP_METHOD_5_6A0EBEECA245A27C_OFFSET))(this);
	}

	::System::Void Method_5_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AREAFEDEGROUP_METHOD_5_367B9590522079D1_OFFSET))(this);
	}
};
