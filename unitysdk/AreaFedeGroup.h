#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AreaFedeGroup_AreaFadeMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Material; }

#define AREAFEDEGROUP_GET_FADEMODE_OFFSET UNITYSDK_OFFSET(0x121132F0)
#define AREAFEDEGROUP_METHOD_5_1F3793A40D6D0F7F_OFFSET UNITYSDK_OFFSET(0x121134F0)
#define AREAFEDEGROUP_METHOD_5_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x12113B20)
#define AREAFEDEGROUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x121134A0)
#define AREAFEDEGROUP_SET_FADEMODE_OFFSET UNITYSDK_OFFSET(0x12113300)
#define AREAFEDEGROUP_UPDATE_OFFSET UNITYSDK_OFFSET(0x12113AD0)
#define AREAFEDEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x12113F90)

inline static constexpr unsigned int AreaFedeGroup_TypeDefinitionIndex = 44123;

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

	::System::Void Method_5_1F3793A40D6D0F7F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AREAFEDEGROUP_METHOD_5_1F3793A40D6D0F7F_OFFSET))(this);
	}

	::System::Void Method_5_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AREAFEDEGROUP_METHOD_5_3CCA0B8A31B650A8_OFFSET))(this);
	}
};
