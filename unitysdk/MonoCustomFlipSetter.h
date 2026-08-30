#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }

#define MONOCUSTOMFLIPSETTER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBBC30A0)
#define MONOCUSTOMFLIPSETTER__CTOR_OFFSET UNITYSDK_OFFSET(0xBBC31F0)

inline static constexpr unsigned int MonoCustomFlipSetter_TypeDefinitionIndex = 47897;

class MonoCustomFlipSetter : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Material* targetMaterial; // 0x18
	::UnityEngine::Vector4 NNKPFDOONPM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMFLIPSETTER__CTOR_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMFLIPSETTER_LATEUPDATE_OFFSET))(this);
	}
};
