#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define MARBLESUBSEALROTATOR_CLEAR_OFFSET UNITYSDK_OFFSET(0xA847540)
#define MARBLESUBSEALROTATOR_INIT_OFFSET UNITYSDK_OFFSET(0xA846D90)
#define MARBLESUBSEALROTATOR_METHOD_5_A5ADA4706DA592FA_OFFSET UNITYSDK_OFFSET(0xA846F30)
#define MARBLESUBSEALROTATOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA847660)
#define MARBLESUBSEALROTATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA847610)
#define MARBLESUBSEALROTATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0xA847590)
#define MARBLESUBSEALROTATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA8476B0)

inline static constexpr unsigned int MarbleSubSealRotator_TypeDefinitionIndex = 44478;

class MarbleSubSealRotator : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Transform* centerObject; // 0x18
	::System::Single rotationSpeed; // 0x20
	::System::Boolean clockwise; // 0x24
	::UnityEngine::Transform* rotateTarget; // 0x28
	::UnityEngine::Quaternion Field_5_4; // 0x30
	::UnityEngine::Vector3 Field_5_5; // 0x40
	::System::Boolean Field_5_6; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLESUBSEALROTATOR__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLESUBSEALROTATOR_INIT_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLESUBSEALROTATOR_CLEAR_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLESUBSEALROTATOR_UPDATE_OFFSET))(this);
	}

	::System::Void Method_5_A5ADA4706DA592FA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MARBLESUBSEALROTATOR_METHOD_5_A5ADA4706DA592FA_OFFSET))(this, a1);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLESUBSEALROTATOR_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLESUBSEALROTATOR_ONDISABLE_OFFSET))(this);
	}
};
