#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

#define MONOGALGAME3D_AWAKE_OFFSET UNITYSDK_OFFSET(0xEBDD3C0)
#define MONOGALGAME3D_GET_Z_OFFSET UNITYSDK_OFFSET(0xEBDD3B0)
#define MONOGALGAME3D_INPUTTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0xEBDD7B0)
#define MONOGALGAME3D_SET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0xEBDD310)
#define MONOGALGAME3D_START_OFFSET UNITYSDK_OFFSET(0xEBDD400)
#define MONOGALGAME3D_UPDATE_OFFSET UNITYSDK_OFFSET(0xEBDD490)
#define MONOGALGAME3D__CTOR_OFFSET UNITYSDK_OFFSET(0xEBDD800)

inline static constexpr unsigned int MonoGalGame3D_TypeDefinitionIndex = 52233;

class MonoGalGame3D : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single m_RollXMaxAngle; // 0x18
	::System::Single m_RollYMaxAngle; // 0x1C
	::UnityEngine::Vector2 m_MousePosition; // 0x20
	::System::Single m_Z; // 0x28
	::System::Single m_Frequency; // 0x2C
	::System::Single m_Amplitude; // 0x30
	::UnityEngine::RectTransform* m_RectTransform; // 0x38
	::UnityEngine::Vector2 _targetPos; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOGALGAME3D__CTOR_OFFSET))(this);
	}

	::System::Void set_MousePosition(::UnityEngine::Vector2 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MONOGALGAME3D_SET_MOUSEPOSITION_OFFSET))(this, value);
	}

	::System::Single get_Z()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOGALGAME3D_GET_Z_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOGALGAME3D_AWAKE_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOGALGAME3D_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOGALGAME3D_UPDATE_OFFSET))(this);
	}

	::System::Void InputTargetPosition(::UnityEngine::Vector2 pos)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MONOGALGAME3D_INPUTTARGETPOSITION_OFFSET))(this, pos);
	}
};
