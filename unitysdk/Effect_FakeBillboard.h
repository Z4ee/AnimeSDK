#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define EFFECT_FAKEBILLBOARD_ONENABLE_OFFSET UNITYSDK_OFFSET(0xF189580)
#define EFFECT_FAKEBILLBOARD_RESET_OFFSET UNITYSDK_OFFSET(0xF1891D0)
#define EFFECT_FAKEBILLBOARD_START_OFFSET UNITYSDK_OFFSET(0xF1895D0)
#define EFFECT_FAKEBILLBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xF189620)
#define EFFECT_FAKEBILLBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xF189BC0)

inline static constexpr unsigned int Effect_FakeBillboard_TypeDefinitionIndex = 45661;

class Effect_FakeBillboard : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Camera* LookAtCamera; // 0x18
	::System::Boolean LookAtMainCamera; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* BillboardGameObjects; // 0x28
	::UnityEngine::Vector3 Rotation; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_FAKEBILLBOARD__CTOR_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_FAKEBILLBOARD_RESET_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_FAKEBILLBOARD_ONENABLE_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_FAKEBILLBOARD_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_FAKEBILLBOARD_UPDATE_OFFSET))(this);
	}
};
