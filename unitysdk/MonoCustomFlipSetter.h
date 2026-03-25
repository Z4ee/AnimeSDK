#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }

#define MONOCUSTOMFLIPSETTER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x88BC650)
#define MONOCUSTOMFLIPSETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x88BC7A0)

inline static constexpr unsigned int MonoCustomFlipSetter_TypeDefinitionIndex = 38301;

class MonoCustomFlipSetter : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Material* targetMaterial; // 0x18
	::UnityEngine::Vector4 Field_5_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMFLIPSETTER__CTOR_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMFLIPSETTER_LATEUPDATE_OFFSET))(this);
	}
};
