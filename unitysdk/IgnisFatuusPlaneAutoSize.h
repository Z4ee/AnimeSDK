#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CharacterSize.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }

#define IGNISFATUUSPLANEAUTOSIZE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x101C2C50)
#define IGNISFATUUSPLANEAUTOSIZE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x101C2D30)
#define IGNISFATUUSPLANEAUTOSIZE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x101C2D80)
#define IGNISFATUUSPLANEAUTOSIZE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x101C2670)
#define IGNISFATUUSPLANEAUTOSIZE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x101C2CB0)
#define IGNISFATUUSPLANEAUTOSIZE_SCALESIZE_OFFSET UNITYSDK_OFFSET(0x101C2880)
#define IGNISFATUUSPLANEAUTOSIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x101C2DD0)

inline static constexpr unsigned int IgnisFatuusPlaneAutoSize_TypeDefinitionIndex = 89028;

class IgnisFatuusPlaneAutoSize : public ::UnityEngine::MonoBehaviour
{
public:
	::MoleMole::Config::CharacterSize avatarSize; // 0x18
	::Il2CppArray<::System::Single>* planeSizeScale; // 0x20
	::MoleMole::Config::CharacterSize avatarSizePre; // 0x28
	::UnityEngine::MeshRenderer* planeRenderer; // 0x30
	::UnityEngine::MaterialPropertyBlock* propertyBlock; // 0x38
	::System::Int32 uvScalefromePlaneSize; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNISFATUUSPLANEAUTOSIZE__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNISFATUUSPLANEAUTOSIZE_ONENABLE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNISFATUUSPLANEAUTOSIZE_LATEUPDATE_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNISFATUUSPLANEAUTOSIZE_ONVALIDATE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNISFATUUSPLANEAUTOSIZE_ONDESTROY_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNISFATUUSPLANEAUTOSIZE_ONDISABLE_OFFSET))(this);
	}

	::System::Void ScaleSize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNISFATUUSPLANEAUTOSIZE_SCALESIZE_OFFSET))(this);
	}
};
